#include <stdio.h>
int main(){
  int i, j;
  int Tabuleiro[10][10];
  for (int i = 0; i < 10; i++){
     for (int j = 0; j < 10; j++){
      Tabuleiro[i][j] = 0;
     }
    }
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
   
   
  

  
    
