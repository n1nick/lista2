#include <stdio.h>

int main() { 
  int numero;

  printf("Digite um número:\n");
  scanf("%d", &numero);

  if (numero == 1) {
    printf("\nEsse número corresponde ao mês de janeiro\n");
  } else if (numero == 2) {
    printf("\nEsse número corresponde ao mês de fevereiro\n");
  } else if (numero == 3) {
        printf("\nEsse número corresponde ao mês de março\n");
  } else if (numero == 4) {
    printf("\nEsse número corresponde ao mês de abril\n");
  } else if (numero == 5) {
    printf("\nEsse número corresponde ao mês de maio\n");
  } else if (numero == 6) {
        printf("\nEsse número corresponde ao mês de junho\n");
  } else if (numero == 7) {
    printf("\nEsse número corresponde ao mês de julho\n");
  } else if (numero == 8) {
    printf("\nEsse número corresponde ao mês de agosto\n");
  } else if (numero == 9) {
        printf("\nEsse número corresponde ao mês de setembro\n");
  } else if (numero == 10) {
    printf("\nEsse número corresponde ao mês de outubro\n");
  } else if (numero == 11) {
    printf("\nEsse número corresponde ao mês de novembro\n");
  } else if (numero == 12) {
        printf("\nEsse número corresponde ao mês de dezembro\n");
  } else {
    printf("\nNão existe mês que corresponda ao número que você digitou\n");
  }
  return 0;
}
