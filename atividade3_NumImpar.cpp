#include <stdio.h>


// Fun��o para exibir os n�meros �mpares de 1 at� o n�mero fornecido, excluindo m�ltiplos de 7
void exibirImpares(int n) {
    for (int i = 1; i <= n; i++) {
    	 // Verifica se o n�mero atual (i) � �mpar e n�o � m�ltiplo de 7
        if (i % 2 != 0 && i % 7 != 0) { 
            printf("%d ", i); 
        } 
    }
    printf("\n");
}

int main() {
    int num;  // Declara uma vari�vel inteira para armazenar o n�mero digitado
    printf("Digite um n�mero: ");
    scanf("%d", &num);
    
    // Chama a fun��o para exibir os n�meros �mpares
    exibirImpares(num);
    return 0; 
}

