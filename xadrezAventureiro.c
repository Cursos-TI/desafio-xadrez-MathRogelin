#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

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

                for (int e = 1; e <= 5; e++){
                    printf("Esquerda\n");
                }
                
                break;
            case 2:

                for (int d = 1; d <= 5; d++){
                    printf("Direita\n");
                }

                break;
            case 3:

                for (int c = 1; c <= 5; c++){
                    printf("Cima\n");
                }

                break;
            case 4:

                for (int b = 1; b <= 5; b++){
                    printf("Baixo\n");
                }

                break;
            
            default:
                printf("Valor Invalido, nenhum movimento...");
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
        // variavel para inicialização
        int posicaoBispo = 1;

        switch (direcao){
            case 1:

                while (posicaoBispo <= 5){
                    printf("Esquerda, Cima\n");
                    posicaoBispo++;
                }
                
                break;
            case 2:

                while (posicaoBispo <= 5){
                    printf("Direita, Cima\n");
                    posicaoBispo++;
                }

                break;
            case 3:

                while (posicaoBispo <= 5){
                    printf("Esquerda, Baixo\n");
                    posicaoBispo++;
                }

                break;
            case 4:

                while (posicaoBispo <= 5){
                    printf("Direita, Baixo\n");
                    posicaoBispo++;
                }

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
        // variavel para inicialização
        int posicaoRainha = 1;

        switch (direcao){
            case 1:
                do{
                    printf("Esquerda\n");
                    posicaoRainha++;
                }while (posicaoRainha <= 8);
                
                break;
            case 2:
                do{
                    printf("Direita\n");
                    posicaoRainha++;
                }while (posicaoRainha <= 8);

                break;
            case 3:

                do{
                    printf("Cima\n");
                    posicaoRainha++;
                }while (posicaoRainha <= 8);

                break;
            case 4:

                do{
                    printf("Baixo\n");
                    posicaoRainha++;
                }while (posicaoRainha <= 8);

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
