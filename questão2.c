#include <stdio.h>

int main() { 
    float salario, financiamento, salarioc, calculo;

    printf("Qual o valor de financiamento você deseja: \n");
    scanf("%f", &financiamento);
    printf("Informe-nos o valor do seu salário do seu salário: \n");
    scanf("%f", &salario);

    if(financiamento <= salario * 5){
      printf("Financiamento concedido!\n");
    } else {
      printf("Informe-nos o salário do seu cônjuge: \n");
      scanf("%f", &salarioc);
      if(financiamento <= (salario + salarioc) *5){
        printf("Financiamento concedido!\n");
      } else{
        printf("Financiamento negado!\n");
      }
    }

  printf("Obrigado por nos consultar.");
  return 0;
}
