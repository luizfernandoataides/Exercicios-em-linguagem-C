/*
Leia 10 números inteiros para um vetor.
Peça ao usuário um número limite.
Mostre todos os elementos do vetor que são maiores que limite.
No final, mostre também quantos elementos eram maiores que o limite.
*/

#include <stdio.h>
#define N 10

int main(){
	
	int num[N];
	int i;
	int numLimite;
	int contador = 0;
	
	for(i = 0; i < N; i++){
		printf("Digite o %d numero inteiro: ", i+1);
		scanf("%d", &num[i]);
	}
	
	printf("\n");
	
	printf("Informe um numero Limite: ");
	scanf("%d", &numLimite);
	
	printf("\n\nElementos do vetor que são maiores que limite:\n");
	
	for(i = 0; i < N; i++){
		if(num[i] > numLimite){
			contador++;
			printf("\n\n%d\n", num[i]);
		}
	}
	
	printf("\nQuantidade de elementos que eram maiores que o limite: %d", contador);
	
	return 0;
}
