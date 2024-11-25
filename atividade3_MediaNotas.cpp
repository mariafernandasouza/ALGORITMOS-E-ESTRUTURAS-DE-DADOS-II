#include <stdio.h>

// Função para calcular a média das notas
float media() {
    float nota1, nota2, nota3, nota4;

    printf("Digite a nota 1: ");
    scanf("%.2f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%.2f", &nota2);

    printf("Digite a nota 3: ");
    scanf("%.2f", &nota3);

    printf("Digite a nota 4: ");
    scanf("%.2f", &nota4);

    return (nota1 + nota2 + nota3 + nota4) / 4; // Calcula e retorna a média
}

int main() {
    float M = media(); // Chama a função e armazena o resultado

    printf("A média e: %.2f\n", M);
    if (M >= 7.0) {
        printf("Aprovado!\n");
    } else {
        printf("Reprovado!\n");
    }

    return 0;
}

7
