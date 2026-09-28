/*
Crie uma função:

void bubbleSort(int vetor[], int tamanho)

que organize um vetor em ordem crescente.

Use:

int num[] = {8, 3, 5, 1, 9};

Resultado esperado:

1 3 5 8 9
*/

#include <stdio.h>

void bubbleSort(int vetor[], int tamanho);

int main(){
	
	int num[] = {8, 3, 5, 1, 9};
	int cont;
	
	bubbleSort(num, 5);
	
	for(cont = 0; cont < 5; cont++){
		printf("%d ", num[cont]);
	}
	
	return 0;
}

void bubbleSort(int vetor[], int tamanho){
	
	int i;
	int j;
	int aux;
	
	for(i = 0; i < tamanho - 1; i++){
		for(j = 0; j < tamanho - 1 - i; j++){
			if(vetor[j] > vetor[j + 1]){
				
				aux = vetor[j];
				vetor[j] = vetor[j + 1];
				vetor[j + 1] = aux;
				
			}
			
		}
	}
	
}
