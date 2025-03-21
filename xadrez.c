#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

/* 
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

 */
#include <stdio.h>

// Definindo constantes para as direções
#define CIMA "Cima\n"
#define BAIXO "Baixo\n"
#define ESQUERDA "Esquerda\n"
#define DIREITA "Direita\n"

// Função para movimentar o Bispo
void moverBispo() {
    printf("Movimentação do Bispo:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Movendo o Bispo %d casas na diagonal superior direita: %s", i, CIMA);
        printf("Movendo o Bispo %d casas na diagonal superior direita: %s", i, DIREITA);
    }
}

// Função para movimentar a Torre
void moverTorre() {
    printf("Movimentação da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Movendo a Torre %d casas para a direita: %s", i, DIREITA);
    }
    // mover a torre para direita
}

// Função para movimentar a Rainha
void moverRainha() {
    printf("Movimentação da Rainha:\n");
    for (int i = 1; i <= 8; i++) {
        printf("Movendo a Rainha %d casas para a esquerda: %s", i, ESQUERDA);
    }
    //  mover a rainha para ESQUERDA
}

int main() {
    // Chamando as funções de movimentação
    moverBispo();
    moverTorre();
    moverRainha();
    // Aqui define movimentos de Bispo,torre ou Rainha
    return 0;
}
