#include <stdio.h>

#include <stdlib.h>



typedef struct no{

	int valor;
	struct no *proximo;
} No;

No* criarNo (int valor){
	No *novo = (No *)malloc(sizeof(No));
	if(novo != NULL){
		novo->valor = valor;
		return novo;
	}else{
		printf("Erro de alocação de memória");
	}
	
	return NULL;
}


void adicionarInicio(No **lista, int valor){
    No *novo = criarNo(valor);
	if(novo){
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
				aux = aux->proximo;
			}
		    
		    novo->proximo = aux->proximo;
			aux->proximo = novo;	
		}	
			
	    
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


void imprimirLista(No *aux){

	//No *aux = lista;
	printf("\nImprimindo: [");

	while(aux){

		printf(" %d ", aux->valor);
		aux=aux->proximo;

	}
	printf("]");	
}


void remover (No **lista, int valor){
    No *aux = *lista;
    if(aux != NULL){
        if (aux->valor==valor){
            *lista = aux->proximo;
            free(aux);
        }else{
            while(aux->proximo && aux->proximo->valor!=valor){
                aux = aux->proximo;
            }
            if(aux->proximo){
                No *remover = aux->proximo;
                aux->proximo = remover->proximo;
                free(remover);
            }
        }
    }

}

int main(){

	No *lista=NULL;
	int opcao; 
	while (while opcao != 5){
	    printf("Menu de opção: \n1. Inserir um elemento no começo da lsita\n2. Inserir um elemento no meio da lista\n3. Inserir um novo elemento no fim\n4. Remover um elemento \n5. Sair\nOpção: ");
	    scanf("%d", &opcao);
	}
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
	remover(&lista, 50);
	imprimirLista(lista);
	
	return 0;
}

