#include <stdio.h>
#define N 6

void bubbleSort(int vetor[], int tamanho);

int main(){
	
	int num[N];
	int cont;
	
	for(cont = 0; cont < N; cont++){
		printf("Digite o %d valor: ", cont+1);
		scanf("%d", &num[cont]);
	}
	
	printf("\n\nVetor Original:\n\n");
	
	for(cont = 0; cont < N; cont++){
		printf("%d ", num[cont]);
	}
	
	printf("\n\nVetor Ordenado:\n\n");
	
	bubbleSort(num, N);
	
	for(cont = 0; cont < N; cont++){
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
