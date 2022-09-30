#include <stdio.h>
#include <stdlib.h>
#include "ListaSequencial.h"

struct lista { 
	int qtd;
	struct aluno dados[MAX];

};

Lista* cria_lista(){
	Lista *li;
	li = (Lista*) malloc(sizeof(struct lista));
	if (li != NULL)
		li->qtd = 0;
	return li;
}

void libera_lista(Lista* li){
	free(li);
}

int tamanho_lista(Lista* li){
	if (li == NULL)
	    return -1;
	else
		return li->qtd;
}

int lista_cheia(Lista* li){
	if (li == NULL)
	      return -1;
	return (li->qtd == MAX);	
}

int lista_vazia(Lista* li){
	if (li == NULL)
		return -1;
	return (li->qtd == 0);
}

int insere_lista_final(Lista* li, Aluno aluno){
	if (li == NULL)
		return 0;
	if (lista_cheia(li))
		return 0;
	li->dados[li->qtd] = aluno;
	li->qtd++;
	return 1;
}

int insere_lista_inicio(Lista* li, Aluno aluno){
	if (li == NULL) return 0;
	if (lista_cheia(li)) return 0;
	int i;
	for(i=li->qtd-1; i>0;i--)
	  li->dados[i+1] = li->dados[i];
	li->dados[0] = aluno;
	li->qtd++;
	return 1;
}


int remove_lista_final(Lista* li){
	if (li == NULL)
		return 0;
	if (li->qtd == 0)
		return 0;
	li->qtd--;
	return 1;
}

int remove_lista (Lista* li, int mat){
   if (li == NULL) return 0;
   if (lista_cheia(li)) return 0;
   int i,k = 0;
   while (i<li->qtd && li->dados[i].matricula != mat)
             i++;
  
   if (i == li->qtd) return 0; // Nao encontrou.
  
   for(k=i; k<li->qtd-1;k++)
	li->dados[k] = li->dados[k+1];
  
  li->qtd--;
  return 1;

}

















