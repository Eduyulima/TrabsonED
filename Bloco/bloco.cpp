#include "chocolate.hpp"
#include "bloco.hpp"
#include <iostream>
#include <cstring>

using namespace std;
bloco::bloco(){
	elementos = new Chocolate*[4];
	tamanho = 0;
	for (int i = 0; i < 4; i++){
		elementos[i] = NULL;
	}
}

bloco::~bloco(){
	for (int i = 0; i < 4; i++){
		delete elementos[i];
	}
	delete elementos;
}

void bloco::adiciona(Chocolate& novoChocolate){
	//faz a verificação se pode inserir;
	if(cheia() == true){
		cout << "ERRO AO INSERIR, BLOCO CHEIO!" << endl;
		exit(EXIT_FAILURE);
	}else{
		elementos[tamanho] = new Chocolate(novoChocolate);
		cout << "deu certo";
		//o vetor está armazenando endereço de memoria do novo elemento
		tamanho ++;
	}
}
void bloco::remove(Chocolate& chocolate){
	//faz a verificação se a está vazio
	if(vazia() == true){
		cout << "ERRO AO REMOVER, O BLOCO ESTA VAZIO";
		exit(EXIT_FAILURE);
	}else{
		int posicao;
		for (int i = 0; i < tamanho; i++){
			if((elementos[i] != NULL) and (elementos[i]->pegaCodigo() == chocolate.pegaCodigo())){
				posicao = i;
				delete elementos[i];
					for (int i = posicao; i < tamanho ; i++){
						elementos[i] = elementos[i+1];
						tamanho --;
					}				
				
			}
		}
	} cout << "o tamanho e:" << tamanho;
}
bool bloco::cheia(){
	return tamanho == 4;
}

bool bloco::vazia(){
	return tamanho == 0;
}		
