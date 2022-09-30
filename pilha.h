#define MAX 5

// Definição da Estrutura
typedef struct tipoNo no;
struct tipoNo {
    int codigo;
    struct tipoNo *prox;
};

void inicializa(no *pilha, no *topo);
void push(no **pilha, no **topo);
void imprime(no *pilha);
void pop(no **pilha, no **topo);
