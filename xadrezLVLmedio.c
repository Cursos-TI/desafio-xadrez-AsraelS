#include <stdio.h>

int main() {
    // Simulação do movimento da Torre (5 casas para a direita) com FOR
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Simulação do movimento do Bispo (5 casas na diagonal para cima e direita) com WHILE
    printf("Movimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima Direita\n");
        j++;
    }
    printf("\n");

    // Simulação do movimento da Rainha (8 casas para a esquerda) com DO-WHILE
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);
    printf("\n");

    // Simulação do movimento do Cavalo (2 casas para baixo, 1 casa para a esquerda) com loops aninhados
    printf("Movimento do Cavalo:\n");
    for (int m = 0; m < 2; m++) { // Move 2 casas para baixo
        printf("Baixo\n");
    }
    int n = 0;
    while (n < 1) { // Move 1 casa para a esquerda
        printf("Esquerda\n");
        n++;
    }
    
    return 0;
}
