#include <stdio.h>   


int main() {
    //Movimento da Torre com o FOR
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    //Movimento do Bispo com o WHILE
    printf("Movimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n");

    //Movimento da Rainha com o DO-WHILE
    printf("Movimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    printf("\n");

    //Movimento do Cavalo com loops aninhados
    //Cavalo deve se mover 2 casas para baixo e 1 para a esquerda
    printf("Movimento do Cavalo:\n");
    for (int i = 0; i <= 2; i++) {
        for (int j = 0; j <= 1; j++) {
            printf("baixo \n");
        }
        printf("esquerda \n");
        break;
    }

    return 0;
}
