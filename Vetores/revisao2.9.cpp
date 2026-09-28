/*
O programa deve:

preencher o vetor original com 10 números;
copiar cada elemento de original para copia;
mostrar os dois vetores.
*/

#include <stdio.h>
#define N 10

int main(){
	
	int original[N];
	int copia[N];
	int i;
	
	for(i = 0; i < N; i++){
		printf("Digite o %d numero: ", i+1);
		scanf("%d", &original[i]);
		
		copia[i] = original[i];
	}
	
	printf("\n\nVetor original:\n\n");
	
	for(i = 0; i < N; i++){
		printf("%d\n", original[i]);
	}
	
	printf("\nVetor copia:\n\n");
	
	for(i = 0; i < N; i++){
		printf("%d\n", copia[i]);
	}
	
	return 0;
}
