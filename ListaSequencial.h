#define MAX 100

typedef struct aluno {
	int matricula;
	char nome[30];
	float n1, n2, n3;

}Aluno;
typedef struct lista Lista;

Lista* cria_lista();
void libera_lista(Lista* li);
int tamanho_lista(Lista* li);
int lista_cheia(Lista* li);
int lista_vazia(Lista* li);
int insere_lista_final(Lista* li, Aluno aluno);
int insere_lista_inicio(Lista* li, Aluno aluno);
int insere_lista_ordenada(Lista* li, Aluno aluno);
int remove_lista_final(Lista* li);
int remove_lista(Lista* li, int mat);






