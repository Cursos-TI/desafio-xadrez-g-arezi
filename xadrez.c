
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

/* 
    // Nível Novato - Movimentação das Peças
   
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
