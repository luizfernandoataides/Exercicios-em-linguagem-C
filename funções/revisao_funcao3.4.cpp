/*
Crie uma função:

void bubbleSort(int vetor[], int tamanho)

que receba um vetor de inteiros e ordene seus valores do menor para o maior.

Regras do exercício

Você deve usar:

dois for, um dentro do outro;
comparação entre elementos vizinhos:
vetor[j] > vetor[j + 1]
uma variável temp para realizar a troca.
*/

#include <stdio.h>
#define N 7

void bubbleSort(int vetor[], int tamanho);

int main(){
	
	int num[N];
	int cont;
	
	printf("Vetor com os valores originais:\n\n");
	
	for(cont = 0; cont < N; cont++){
		printf("Digite o %d valor: ", cont+1);
		scanf("%d", &num[i]);
	}
	
	return 0;
}

void bubbleSort(int vetor[], int tamanho){
	
	int i;
	int j;
	int temp;
	
	for(i = 0; i < tamanho - 1; i++){
		for(j = 0; j < tamanho - 1; j++){
			
			temp = vetor[j];
			
			if(vetor[j] > vetor[j+1]){
				
				vetor[j] = vetor[j+1];
				vetor[j+1] = temp;
				
			}
			
		}
	}
	
}
