#include <stdio.h>

int main() { 
  int a, b, c;

  printf("Insira um número: \n");
  scanf("%d", &a);
  printf("Insira um segundo número: \n");
  scanf("%d", &b);

  if(a == b){
    c = a + b;
  } else {
    if (a != b){
      c = a * b;
    }
  }

  printf("\nO número após os cálculos %d", c);
  return 0;
}
