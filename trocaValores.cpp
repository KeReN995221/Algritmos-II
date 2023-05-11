#include <stdio.h>
// 1. Faça um programa que receba valores para duas variáveis e troque os valores entre elas, utilizando uma função.

int c (int num1, int num2);

int main (){
	
	int a, b;
	printf("Digite o valor de a: ");
	scanf("%d", &a);
	
	printf("Digite o valor de b: ");
	scanf("%d", &b);
	c(a, b);

	
	return 0;
}

int c (int a, int b){
	int aux = a;
	a = b;
	b = aux;
	printf("Novo valor de A: %d", a);
	printf("\n Novo valor de B: %d", b);
	return 0;
}


