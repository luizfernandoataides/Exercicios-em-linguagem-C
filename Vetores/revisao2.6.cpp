/*
Crie um vetor com 10 números inteiros.

Depois, percorra o vetor e conte:

quantos números são positivos;
quantos são negativos;
quantos são zero.
*/

#include <stdio.h>
#define N 10

int main(){
	
	int num[N];
	int i;
	int positivo = 0, negativo = 0, zero = 0;
	
	for(i = 0; i < N; i++){
		printf("Digite o %d numero inteiro: ", i+1);
		scanf("%d", &num[i]);
		
		if(num[i] > 0){
			positivo++;
		}
		
		else if(num[i] < 0){
			negativo++;
		}
		
		else{
			zero++;
		}
		
	}
	
	printf("Numeros positivos: %d\n", positivo);
	printf("Numeros negativos: %d\n", negativo);
	printf("Numeros zeros: %d\n", zero);
	
	return 0;
}
