#include <stdio.h>

int main() { 
  int a, b, resultado;
  char operacao;

  printf("Insira o primeiro número: \n");
  scanf("%d", &a);
  printf("\nInsira o segundo número: \n");
  scanf("%d", &b);
  printf("\nOpções de operações:\n* Multiplicação\n/ Divisão\n+ Adição\n- Subtração");
  printf("\nInsira o símbolo operação desejada: \n");
  scanf(" %c", &operacao);

  if (operacao == '*') {
    resultado = a * b;
    printf("\nO resultado da multiplicação é %d\n", resultado);
  } else if (operacao == '/') {
    resultado = a / b;
    printf("\nO resultado da divisão é %d\n", resultado);
  } else if (operacao == '+') {
    resultado = a + b;
    printf("\nO resultado da adição é %d\n", resultado);
  } else if (operacao == '-') {
    resultado = a - b;
    printf("\nO resultado da subtração é %d\n", resultado);
  }
  
  
  return 0;
}
