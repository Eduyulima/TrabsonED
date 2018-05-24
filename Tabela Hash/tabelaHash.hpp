#ifndef TABELAHASH_H_
#define TABELAHASH_H_
#include "chocolate.hpp"
#include "bloco.hpp"


class tabelaHash{
	public: 
		//passo o arquivo como referencia como referencia por isso que coloca o ponteiro de char
		tabelaHash(const char* arqMapeamento,const char* arqBinario);
		//passa o objeto como referência;
		void adiciona(Chocolate& novoChocolate,int chave);
		void leituraMap();
		void leituraBloco(int chave);
	private:
		int capacidade;
		//vetor que irá armazenar os elementos do arquivo;
		int* mapeamento;
		char* arquivoBin;
		char* arquivoMap;			
};
#endif
