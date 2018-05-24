#include <iostream>
#include "chocolate.h"

using namespace std;

int main (){
	int cod,teorCacau;
	char nome[50],marca[50],ingSecundario[20];
	
	cin >> cod;
	cin.ignore();

    Chocolate x(cod);
    
    cout << "insere nome:";
    cin.getline (nome,50);
    cout << "insere marca:";
    cin.getline (marca,50);
    cout << "Ingredientes Secundario:";
    cin.getline (ingSecundario,50);
    cout << "Teor de Cacau:";
    cin >> teorCacau;
    cin.ignore();
    
    x.insereNome(nome);
    x.insereMarca(marca);
    x.insereIng(ingSecundario);
    x.insereTeor(teorCacau);
    
    cout << "NOME:" << x.pegaNome() << endl;
    cout << "MARCA:" << x.pegaMarca() << endl;
    cout << "INGREDIENTE SECUNDARIO:" << x.pegaIng() << endl;
    cout << "TEOR DE CACAU:" << x.pegaTeor() << endl;
	
	return 0;
}
