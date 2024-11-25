#include <stdio.h>

int Menor(int num1, int num2, int num3) {
	int menorValor = num1;
	
	if (num2 < menorValor) {
		menorValor = num2;
	}
	
	if (num3 < menorValor) {
		menorValor = num3;
	}
	
	return menorValor;
}

int main() {
	int primeiroNumero, segundoNumero, terceiroNumero;
	
	printf("Digite o primeiro número inteiro: ");
	scanf("%d", &primeiroNumero);
	
	printf("Digite o segundo número inteiro: ");
	scanf("%d", &segundoNumero);
	
	printf("Digite o terceiro número inteiro: ");
	scanf("%d", &terceiroNumero);
	
	int menor = Menor(primeiroNumero, segundoNumero, terceiroNumero);
	
	printf("O menor número é: %d\n", menor);
	
	return 0;
}

