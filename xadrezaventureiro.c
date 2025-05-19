#include <stdio.h>

int main() {
    // Movimento da Torre usando FOR
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Movimento do Bispo usando WHILE
    printf("Movimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n");

    // Movimento da Rainha usando DO-WHILE
    printf("Movimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    printf("\n");

    // Movimento do Cavalo com loops aninhados
    // Cavalo deve se mover 2 casas para baixo e 1 para a esquerda
    printf("Movimento do Cavalo:\n");
    for (int i = 1; i <= 2; i++) {
        printf("Baixo\n");
    }

    int l = 1;
    while (l <= 1) {
        printf("Esquerda\n");
        l++;
    }

    return 0;
}
