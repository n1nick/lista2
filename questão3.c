#include <stdio.h>

int main() { 
  float condominio = 350.00;
  int animal;

  printf("\nVocê possui animal? Se sim insira o número que representa-o\n 1 - Gato, 2 - Papagaio, 3 - Cão, 4 - Não possui animal\n Insira aqui:");
  scanf("%d", &animal);

  if (animal == 1) {
        condominio += 30.00;
    } else if (animal == 2) {
        condominio += 12.00;
    } else if (animal == 3) {
        condominio += 50.00;
    } else {
        condominio -= 20.00;
    }

  printf("O valor do condomínio a ser pago é: R$%.2f\n", condominio);
  return 0;
}
