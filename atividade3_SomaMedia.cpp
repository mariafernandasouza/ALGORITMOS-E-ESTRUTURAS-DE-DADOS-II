 #include <stdio.h>

float somarValores(int vetor[], int tamanho) {
float soma = 0.0;
for (int i = 0; i < tamanho; i++) {
  	   soma += vetor[i]; // Soma os elementos do vetor
}

return soma; 
}

int main() {

int tamanho;

printf("Digite o tamanho do vetor: ");
scanf("%d", &tamanho);

int vetor[tamanho]; 

for (int i = 0; i < tamanho; i++) {
printf("Digite o valor %d: ", i + 1);
scanf("%d", &vetor[i]); }

float soma = somarValores(vetor, tamanho);

float media = soma / tamanho;

printf("Soma: %.2f\n", soma);
printf("Media: %.2f\n", media);

return 0; 
}

