#include <stdio.h>
float calcularMedia(int num1, int num2, int num3) {
	return (num1 + num2 + num3) / 3.0;
}

int main() {
	int numero1, numero2, numero3;
	
	printf("Digite o primeiro n�mero inteiro: ");
	scanf("%d", &numero1);
	
	printf("Digite o segundo n�mero inteiro: ");
	scanf("%d", &numero2);
	
	printf("Digite o terceiro n�mero inteiro: ");
	scanf("%d", &numero3);
	
	float media = calcularMedia(numero1, numero2, numero3);
	
	printf("A m�dia dos tr�s n�meros �: %.2f\n", media);
	
	return 0;
}

