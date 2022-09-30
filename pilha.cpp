#include <stdio.h>
#include <stdlib.h>
#include "pilha.c"

int main(){
    no *pilha = NULL;
    no *topo = NULL;
    char maisum;
    
    inicializa(pilha, topo);
    
    do{
        push(&pilha, &topo);
        printf("Inserir mais um (S/N)? ");
        fflush(stdin);
        scanf("%c", &maisum);
    }while(maisum == 'S' || maisum == 's');
    
    imprime(pilha);
    
    pop(&pilha, &topo);
    imprime(pilha);
    
    system("PAUSE");
    return 0;
}


