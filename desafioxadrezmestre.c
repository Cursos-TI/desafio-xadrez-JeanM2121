#include <stdio.h>

//Movimentação da torre na função recursiva
void movertorre(int casas) {
    if (casas == 0) return;
    printf(" Direita (%d)\n", casas);
    movertorre(casas - 1);
}

//Movimentação da Rainha na função recursiva
void moverrainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda (%d)\n", casas);
    moverrainha(casas - 1);
}

//Movimentação do Bispo na função recursiva
void moverbispo(int casas) {
    if (casas == 0) return;
    printf("Cima,Direita (%d)\n", casas);
    
    moverbispo(casas - 1);
}

// Movimentação do Bispo usando loops aninhados
void moverbispoloop(int casas) {
    for (int i = 1; i <= casas; i++) {
        for (int j = 1; j <= 1; j++) { // Loop interno do deslocamento horizontal
            printf("Cima, Direita (%d)\n", i);
           
        }
    }
}

// Movimentação do Cavalo usando loops aninhados e controle de fluxo
void moverCavalo(){
    int movercavaloCima = 0, movercavaloDireita = 0;
    for (int i = 1; i <= 2; i++) { // Move duas casas para cima
        movercavaloCima++;
        printf("Cima (%d)\n", movercavaloCima);
    }
    for (int j = 1; j <= 1; j++) { // Move uma casa para a direita
        movercavaloDireita++;
        printf("Direita (%d)\n", movercavaloDireita);
    }
}

int main() {
   
    // Movimentação da Torre
     printf("Movimentação da Torre:\n");
     movertorre(5);
    
    // Movimentação do Bispo (Recursivo)
    printf("Movimentação do Bispo (Recursivo):\n");
    moverbispo(5);     
    
    // Movimentação do Bispo (Loops Aninhados)
    printf("Movimentação bispo em loop \n");
    moverbispoloop(5);
   
     // Movimentação do Cavalo
     printf("movimentação do cavalo \n");
     moverCavalo();
 
    
    // Movimentação do Bispo (Loops Aninhados)
    printf("Movimentação da Rainha:\n");
    moverrainha(8);


   return 0;


}

