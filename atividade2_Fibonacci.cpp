#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0; 
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n = 0;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int resultado = fibonacci(n);
    printf("O %d-esimo termo da serie de Fibonacci e: %d\n", n, resultado);

    return 0;
}
