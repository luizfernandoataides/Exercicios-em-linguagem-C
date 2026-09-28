/*
Crie uma função:

int buscar(int vetor[], int tamanho, int procurado)

Ela deve:

Receber um vetor.
Receber o tamanho do vetor.
Receber o número que queremos procurar.
Percorrer o vetor procurando esse número.
Retornar o índice onde o número foi encontrado.
Se não encontrar, retornar -1.
*/

#include <stdio.h>
#define N 5

int buscar(int vetor[], int tamanho, int procurado);

int main(){
	
	int num[N];
	int i;
	int numProcurado;
	int resultado;
	
	for(i = 0; i < N; i++){
		printf("Digite o %d valor: ", i+1);
		scanf("%d", &num[i]);
	}
	
	printf("\n\nInforme um valor para a busca: \n");
	scanf("%d", &numProcurado);
	
	resultado = buscar(num, N, numProcurado);
	
	if(resultado != -1){
		printf("\nValor encontrado no indice %d\n", resultado);
	}
	else{
		printf("\nNumero nao encontrado!\n");
	}
	
	return 0;
}

int buscar(int vetor[], int tamanho, int procurado){
	int cont;
	
	for(cont = 0; cont < tamanho; cont++){
		if(vetor[cont] == procurado){
			return cont;
		}
	}
	
	return -1;
}
