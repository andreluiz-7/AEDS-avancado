#include <stdio.h>
#include <stdlib.h>
#include "fila.c"

int main(){
    cliente *inicio = NULL;
    cliente *fim = NULL;
    char maisum;
    
    inicializa(inicio, fim);
    
    do{
        insere(&inicio, &fim);
        printf("Inserir mais um (S/N)? ");
        fflush(stdin);
        scanf("%c", &maisum);
    }while(maisum == 'S' || maisum == 's');
    
    imprime(inicio);
    
    consome(&inicio, &fim);
    imprime(inicio);
    consome(&inicio, &fim);
    imprime(inicio);
	    
    system("PAUSE");
    return 0;
}
