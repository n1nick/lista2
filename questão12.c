#include <stdio.h>

int main() { 
  float nddias, taxa, servico, valortd, subtotal, contap, contaf;
  char apartamento;

  printf("Entre com o tipo do seu apartamento: \n");
  scanf("%c", &apartamento);  
  printf("\nEntre com a quantidade de dias hospedado:\n");
  scanf("%f", &nddias);
  printf("\nEntre com a conta de serviços:\n");
  scanf("%f", &servico);

  if (apartamento == 'A' || apartamento == 'a') {
    valortd = nddias * 150.0;
    subtotal = valortd + servico;
    taxa = subtotal * 0.10;
    contaf = subtotal + taxa;
    printf("\nO valor da conta final foi de %.2f\n", contaf);
  } else if (apartamento == 'B' || apartamento == 'b') {
    valortd = nddias * 100.0;
    subtotal = valortd + servico;
    taxa = subtotal * 0.10;
    contaf = subtotal + taxa;
    printf("\nO valor da conta final foi de %.2f\n", contaf);
  } else if (apartamento == 'C' || apartamento == 'c') {
    valortd = nddias * 75.0;
    subtotal = valortd + servico;
    taxa = subtotal * 0.10;
    contaf = subtotal + taxa;
    printf("\nO valor da conta final foi de %.2f\n", contaf);
  } else if (apartamento == 'D' || apartamento == 'd') {
    valortd = nddias * 175.0;
    subtotal = valortd + servico;
    taxa = subtotal * 0.10;
    contaf = subtotal + taxa;
    printf("\nO valor da conta final foi de %.2f\n", contaf);
  }

  
  return 0;
}
