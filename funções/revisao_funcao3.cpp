/*
A função deve receber 3 números inteiros e retornar o maior deles.

No main:

Leia 3 números.
Chame maior().
Guarde o retorno em uma variável.
Mostre o maior número.
*/

#include <stdio.h>

int maior(int a, int b, int c);

int main(){
	
	int num1, num2, num3;
	int result;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	printf("Digite o terceiro numero: ");
	scanf("%d", &num3);
	
	result = maior(num1, num2, num3);
	
	printf("\n\nMaior: %d", result);
	
	return 0;
}

int maior(int a, int b, int c){
	if(a > b && a > c){
		return a;
	}
	else if(a > b && a < c){
		return c;
	}
	else if(b > c){
		return b;
	}
	else{
		return c;
	}
	
}
