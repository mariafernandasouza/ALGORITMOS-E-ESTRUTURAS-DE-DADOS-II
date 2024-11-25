#include <stdio.h>
#include  <string.h> // Inclui a biblioteca para uso de strings
#include <locale.h> // Inclui a biblioteca para configuração do locale


// Define uma estrutura para representar um carro
typedef struct{
	char modelo[50];
	int ano;
	double preco;
}Carro;

// Função para modificar o preço de um carro
void modificarPreco(Carro *c, double novoPreco){
	c->preco = novoPreco;
}

// Função para imprimir as informações de um carro
void imprimirCarro(Carro *c){
	printf("Modelo: %s\n", c -> modelo);
	printf("Ano: %d\n", c->ano);
	printf("Preço: R$ %.2lf\n", c->preco);
}

int main(){
	setlocale(LC_ALL, "portuguese");
	
	Carro carrol;  // Cria um objeto do tipo Carro chamado carrol
	
	strcpy(carrol.modelo, "Xyz");
	carrol.ano = 2020;
	carrol.preco = 90000.00;
	
	printf("Dados antes da modificação:\n");
	imprimirCarro(&carrol); // Imprime os dados iniciais de carrol
	
	modificarPreco(&carrol, 115000.00);
	
	printf("\nDados após a modificação do preco:\n");
	imprimirCarro(&carrol); // Imprime os dados atualizados de carrol
	
	return 0;
}
