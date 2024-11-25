#include <stdio.h>

int calcularResultado(int soma, int primeiroValor, int ultimoValor) {
	return soma + (primeiroValor * 5) + (ultimoValor * 2);
}

int main() {
	int vetor[10];
	int soma = 0;
	
	for (int i = 0; i < 10; i++) {
		vetor[i] = i + 1;
	}
	
	for (int i = 0; i < 10; i++) {
		soma += vetor[i];
	}
	
	int resultado = calcularResultado(soma, vetor[0], vetor[9]);
	
	printf("O resultado da funcao e: %d\n", resultado);
	
	return 0;
}

