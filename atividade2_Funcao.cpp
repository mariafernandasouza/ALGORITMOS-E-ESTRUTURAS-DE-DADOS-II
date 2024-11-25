#include <stdio.h>

int soma(int numb[], int tam);

int main() {
    int numb[5] = {5, 1, 2, 1, 8};
    int tam = 5;

    int res = soma(numb, tam);

    printf("O resultado da soma e: %d\n", res);

    return 0;
}

int soma(int numb[], int tam) {
    int total = 0;
    for (int i = 0; i < tam; i++) {
        total += numb[i];
    }
    return total;
}
