/*
Crie um vetor com 10 números inteiros.

Depois peça ao usuário um número para procurar.

O programa deve informar:

se o número foi encontrado;
quantas vezes ele aparece;
e os índices onde ele aparece.
*/

#include <stdio.h>
#define N 10

int main(){
	
	int num[N];
	int i;
	int numProcurado;
	int contador = 0;
	
	for(i = 0; i < N; i++){
		printf("Digite o %d numero inteiro: ", i+1);
		scanf("%d", &num[i]);
	}
	
	printf("Digite o numero que deseja procurar: ");
	scanf("%d", &numProcurado);
	
	for(i = 0; i < N; i++){
		if(numProcurado == num[i]){
			contador++;
		}
	}
	
	if(contador > 0){
		printf("\n\nNumero encontrado!\n\n");
		printf("Ele aparece %d vezes.\n", contador);
	}
	else{
		printf("Numero nao encontrado!\n");
	}
	
	printf("\nIndices:\n");
	
	for(i = 0; i < N; i++){
		if(numProcurado == num[i]){
			printf("%d\n", i);
		}
	}
	
	return 0;
}
