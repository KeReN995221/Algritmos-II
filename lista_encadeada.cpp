#include <stdio.h>

#include <stdlib.h>



typedef struct no{

	int valor;
	struct no *proximo;
} No;

No* criarNo (int valor){
	No *novo = (No *)malloc(sizeof(No));
	if(novo){
		novo->proximo = valor;
		return novo;
	}else{
		printf("Erro de alocação de memória")
	}
	return NULL;
}


void adicionarInicio(No **lista, int valor){

	if(novo){

		No *novo = criarNo(valor);
		novo->proximo = *lista;
		*lista = novo;

	}else{

		printf("Erro ao alocar memória");

	}
	
}

void adicionarMeio(No **lista, int valor, int proximoValor ){
	No *novo = criarNo(valor);
	
	if (novo){
		if(*lista==NULL){
			// novo->valor = valor;
			novo->proximo = NULL;
			*lista = novo;

			return;
		}else{
			No *aux = *lista;
			
			while ( aux->proximo &&aux->valor!= proximoValor){
				aux = aux->proximo
			}
			novo->proximo = aux->proximo;
			aux->proximo = novo;	
		}	
			
}
		


void adicionarFim(No **lista, int valor){

	No *novo = criarNo(valor);
	if(novo){

		if(*lista==NULL){

			// novo->valor = valor;
			novo->proximo = NULL;
			*lista = novo;
			return;

		}else{

			No *aux = *lista;

			while(aux->proximo!=NULL){
				aux = aux->proximo;
			}

			novo->valor = valor;
			novo->proximo = NULL;
			aux->proximo = novo;

		}

	}

}
void remover(No **lista, int valor, int valorRemovido ){
	No *novo = criarNo(valor);
	if(novo){
		if (*lista==NULL){
			
		}else{
			No *aux = *lista;
			while(aux->proximo->valor = valorRemovido
				aux->auxiliar->proximo = remover->proximo;
		}
	}
	
}

void imprimirLista(No *aux){

	//No *aux = lista;
	printf("\nImprimindo: [");

	while(aux){

		printf(" %d ", aux->valor);
		aux=aux->proximo;

	}
	printf("]");	
}





int main(){

	No *lista=NULL;
	
	imprimirLista(lista);
	adicionarInicio(&lista, 10);
	imprimirLista(lista);
	adicionarInicio(&lista, 20);
	imprimirLista(lista);
	adicionarInicio(&lista, 50);
	imprimirLista(lista);
	adicionarFim(&lista, 5);
	imprimirLista(lista);
	adicionarFim(&lista, 1);
	imprimirLista(lista);
	adicionarInicio(&lista, 100);
	imprimirLista(lista);
	
	return 0;

}
