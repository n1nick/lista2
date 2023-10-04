#include <stdio.h>

int main() { 
  int idade;

  printf("\nInsira sua idade: \n");
  scanf("%d", &idade);

  if (idade >= 4 & idade <= 5) {
    printf("\nEstá criança terá aulas na turma A\n");
  } else if (idade >= 6 & idade <= 8) {
    printf("\nEstá criança terá aulas na turma B\n");
  } else if (idade >= 9 & idade <= 10) {
    printf("\nEstá criança terá aulas na turma C\n");
  } else {
    printf("\nInfelizmente ainda não há tumas para a sua idade na escolinha :(\n");
  }
  return 0;
}
