#include <stdio.h>

int fatorial (int num);

int main (){
	
	int n, p, combinacao;
	printf("Digite o valor de n: ");
	scanf("%d", &n);
	
	printf("Digite o valor de p: ");
	scanf("%d", &p);
	
	
	combinacao = fatorial(n) / (fatorial(p) * fatorial(n - p));
	printf("A combinacao dos valores: %d", combinacao);	
	
	return 0;
}

int fatorial(int num){
	int i, fat = 1;
	
	for (i = num; i >= 1; i --){
		fat*= i;
	}
	
	return fat;
}


