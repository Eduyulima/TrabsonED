#include "chocolate.hpp"
#include <iostream>
#include <cstring>

using namespace std;
Chocolate::Chocolate(int cod){
	codigo = cod;
}
Chocolate::Chocolate(Chocolate& nChocolate){
	codigo = nChocolate.codigo;
	insereNome(nChocolate.pegaNome());
	insereMarca(nChocolate.pegaMarca());
	insereIng(nChocolate.pegaIng());
	insereTeor(nChocolate.pegaTeor());
}

void Chocolate::insereNome(char *nome){
	strcpy(nomeChocolate, nome);
}
void Chocolate::insereMarca(char *marca){
	strcpy (marcaChocolate,marca);
}
void Chocolate::insereTeor(unsigned int teorCac){
	teorCacau = teorCac;
}
void Chocolate::insereIng(char *ingSecundario){
	strcpy (ingredienteSec,ingSecundario);
}
//cria um ponteiro para variavel que irá pegar o endereço dela
//o & em char retorna esse endereço de memória 

char* Chocolate::pegaNome(){
	return nomeChocolate;
}
char* Chocolate::pegaMarca(){
	return marcaChocolate;
}
char* Chocolate::pegaIng(){
	return ingredienteSec;
}
int Chocolate::pegaTeor(){
	return teorCacau;
}
int Chocolate::pegaCodigo(){
	return codigo;
}
