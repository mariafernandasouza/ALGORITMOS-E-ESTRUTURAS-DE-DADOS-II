#include <stdio.h>
void exibirPares(int numero) {
	for (int i = 2; i <= numero; i += 2) {
		printf("%d", i);
	if (i + 2 <= numero) {
	printf(", ");
	}
}

	printf("\n");
}

int main() {
	int numero;
	
	printf("Digite um número inteiro: ");
	scanf("%d", &numero);
	
	exibirPares(numero);
	
	return 0;
}

