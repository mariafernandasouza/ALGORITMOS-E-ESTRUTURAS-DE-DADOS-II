#include <stdio.h>

int calcularResultado(int v[], int n); // Declara a fun��o para calcular a soma dos elementos de um vetor

int main(){
	int vetor[5], i, resultado;
	
	 // Preenche o vetor com valores pares de 0 a 5
	for(i = 0; i < 5; i++){
		vetor[i] = i*2;
	}
	
	 // Chama a fun��o calcularResultado para obter a soma dos elementos do vetor
	resultado = calcularResultado(vetor, 5);
	
	 // Imprime o resultado
	printf("O resultado e: %d\n", resultado);
	
	return 0;
	
}

// Fun��o para calcular a soma dos elementos de um vetor
int calcularResultado(int v[], int n){
	int i, soma = 0;
	
	// Passa por todos os elementos do vetor e soma seus valores
	for(i = 0; i < n; i++){
		soma += v[i];
	}
	return soma;
}
