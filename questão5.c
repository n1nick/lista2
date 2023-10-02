#include <stdio.h>

int main() { 
  int a;

  printf("Entre com um número:\n");
  scanf("%d", &a);

  if(a % 10 == 0) {
      printf("\nO número é divisível por 10");
    } else {
    if (a % 5 == 0) {
    printf("\nO número é divisível por 5");
  } else {
    if(a % 2 == 0) {
      printf("\nO número é divisível por 2");
    } else {
      printf("\nO número não é divisível nem por 10, nem por 5 e nem por 2");
    }
  }
  }
  return 0;
}
