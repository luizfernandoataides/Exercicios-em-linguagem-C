/*
Faça um programa que leia números inteiros até que o usuário digite 0.

Quando terminar, mostre:

a soma de todos os números digitados;
a quantidade de números digitados.

O 0 não deve entrar na soma nem na quantidade.
*/

#include <stdio.h>

int main(){
	
	int num;
	int qnt = 0;
	int soma = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	while(num != 0){
		
		soma += num;
		qnt++;
		
		printf("Digite um numero: ");
		scanf("%d", &num); 
		
	}
	
	printf("Resultado da Soma: %d\n", soma);
	printf("Numeros digitados: %d\n", qnt);
	
	return 0;
}
