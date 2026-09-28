/*
Faça um programa que conte quantos pares de números repetidos existem no vetor.
Use:

um vetor de 10 inteiros;
i e j;
dois for;
uma variável contador.
*/

#include <stdio.h>
#define N 10

int main(){
	
	int num[N];
	int i, j;
	int contador = 0;
	
	for(i = 0; i < N; i++){
		printf("Digite o %d numero inteiro: ", i+1);
		scanf("%d", &num[i]);
	}
	
	for(i = 0; i < N; i++){
		for(j = i+1; j < N; j++){
			if(num[i] == num[j]){
				contador++;
			}
		}
	}
	
	if(contador != 0){
		printf("\n\nExistem %d pares de numeros repetidos.\n", contador);
	}
	else{
		printf("\n\nNao existem pares de numeros repetidos!\n");
	}
	
	return 0;
}
