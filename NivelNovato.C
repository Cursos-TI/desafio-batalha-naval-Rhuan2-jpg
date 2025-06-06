#include <stdio.h>
int main(){
int Index;
  
  char Linha [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
  float Coluna[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
  int Tabuleiro[10][10];  
  
     for (int j = 0; j < 10; j++){
     printf("%c \n", Linha[j]);
    
     for (int i = 0; i < 10; i++){
     printf("%.0f\n", Coluna[i]);
    }
    
}