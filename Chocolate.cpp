#include "chocolate.h"
#include <iostream>
#include <cstring>

using namespace std;
Chocolate::Chocolate(int cod){
	codigo = cod;
}

void Chocolate::insereNome(char nome[50]){
	strcpy(nomeChocolate, nome);
}
void Chocolate::insereMarca(char marca[50]){
	strcpy (marcaChocolate,marca);
}
void Chocolate::insereTeor(int teorCac){
	teorCacau = teorCac;
}
void Chocolate::insereIng(char ingSecundario[50]){
	strcpy (ingredienteSec,ingSecundario);
}
//cria um ponteiro para variavel que irá pegar o endereço dela
//o & em char retorna esse endereço de memória 

char& Chocolate::pegaNome(){
	return *nomeChocolate;
}
char& Chocolate::pegaMarca(){
	return *marcaChocolate;
}
char& Chocolate::pegaIng(){
	return *ingredienteSec;
}
int Chocolate::pegaTeor(){
	return teorCacau;
}
