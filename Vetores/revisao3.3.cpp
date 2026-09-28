/*
Crie um programa que:

Crie um vetor de 10 inteiros.
Peça ao usuário os 10 números.
Peça um número que ele deseja procurar.
Mostre o primeiro índice onde esse número aparece.
Se o número não aparecer, mostre:
"Numero nao encontrado!"
*/

#include <stdio.h>
#define N 10

int main(){
	
	int num[N];
	int i;
	int numProcurado;
	int indice = -1;
	
	for(i = 0; i < N; i++){
		printf("Digite o %d numero: ", i+1);
		scanf("%d", &num[i]);
	}
	
	printf("Informe o numero que deseja procurar: ");
	scanf("%d", &numProcurado);
	
	for(i = 0; i < N; i++){
		if(num[i] == numProcurado && indice == -1){
			indice = i;
		}
	}
	
	if(indice == -1){
		printf("\n\nNumero nao encontrado!\n");
	}
	else{
		printf("\n\nNumero encontrado no indice %d\n", indice);
	}
	
	return 0;
}
