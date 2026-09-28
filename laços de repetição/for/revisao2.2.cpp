/*Faça um programa que leia 10 números inteiros e mostre:

quantos são positivos;
quantos são negativos;
quantos são zero.*/

#include <stdio.h>

int main(){
	
	int num;
	int i;
	int positivo = 0, negativo = 0, zero = 0;
	
	for(i = 0; i < 10; i++){
		printf("Digite o %d numero inteiro: ", i+1);
		scanf("%d", &num);
		if(num > 0){
			positivo++;
		}
		else if(num < 0){
			negativo++;
		}
		else{
			zero++;
		}
	}
	
	printf("Positivos: %d\n", positivo);
	printf("Negativos: %d\n", negativo);
	printf("Zero: %d\n", zero);
	
	return 0;
}
