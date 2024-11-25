#include <stdio.h>

int maior(int x, int y){
	if (x > y){
		return x;
	}else{
		return y;
	}
}

int main(){
	int numb1, numb2, res;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &numb1);
	printf("Digite o segundo numero: ");
	scanf("%d", &numb2);
	
	res = maior(numb1, numb2);
	
	printf("O maior numero e: %d", res);
}
