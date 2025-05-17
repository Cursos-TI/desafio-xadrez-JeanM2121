#include <stdio.h>

int main() {
    int bispo = 0; 
    int cavalo = 0;
    int rainha = 0;
    int torre = 0;

    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%d\t", i * j);
        }
        printf("\n");
    }

    printf("Movimentando o Bispo (5 casas):\n");

    do {
        printf("Cima, Direita\n");  
        bispo++; 
    } while (bispo < 5); 

    printf("Movimentando o torre (5 casas):\n");

    do {
        printf("Cima\n");  
        torre++; 
    } while (torre < 5); 

    printf("Movimentando a rainha (5 casas):\n");

    do {
        printf("esquerda\n");  
        rainha++; 
    } while (rainha < 5); 

    printf("movimentando o cavalo \n");
    
    while(cavalo --){
        for (int i = 0; i < 2; i++){
            printf("Baixo... \n");
            
        }
        printf("Esquerda... \n");
        
    }



    return 0;
}
    
