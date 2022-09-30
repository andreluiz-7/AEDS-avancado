// Definição da Estrutura
typedef struct tipoCliente cliente;
struct tipoCliente {
    int codigo;
    float valor;
    struct tipoCliente *prox;
};

void inicializa(cliente *inicio, cliente *fim);
void insere(cliente **inicio, cliente **fim);
void insere(cliente **inicio, cliente **fim);
void imprime(cliente *inicio);
void consome(cliente **inicio, cliente **fim);
