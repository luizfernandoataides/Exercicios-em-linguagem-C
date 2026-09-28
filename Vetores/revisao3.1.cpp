/*
Crie um vetor com 10 números inteiros.

Depois, percorra o vetor e descubra quais números aparecem mais de uma vez.
*/

#include <stdio.h>
#define N 10

int main(){
	
	int num[N];
	int i, j;
	int repetido = 0;
	
	for(i = 0; i < N; i++){
		printf("Digite o %d numero: ", i+1);
		scanf("%d", &num[i]);
	}
	
	printf("\n\nNumeros repetidos:\n\n");
	
	for(i = 0; i < N; i++){
		for(j = i+1; j < N; j++){
			if(num[i] == num[j]){
				printf("%d\n", num[i]);
				repetido++;
			}
		}
	}
	
	return 0;
}
