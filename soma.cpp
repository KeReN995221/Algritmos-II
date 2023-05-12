#include <stdio.h>
// 2. Faça um programa que calcule o fatorial de um número lido, utilizando uma função.


int soma (int n1, int n2);

int main()
{
	int n1, n2;
	printf("Informe o primeiro numero: ");
	scanf("%d", &n1);
	printf("Informe o segundo valor inteiro: ");
	scanf("%d", &n2);
	
	printf("A soma dos inteiros sao: %d", soma(n1, n2));
	
	return 0;
}


int soma (int n1, int n2){
	int soma = n1 + n2;
	return soma;
}
