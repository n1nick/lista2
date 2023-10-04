#include <stdio.h>

int main() { 
  float valorc, valorp, parcelas;

  printf("Entre com o valor da sua compra: \n");
  scanf("%f", &valorc);
  printf("\nEntre com a quantidade de parcelas:");
  scanf("%f", &parcelas);

  if (parcelas == 1) {
    printf("\nO valor a pagar parcelado em 1x é de %.2f reais", valorc);
  } else if (parcelas == 2) {
    valorp = valorc + (valorc * 0.10);
    printf("\nO valor a pagar parcelado em 2x %.2f reais", valorp);
  } else if(parcelas >= 3) {
    valorp = valorc + (valorc * 0.20);
    printf("\nO valor a pagar parcelado em 3x %.2f reais", valorp);
  }
  return 0;
}
