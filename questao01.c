#include <stdio.h>

int main() {
    float media;

    printf("Digite a media final do aluno: ");
    scanf("%f", &media);

    if (media >= 7.0) {
        printf("Aluno aprovado! Parabens!\n");
    } else {
        printf("Aluno reprovado!\n");
    }
    return 0;
}