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
    int maior = a;

    if(b > maior){
        maior = b;
    }

    if(c > maior){
        maior = c;
    }

    return maior;
}
