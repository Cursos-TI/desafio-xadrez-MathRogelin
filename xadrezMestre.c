#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// torre

void movimentoEsquerdaTorre(int e){
    if( e > 5){
        return;
    }
    printf("Esquerda\n");
    movimentoEsquerdaTorre( e + 1);
};

void movimentoDireitaTorre(int d){
    if( d > 5){
        return;
    }
    printf("Direita\n");
    movimentoDireitaTorre( d + 1);
};

void movimentoCimaTorre(int c){
    if( c > 5){
        return;
    }
    printf("Cima\n");
    movimentoCimaTorre( c + 1);
};

void movimentoBaixoTorre(int b){
    if( b > 5){
        return;
    }
    printf("Baixo\n");
    movimentoBaixoTorre( b + 1);
};

// Bispo

void movimentoDiagonalEsquerdaBispo(int be) {
    if (be >= 5) {
        return;
    }
    int i = 0;  
    while (i < 1) { // vertical
        printf("Cima\n");
        for (int j = 0; j < 1; j++) { // horizontal
            printf("Esquerda\n");
        }
        i++; 
    }
    movimentoDiagonalEsquerdaBispo(be + 1); // Chamada recursiva
}

void movimentoDiagonalDireitaBispo(int bd) {
    if (bd >= 5) {
        return;
    }
    int i = 0;  
    while (i < 1) { // vertical
        printf("Cima\n");
        for (int j = 0; j < 1; j++) { // horizontal
            printf("Direita\n");
        }
        i++; 
    }
    movimentoDiagonalDireitaBispo(bd + 1); // Chamada recursiva
}

void movimentoDiagonalEsquerdaBaixoBispo(int bBe) {
    if (bBe >= 5) {
        return;
    }
    int i = 0;  
    while (i < 1) { // vertical
        printf("Baixo\n");
        for (int j = 0; j < 1; j++) { // horizontal
            printf("Esquerda\n");
        }
        i++; 
    }
    movimentoDiagonalEsquerdaBaixoBispo(bBe + 1); // Chamada recursiva
}

void movimentoDiagonalDireitaBaixoBispo(int bBd) {
    if (bBd >= 5) {
        return;
    }
    int i = 0;  
    while (i < 1) { // vertical
        printf("Baixo\n");
        for (int j = 0; j < 1; j++) { // horizontal
            printf("Direita\n");
        }
        i++; 
    }
    movimentoDiagonalEsquerdaBaixoBispo(bBd + 1); // Chamada recursiva
}

// Rainha

void movimentoEsquerdaRainha(re){
    int i = 0;
    do{
        if (re > 8){
            return;
        }
        
        printf("Esquerda\n");
        i++;
        movimentoEsquerdaRainha(re + 1);
    }while ( i < 1);
};

void movimentoDireitaRainha(rd){
    int i = 0;
    do{
        if (rd > 8){
            return;
        }
        
        printf("Direita\n");
        i++;
        movimentoDireitaRainha(rd + 1);
    }while ( i < 1);
};

void movimentoCimaRainha(rc){
    int i = 0;
    do{
        if (rc > 8){
            return;
        }
        
        printf("Cima\n");
        i++;
        movimentoCimaRainha(rc + 1);
    }while ( i < 1);
};

void movimentoBaixoRainha(rb){
    int i = 0;
    do{
        if (rb > 8){
            return;
        }
        
        printf("Baixo\n");
        i++;
        movimentoBaixoRainha(rb + 1);
    }while ( i < 1);
};

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    int escolha, direcao;

    printf("Desafio Movimentacao de Pecas de Xadres\n");
    printf("======================================================\n\n");
    printf("Escolha uma peca para movimentar digitando seu numero:\n");
    printf(" 1 - Torre\n");
    printf(" 2 - Bispo\n");
    printf(" 3 - Rainha\n");
    printf(" 4 - Cavalo\n");
    printf("Digite aqui: ");
    scanf("%d", &escolha);

    switch (escolha){
    case 1:
        // usando a estrutura for para Torre
        printf("Escolha para onde quer movimentar a torre:\n");
        printf(" 1 - Esquerda\n");
        printf(" 2 - Direita\n");
        printf(" 3 - Cima\n");
        printf(" 4 - Baixo\n");
        printf("Digite aqui: ");
        scanf("%d", &direcao);

        switch (direcao){
            case 1:
                movimentoEsquerdaTorre(1);
                
                break;
            case 2:
                movimentoDireitaTorre(1);

                break;
            case 3:
                movimentoCimaTorre(1);

                break;
            case 4:

                movimentoBaixoTorre(1);

                break;
            
            default:
                printf("Valor Invalido, nenhum movimento...\n");
                break;
            }

        break;

    case 2:
        // usando a estrutura while para Bispo
        printf("Escolha para onde quer movimentar o Bispo:\n");
        printf(" 1 - Diagonal Superior Esquerda\n");
        printf(" 2 - Diagonal Superior Direita\n");
        printf(" 3 - Diagonal Inferior Esquerda\n");
        printf(" 4 - Diagonal Inferior Direita\n");
        printf("Digite aqui: ");
        scanf("%d", &direcao);

        switch (direcao){
            case 1:

                movimentoDiagonalEsquerdaBispo(1);
                
                break;
            case 2:

                movimentoDiagonalDireitaBispo(1);

                break;
            case 3:

                movimentoDiagonalEsquerdaBaixoBispo(1);

                break;
            case 4:

                movimentoDiagonalDireitaBaixoBispo(1);

                break;
            
            default:
                printf("Valor Invalido, nenhum movimento...");
                break;
        }
        break;
    case 3:
        // usando a estrutura while para Bispo
        printf("Escolha para onde quer movimentar a Rainha:\n");
        printf(" 1 - Esquerda\n");
        printf(" 2 - Direita\n");
        printf(" 3 - Cima\n");
        printf(" 4 - Baixo\n");
        printf("Digite aqui: ");
        scanf("%d", &direcao);

        switch (direcao){
            case 1:
                movimentoEsquerdaRainha(1);
                
                break;
            case 2:
                movimentoDireitaRainha(1);

                break;
            case 3:

                movimentoCimaRainha(1);

                break;
            case 4:

                movimentoBaixoRainha(1);

                break;
            
            default:
                printf("Valor Invalido, nenhum movimento...");
                break;
        }
        break;
    case 4:
        // usando as estruturas for e while para Cavalo
        printf("Escolha para onde quer movimentar a Rainha:\n");
        printf(" 1 - L para cima (Esquerda)\n");
        printf(" 2 - L para cima (Direita)\n");
        printf(" 3 - L para baixo (Esquerda)\n");
        printf(" 4 - L para baixo (Direita)\n");
        printf(" 5 - L para esquerda (Cima)\n");
        printf(" 6 - L para esquerda (Baixo)\n");
        printf(" 7 - L para direita (Cima)\n");
        printf(" 8 - L para direita (Baixo)\n");
        printf("Digite aqui: ");
        scanf("%d", &direcao);
        int j = 1;
        switch (direcao){
            case 1:
                for (int i = 1; i <= 1; i++){
                    while (j <= 2){
                        printf("Cima\n");
                        j++;
                    };
                    
                    printf("Esquerda\n");
                }
                
                break;
            case 2:
                for (int i = 1; i <= 1; i++){
                    while (j <= 2){
                        printf("Cima\n");
                        j++;
                    };
                    
                    printf("Direita\n");
                }
                break;
            case 3:
                for (int i = 1; i <= 1; i++){
                    while (j <= 2){
                        printf("Baixo\n");
                        j++;
                    };
                    
                    printf("Esquerda\n");
                }
                break;
            case 4:
                for (int i = 1; i <= 1; i++){
                    while (j <= 2){
                        printf("Baixo\n");
                        j++;
                    };
                    
                    printf("Direita\n");
                }
                break;
            case 5:
                for (int i = 1; i <= 1; i++){
                    while (j <= 2){
                        printf("Esquerda\n");
                        j++;
                    };
                    
                    printf("Cima\n");
                }
                break;
            case 6:
                for (int i = 1; i <= 1; i++){
                    while (j <= 2){
                        printf("Esquerda\n");
                        j++;
                    };
                    
                    printf("Baixo\n");
                }
                break;
            case 7:
                for (int i = 1; i <= 1; i++){
                    while (j <= 2){
                        printf("Direita\n");
                        j++;
                    };
                    
                    printf("Cima\n");
                }
                break;
            case 8:
                for (int i = 1; i <= 1; i++){
                    while (j <= 2){
                        printf("Direita\n");
                        j++;
                    };
                    
                    printf("Baixo\n");
                }
                break;
            
            default:
                printf("Valor Invalido, nenhum movimento...");
                break;
        }
        break;
    default:
        printf("Escolha invalida");
        break;
    }
    return 0;
}
