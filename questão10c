#include <stdio.h>

int main() { 
  float salario, salariod;

  printf("Entre com o seu sálario: \n");
  scanf("%f", &salario);

  if (salario <= 600.00) {
    printf("\nVocê está isento");
  } else if (salario > 600.00 & salario <= 1.200) {
    salariod = salario - (salario * 0.20);
    printf("\nO desconto do INSS é de %.2f reais", salariod);
  } else if(salario > 1.200 & salario <= 2.000) {
    salariod = salario - (salario * 0.25);
    printf("\nO desconto do INSS é de %.2f reais", salariod);
  } else if (salario > 2.000) {
    salariod = salario - (salario * 0.30);
    printf("\nO desconto do INSS é de %.2f reais", salariod);
  }
  return 0;
}
