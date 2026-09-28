/*
Faça o programa:

preencher o vetor;
mostrar o vetor original;
pedir o índice;
verificar se o índice é válido;
deslocar os elementos;
mostrar o vetor depois da remoção.
*/

#include <stdio.h>
#define N 10

int main(){
	
	int num[N];
	int i;
	int removerIndice;
	
	for(i = 0; i < N; i++){
		printf("Digite o %d numero: ", i+1);
		scanf("%d", &num[i]);
	}
	
	printf("\n\nVetor original:\n\n");
	
	for(i = 0; i < N; i++){
		printf("%d\n", num[i]);
	}
	
	printf("Digite um indice que deseja remover: ");
	scanf("%d", &removerIndice);
	
	if(removerIndice < 0 || removerIndice >= N){
		printf("Indice Invalido!\n");
	}
	else{
		for(i = removerIndice; i < N - 1; i++){
			num[i] = num[i+1];
		}
	}
	
	printf("\n\nVetor alterado.\n\n");
	
	for(i = 0; i < N - 1; i++){
		printf("%d\n", num[i]);
	}
	
	return 0;
}
