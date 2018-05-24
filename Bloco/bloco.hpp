#ifndef BLOCO_H_
#define BLOCO_H_
#include "chocolate.hpp"
class bloco{
	public:
		bloco();
		~bloco();
		void adiciona (Chocolate& novoChocolate);
		void remove (Chocolate& chocolate);
		//void removePosicao (Chocolate& chocolate);
		bool cheia();
		bool vazia();
	private:
	//cria ponteiro de ponteiro porque será um vetor de tamanho 4 que apontará para NULL ou chocolate;
		Chocolate** elementos;
		int tamanho;
		int capacidade;
};
#endif
