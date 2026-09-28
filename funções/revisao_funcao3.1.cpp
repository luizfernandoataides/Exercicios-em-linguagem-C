/*
Crie uma função:

int maiorVetor(int vetor[], int tamanho)

Ela deve:

Receber um vetor de inteiros.
Receber o tamanho do vetor.
Percorrer o vetor.
Encontrar o maior valor.
Retornar o maior valor encontrado.

No main:

crie um vetor com 5 números;
peça os 5 valores ao usuário;
chame maiorVetor();
guarde o retorno em uma variável;
mostre o maior número.
*/

#include <stdio.h>
#define N 5

int maiorVetor(int vetor[], int tamanho);

int main(){
	
	int num[N];
	int i;
	int resultado;
	
	for(i = 0; i < N; i++){
		printf("Digite o %d valor: ", i+1);
		scanf("%d", &num[i]);
	}
	
	resultado = maiorVetor(num, N);
	
	printf("\n\nMaior numero: %d", resultado);
	
	return 0;
}

int maiorVetor(int vetor[], int tamanho){
	int maior;
	int cont;
	
	maior = vetor[0];
	
	for(cont = 1; cont < tamanho; cont++){
		if(vetor[cont] > maior){
			maior = vetor[cont];
		}
	}
	return maior;
}
