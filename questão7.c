#include <stdio.h>

int main() { 
  float salario, aumento;
  int profissao;

  printf("Entre com o seu salário: \n");
  scanf("%f", &salario);
  printf("1 - Técnico, 2 - Gerente, 3 - Outro");
  printf("\nEntre com o número da sua profissão: \n ");
  scanf("%d", &profissao);

  if (profissao == 1) {
    aumento = salario + (salario * 0.50);
  } else {
    if (profissao == 2){
      aumento = salario + (salario * 0.30);
    } else {
    if (profissao == 3){
      aumento = salario + (salario * 0.20);
    }
    }
  }

  printf("Seu salário com aumento é %.2f \n", aumento);
  return 0;
}
