#include <stdio.h>

int soma(int x, int y){
	return x + y;
}

int main(){
	int numb1, numb2, res;
	
	printf("Digite o primiero numero: ");
	scanf("%d", &numb1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &numb2);
	
	res = soma(numb1, numb2);
	
	printf("A soma dos numeros e: %d\n;", res);
}
