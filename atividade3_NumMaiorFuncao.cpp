#include <stdio.h>

void maiorNumero(int num1, int num2) {
	if (num1 > num2) {
		printf("O maior n�mero �: %d\n", num1);
	}else if (num2 > num1) {
		printf("O maior n�mero �: %d\n", num2);
	}else {
		printf("Os n�meros s�o iguais.\n");
	}
}
int main() {
	int num1, num2;
	
	printf("Digite o primeiro n�mero inteiro: ");
	scanf("%d", &num1);
	
	printf("Digite o segundo n�mero inteiro: ");
	
	scanf("%d", &num2);
	
	maiorNumero(num1, num2);
	
	return 0;
}

