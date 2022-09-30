#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include "ListaSequencial.c"

using namespace std;

int main(){
	
	Lista *li;
	li = cria_lista();
	int tamanho = tamanho_lista(li);
	int cheia = lista_cheia(li);
	int vazia = lista_vazia(li);
	
	Aluno aluno, aluno2, aluno3;
	
	aluno.matricula = 10;
	//aluno.nome = "Paulo";
	aluno.n1 = 7;
	aluno.n2 = 8;
	aluno.n3 = 5;
	
	aluno2.matricula = 20;
	//aluno2.nome = 'Paulo';
	aluno2.n1 = 7;
	aluno2.n2 = 8;
	aluno2.n3 = 5;
	
	aluno3.matricula = 14;
	//aluno3.nome = 'Paulo';
	aluno3.n1 = 7;
	aluno3.n2 = 8;
	aluno3.n3 = 5;
	
	int insereFinal    = insere_lista_final(li, aluno);
	insereFinal    = insere_lista_final(li, aluno2);
	insereFinal    = insere_lista_final(li, aluno3);
	//int insereInicio   = insere_lista_inicio(li, aluno2);
	//int insereOrdenado = insere_lista_ordenada (li, aluno3);
	
	int removeFinal = remove_lista_final(li);
	int removeLista = remove_lista(li, aluno3.matricula);
	
	libera_lista(li);

	system("pause");
	return 0;

}


