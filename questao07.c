#include <stdio.h>

int main() {
    float compra, desconto, valorFinal;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &compra);

    if (compra >= 200) {
        desconto = compra * 0.10;
    } else if (compra >= 100) {
        desconto = compra * 0.05;
    } else {
        desconto = 0;
    }

    valorFinal = compra - desconto;

    printf("Desconto: R$ %.2f\n", desconto);
    printf("Valor final: R$ %.2f\n", valorFinal);
    return 0;
}