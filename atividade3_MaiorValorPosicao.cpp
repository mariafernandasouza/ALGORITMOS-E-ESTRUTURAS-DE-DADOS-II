#include <stdio.h>

// Fun��o para encontrar o maior valor e sua posi��o no vetor
void encontrarMaiorValor(int vetor[], int tamanho) {
    int maiorValor = vetor[0]; 
    int posicao = 0;           

    // Percorre o vetor para encontrar o maior valor
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maiorValor) {
            maiorValor = vetor[i];  // Atualiza o maior valor
            posicao = i;            // Atualiza a posi��o do maior valor
        }
    }

    // Imprime o maior valor e sua posi��o
    printf("O maior valor � %d e est� na posi��o %d.\n", maiorValor, posicao);
}

int main() {
    int tamanho;

    // Solicita ao usu�rio o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    // Cria o vetor com o tamanho fornecido
    int vetor[tamanho];

    // Preenche o vetor com valores fornecidos pelo usu�rio
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor para a posi��o %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Chama a fun��o para encontrar o maior valor e sua posi��o
    encontrarMaiorValor(vetor, tamanho);

    return 0;
}

