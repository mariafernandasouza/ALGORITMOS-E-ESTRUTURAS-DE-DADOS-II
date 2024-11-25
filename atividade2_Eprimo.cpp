#include <stdio.h>


int Eprimo(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int somaPrimos(int limite) {
    int soma = 0;
    for (int i = 2; i <= limite; i++) {
        if (Eprimo(i)) {
            soma += i;
        }
    }
    return soma;
}

int main() {
    int numb;

    printf("Digite um numero: ");
    scanf("%d", &numb);

    
    if (Eprimo(numb)) {
        printf("%d e primo.\n", numb);
    } else {
        printf("%d nao e primo.\n", numb);
    }

    int soma = somaPrimos(numb);
    printf("A soma dos numeros primos ate %d e: %d.\n", numb, soma);

    return 0;
}
