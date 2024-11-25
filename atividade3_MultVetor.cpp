#include <stdio.h>
float multiplicarValores(float vetor[], int tamanho) {
	float produto = 1.0;
	
	for (int i = 0; i < tamanho; i++) {
		produto *= vetor[i];
	}
	
	return produto;
}

int main() {
	int tamanho;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tamanho);
	
	float vetor[tamanho];
	
	printf("Digite %d valores:\n", tamanho);
	
	for (int i = 0; i < tamanho; i++) {
	scanf("%f", &vetor[i]);
}

	float resultado = multiplicarValores(vetor, tamanho);
	
	printf("O resultado da multiplicacao dos valores e: %.2f\n", resultado);
	
	return 0;
}

