#include <stdio.h>

void exibirInverso(int vetor[], int tamanho) {
	printf("N�meros na ordem inversa:\n");
	
	for (int i = tamanho - 1; i >= 0; i--) {
		printf("%d\n", vetor[i]);
	}
}

int main() {
	int vetor[10];
	
	printf("Digite 10 n�meros inteiros:\n");
	
	for (int i = 0; i < 10; i++) {
		printf("N�mero %d: ", i + 1);
	scanf("%d", &vetor[i]);
	}
	
	exibirInverso(vetor, 10);
	
	return 0;
}

