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
	
	printf("Digite o primeiro n�mero inteiro: ");
	scanf("%d", &primeiroNumero);
	
	printf("Digite o segundo n�mero inteiro: ");
	scanf("%d", &segundoNumero);
	
	printf("Digite o terceiro n�mero inteiro: ");
	scanf("%d", &terceiroNumero);
	
	int menor = Menor(primeiroNumero, segundoNumero, terceiroNumero);
	
	printf("O menor n�mero �: %d\n", menor);
	
	return 0;
}

