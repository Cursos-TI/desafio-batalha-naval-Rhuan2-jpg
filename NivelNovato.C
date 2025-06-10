#include <stdio.h>
int main(){
int i, j;
     int Tabuleiro[10][10];  
   printf("inicializando tabuleiro...\n");
     for (int i = 0; i < 10; i++){
     for (int j = 0; j < 10; j++){
      Tabuleiro[i][j] = 0;
     }
    }

   printf("Posicionando navio horizontal...\n");
    for (j = 0; j < 3; j++) { 
        Tabuleiro[2][4 + j] = 3;
    }
   printf("Posicionando navio vertical...\n");
    for (i = 0; i < 3; i++) { 
        Tabuleiro[5 + i][1] = 3;
    }
   printf("Navios posicionados!\n");

   printf("    ");
   for (j = 0; j < 10; j++){
    printf("%d ", j);
   }
   printf("\n");
   printf("    ___________________\n");

   for (i = 0; i < 10; i++){
    printf("%2d |", i);
    for (j = 0; j < 10; j++){
       printf("%d ", Tabuleiro[i][j]);
    }
    printf("\n");
   }

  return 0;
}