#include <stdio.h>
#include <stdlib.h>
#include <string.h>


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

void contadorLista (No *aux){
	int contador;
	while(aux){
		contador++;
		aux = aux->proximo;
	}
	printf("\n existem %d elementos nessa lista", contador);
}

int main(){

	No *lista=NULL;
	int opcao, valor; 
	while (opcao != 6){
	    printf("\n--------Menu de opção--------- \n1. Inserir um elemento no começo da lsita\n2. Inserir um elemento no meio da lista\n3. Inserir um novo elemento no fim\n4. Remover um elemento \n5. Saber quantos elementos tem na lista\n6. Sair\nOpção: ");
	    scanf("%d", &opcao);
	     if( opcao == 5){
	    	printf("\nSaindo, até logo");
	    	break;
		}
	    printf("\n------------------------------------");
	   
	    printf("\nInforme o valor que deseja adicionar ou remover: ");
	    scanf("%d", &valor);
	    
	    switch (opcao){
	    	case 1:
		    	adicionarInicio(&lista, valor);
		    	imprimirLista(lista);
		    	printf("\nElemento adicionado");
			break; 
			case 2:
				int valorAuxiliar; 
				printf("\nInforme o número para servir de parâmetro:  ");
				scanf("%d", &valorAuxiliar);
				adicionarMeio(&lista, valor, valorAuxiliar);
				imprimirLista(lista);
				printf("\nElemento adicionado");
			break; 
			case 3: 
				adicionarFim(&lista, valor);
				imprimirLista(lista);
				printf("\nElemento adicionado");
			break; 
			case 4: 
				remover(&lista, valor);
				imprimirLista(lista);
				printf("\nElemento excluido!");
			break;
			case 5: 
				contadorLista(lista);
			break;
			
		}
	    
	}	
	
	return 0;
}
