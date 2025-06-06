#include <stdio.h>
int main(){

  int Index;
  char * nomesAlunos [3][3] = {
    {"Aluno 1", "Pt: 30", "Mat: 90"},
    {"Aluno 2", "Pt: 60", "Mat: 60"},
    {"Aluno 3", "Pt: 90", "Mat: 30"}
  };
  printf("Digite o número do aluno que queira ver as notas... \n");
  printf("para o aluno 0, digite 0\n");
  printf("para o aluno 1, digite 1\n");
  printf("para o aluno 2, digite 2\n");

  scanf("%d", &Index);

  printf("as notas do %s são: %s, %s... \n", nomesAlunos[Index][0], nomesAlunos[Index][1], nomesAlunos[Index][2]);
}