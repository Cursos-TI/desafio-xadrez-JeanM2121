#include <stdio.h>   
#include <stdlib.h>
#include <conio.h>
  
 
//DESENVOLVI O CODIGO ME BASEANDO EM TODAS AS POSIÇÕES POSSIVEIS QUE CADA PEÇA POSSA FAZER PULANDO 5 CASAS....
int main() {

    int cavalo = 1;

    printf("****TORRE****\n"); //Movimentos possiveis da torre!!
   for ( int i = 0; i < 5; i++) {

        printf("Cima \n");
   }
    for ( int i = 0; i < 5; i++) {

        printf("Direita \n");
    }
    
    for ( int i = 0; i < 5; i++) {

        printf("Esquerda \n");
    }
    
    for ( int i = 0; i < 5; i++) {

        printf("Baixo \n");
    }
        printf("****BISPO****\n"); //Movimentos possiveis do bispo!!!
   for ( int i = 0; i < 5; i++) {

        printf("cima, direita\n");
   }
   
   for ( int i = 0; i < 5; i++) {

        printf(" baixo, direita \n");
    }

    for ( int i = 0; i < 5; i++) {

        printf(" cima, esquerda \n");
    }
    
    for ( int i = 0; i < 5; i++) {

        printf(" baixo, esquerda \n");
    }

        printf("****RAINHA****\n"); //Movimentos possiveis da rainha!!!
   for ( int i = 0; i < 5; i++) {

        printf("Cima \n");
   }
          
   for ( int i = 0; i < 5; i++) {

         printf("baixo \n");
        
   }
   for ( int i = 0; i < 5; i++) {

    printf(" cima, direita\n");
}

for ( int i = 0; i < 5; i++) {

    printf(" baixo, direita \n");
}

for ( int i = 0; i < 5; i++) {

    printf(" cima, esquerda \n");
}

for ( int i = 0; i < 5; i++) {

    printf("baixo, esquerda \n");
}
for ( int i = 0; i < 5; i++) {

    printf("Direita\n");
}

for ( int i = 0; i < 5; i++) {

    printf("Esquerda \n");
}

printf("*** CAVALO! *** \n");
    while(cavalo --){
        for (int i = 0; i < 2; i++){
            printf("Baixo... \n");
         
        }
        printf("Esquerda... \n");
    }

    return 0;


}




    
