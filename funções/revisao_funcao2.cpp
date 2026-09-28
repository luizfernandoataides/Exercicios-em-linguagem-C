/*
Crie uma função:

float media(float a, float b)

Ela deve receber duas notas e retornar a média delas.

No main:

Peça duas notas.
Chame a função media.
Guarde o resultado.
Mostre a média.
*/

#include <stdio.h>

float media(float a, float b);

int main(){
	
	float num1, num2;
	float resultado;
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &num1);
	printf("Digite o segundo valor: ");
	scanf("%f", &num2);
	
	resultado = media(num1, num2);
	
	printf("\n\nMedia: %.2f", resultado);
	
	return 0;
}

float media(float a, float b){
	return (a + b) / 2;
}

