#include <stdio.h>

int main() {
    float media;

    printf("Digite a media final: ");
    scanf("%f", &media);

    if (media >= 7) {
        printf("Aprovado\n");
    } else if (media >= 5) {
        printf("Recuperacao\n");
    } else {
        printf("Reprovado\n");
    }

    printf("Media informada: %.1f\n", media);
    return 0;
}