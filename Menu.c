#include <iostream>
#include "Menu.h"

using namespace std;

int menu(){
	int opcao;
	
	cout << "1- Salvar" << endl;
	cout << "2- Adicionar" << endl;
	cout << "3- Pesquisar" << endl;
	cout << "4- Excluir" << endl;
	cout << "5- Sair" << endl;
	
	cout << "Digite sua opcao: " << endl;
	cin >> opcao;
	
	return opcao;
}
