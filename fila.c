#include "fila.h"


int tam;
void inicializa(cliente *inicio, cliente *fim) {
    tam = 0;
    printf("Fila inicializada!\n");
    printf("Inicio.: %d\n", inicio);
    printf("Fim....: %d\n", fim);
    printf("Tamanho: %d\n", tam);
}

void insere(cliente **inicio, cliente **fim){
    cliente *novo = (cliente *)malloc(sizeof(cliente));
    if(novo) {
        printf("Novo codigo: ");
        scanf("%d", &novo->codigo);
        printf("Novo valor: ");
        scanf("%f", &novo->valor);
        novo->prox = NULL;
        if(!(*inicio)) {
            *inicio = novo;
            *fim = novo;
        }
        else {
            cliente *aux = (*inicio);
            while(aux->prox != NULL)
                aux = aux->prox;
            aux->prox = novo;     
            *fim = novo;
        }
        tam++;
    }   

    return;
}

void imprime(cliente *inicio){
    printf("Tamanho da lista: %d\n", tam);
    int pos = 1;
    while(inicio) {
        printf("\n");
        printf("Posicao.: %d\n", pos);
        printf("Codigo..: %d\n", inicio->codigo);
        printf("Valor...: %.2f\n", inicio->valor);
        pos++;
        inicio = inicio->prox;
    }
    return;
}

void consome(cliente **inicio, cliente **fim) {
    printf("\n");
    if(!(*inicio) && !(*fim)) {
        printf("Fila vazia. Impossivel remover!\n");
        return;
    }
    
    cliente *aux = *inicio;
    if(*inicio == *fim) {
        *inicio = NULL;
        *fim = NULL;
        free(aux);
        tam--;
        return;
    }
    
    *inicio = (*inicio)->prox;
    free(aux);
    
    tam--;  
    return;
}
