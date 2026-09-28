/*
Crie um vetor com 10 números inteiros.

Depois peça ao usuário um número e informe quantas vezes ele aparece.
*/

#include <stdio.h>
#define N 10

int main(){
	
	int num[N];
	int i;
	int numProcurado = 0;
	int contador = 0;
	
	for(i = 0; i < N; i++){
		printf("Digite o %d numero inteiro: ", i+1);
		scanf("%d", &num[i]);
	}
	
	printf("Digite um numero que deseja procurar: ");
	scanf("%d", &numProcurado);
	
	for(i = 0; i < N; i++){
		if(num[i] == numProcurado){
			contador++;
		}
	}
	
	if(contador == 0){
		printf("\nNumero nao encontrado!\n");
	}
	else{
		printf("\nO numero aparece %d vezes\n", contador);
	}
	
	return 0;
}
