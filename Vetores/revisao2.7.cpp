/*
Crie um vetor com 10 números inteiros.

O programa deverá:

armazenar os 10 números;
calcular a soma;
calcular a média;
mostrar a média;
mostrar quantos números estão acima da média;
mostrar quantos números estão abaixo da média.
*/

#include <stdio.h>
#define N 10

int main(){
	
	int num[N];
	int i;
	float soma = 0;
	int acimaMedia = 0, abaixoMedia = 0;
	float media = 0;
	
	for(i = 0; i < N; i++){
		printf("Digite o %d numero inteiro: ", i+1);
		scanf("%d", &num[i]);
		
		soma += num[i];
	}
	
	media = (float)soma / N;
	
	for(i = 0; i < N; i++){
		if(num[i] > media){
			acimaMedia++;
		}
		else if(num[i] < media){
			abaixoMedia++;
		}
	}
	
	printf("Valor da Media: %.2f\n", media);
	printf("Numeros acima da media: %d\n", acimaMedia);
	printf("Numeros abaixo da media: %d\n", abaixoMedia);
	
	return 0;
}
