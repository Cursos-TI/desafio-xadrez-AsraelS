#include <stdio.h>

// Função recursiva para movimentação da Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para movimentação do Bispo
void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

// Função de movimentação do Bispo com loops aninhados
void moverBispoLoop(int casas) {
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }
}

// Função recursiva para movimentação da Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

int main() {
    // Simulação do movimento da Torre (5 casas para a direita)
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    // Simulação do movimento do Bispo (5 casas na diagonal para cima e direita)
    printf("Movimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(5);
    printf("\n");
    
    printf("Movimento do Bispo (Loops Aninhados):\n");
    moverBispoLoop(5);
    printf("\n");

    // Simulação do movimento da Rainha (8 casas para a esquerda)
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    // Simulação do movimento do Cavalo (2 casas para cima, 1 casa para a direita) com loops aninhados
    printf("Movimento do Cavalo:\n");
    for (int i = 0; i < 2; i++) { // Move 2 casas para cima
        printf("Cima\n");
        if (i == 1) continue; // Controle de fluxo
    }
    for (int j = 0; j < 2; j++) { // Loop extra para complexidade
        if (j == 0) {
            printf("Direita\n");
            break; // Interrupção do fluxo para simular controle
        }
    }
    printf("\n");

    return 0;
}
