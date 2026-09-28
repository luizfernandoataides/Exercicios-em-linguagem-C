/*
Crie uma função chamada:

int soma(int a, int b)

Ela deve:

Receber dois números inteiros.
Somar os dois.
Retornar o resultado da soma.

No main:

peça dois números ao usuário;
chame a função soma;
guarde o resultado em uma variável;
mostre o resultado na tela.
*/

#include <stdio.h>

int soma(int a, int b);

int main(){
	
	int num1, num2, resultado;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &num1);
	printf("Digite o segundo valor: ");
	scanf("%d", &num2);
	
	resultado = soma(num1, num2);
	
	printf("\n\nResultado da soma: %d", resultado);
	
	return 0;
}

int soma(int a, int b){
	return a + b;
}
