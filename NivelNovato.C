#include <stdio.h>
int main(){
int Index;
int i, j;
     int Tabuleiro[10][10];  
   printf("inicializando tabuleiro...\n");
     for (int i = 0; i < 10; i++){
     for (int j = 0; j < 10; j++){
      Tabuleiro[i][j] = 0;
     }
    }
   printf("Tabuleiro inicializando com água!\n");

   printf("Posicionando navio horizontal...\n");
    int linha_navio_h = 2;
    int coluna_inicio_navio_h = 4;
    for (j = 0; j < 3; j++) { 
        Tabuleiro[linha_navio_h][coluna_inicio_navio_h + j] = 3;
    }
   printf("Posicionando navio vertical...\n");
    int coluna_navio_v = 1;
    int linha_inicio_navio_v = 5;
    for (i = 0; i < 3; i++) { 
        Tabuleiro[linha_inicio_navio_v + i][coluna_navio_v] = 3;
    }
   printf("Navios posicionados!\n");

  return 0;
}