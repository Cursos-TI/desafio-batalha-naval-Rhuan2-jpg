#include <stdio.h>
int main(){
 
  int i;
  int j;

  char letra;
  
   for(i = 1; i <= 26; i++) {
     letra = 'A';
      for(j = 1; j <= i; j++){
       printf("%c ", letra);
       ++letra; 
   }
   printf("\n");
  }
  }
