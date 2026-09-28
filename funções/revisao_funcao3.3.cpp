#include <stdio.h>
#define N 8

int buscaBinaria(int vetor[], int tamanho, int procurado);

int main(){
	
	int num[N];
	int i;
	int result;
	int numeroProcurado;
	
	for(i = 0; i < N; i++){
		printf("Digite o %d valor(em ordem crescente): ", i+1);
		scanf("%d", &num[i]);
	}
	
	printf("\n\nInforme um numero que deseja procurar: ");
	scanf("%d", &numeroProcurado);
	
	result = buscaBinaria(num, N, numeroProcurado);
	
	if(result != -1){
		printf("\n\nPrimeiro indice encontrado: %d", result);
	}
	else{
		printf("\n\nNumero nao encontrado!");
	}
	
	return 0;
}

int buscaBinaria(int vetor[], int tamanho, int procurado){
	
	int inicio = 0;
	int meio;
	int fim = tamanho - 1;
	int resultado = -1;
	
	while(inicio <= fim){
		
		meio = (inicio + fim) / 2;
		
		if(vetor[meio] == procurado){
		resultado = meio;
		fim = meio - 1;
		}
		else if(vetor[meio] < procurado){
			inicio = meio + 1;
		}
		else{
			fim = meio - 1;
		}
	}
	return resultado;
	
	
}
