/*Faça um programa que:

leia 5 números inteiros;
calcule a soma;
calcule a média;
mostre os dois resultados.*/

#include <stdio.h>

int main(){
	
	int num;
	int i;
	int soma = 0;
	float media;
	
	for(i = 0; i < 5; i++){
		printf("Digite o %d numero inteiro: ", i+1);
		scanf("%d", &num);
		
		soma += num;
		
	}
	
	media = (float)soma / 5;
	
	printf("Valor da soma: %d\n", soma);
	printf("Valor da media: %.2f\n", media);
	
	return 0;
}
