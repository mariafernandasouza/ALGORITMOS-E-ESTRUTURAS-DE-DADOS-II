#include <stdio.h>

int soma(int numb[], int tam);

int main() {
    int numb[3];
    int res;

    for (int i = 0; i < 3; i++) {
        printf("Digite o %d° número inteiro: ", i + 1);
        scanf("%d", &numb[i]);
    }

    res = soma(numb, 3);

    printf("A soma dos valores e: %d\n", res);

    return 0;
}

int soma(int numb[], int tam){
	int total = 0;
    for (int i = 0; i < tam; i++) {
        total += numb[i];
    }
    return total;
}
