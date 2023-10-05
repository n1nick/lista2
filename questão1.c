#include <stdio.h>

int main() {
    double valordacompra, idade, numerosorteio;

    printf("Preencha para concorrer a um prêmio no final do mês.\n\n");
    printf("Insira a sua idade: \n");

    scanf("%lf", &idade);

    printf("Insira o valor das suas compras: \n");

    scanf("%lf", &valordacompra);

    if (valordacompra < 500.0) {
        numerosorteio = 5000 - (valordacompra * idade);
        printf("Seu número da sorte é %.1lf\n", numerosorteio);
    } else {
        if (valordacompra > 500.0) {
            numerosorteio = 50000 - (valordacompra * idade);
            printf("Seu número da sorte é %.0lf\n", numerosorteio);
        }

        if (valordacompra == 500.0) {
            numerosorteio = idade * idade;
            printf("Seu número da sorte é %.0lf\n", numerosorteio);
        }
    }

    return 0;
}
