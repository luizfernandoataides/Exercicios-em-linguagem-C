/*
Você vai fazer um programa que:

Leia 10 números inteiros para um vetor.
Verifique se algum número aparece mais de uma vez.

Se existir repetição, mostre:

Existem numeros repetidos!

Caso contrário:

Nao existem numeros repetidos.
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
	
	for(i = 0; i < N; i++){
		for(j = i + 1; j < N; j++){
			if(num[i] == num[j]){
			repetido = 1;
			}
		}
		
	}
	
	if(repetido == 1){
		printf("\n\nExistem numeros repetidos!\n");
	}
	else{
		printf("\n\nNao existem numeros repetidos!\n");
	}
	
	return 0;
}
