#include "tabelaHash.hpp"
#include <iostream>
#include "converteBinario.cpp"
using namespace std;

tabelaHash::tabelaHash(const char* arqMapeamento, const char* arqBinario){
	//o arqMapeamanto no main recebera um nome por exemplo "mapeamento.dat"
	// como nao pode utilizar string, eu pego o tamanho desse nome, crio uma vetor
	// de char para essa variavel, com o tamanho do nome e o que está em um eu
	//copio para o outro;
	arquivoMap = new char(strlen[arqMapeamento]); 
	arquivoBin = new char(strlen[arqBinario]);
	strcpy(arquivoMap,arqMapeamento);
	strcpy(arquivoBin,arqBinario);
	
	capacidade = 16;
	mapeamento = new int[16];
	
	for (int i = 0; i < 16; i++){
		mapeamento[i] = -1;
	}
}	

void tabelaHash::leituraMap(){
	//nessa funcao lê-se o arquivo mapeamento, se for possível a leitura
	//eu pego o tamanho desse arquivo, como seria dois inteiros um por "linha"
	//eu passo esses inteiros para uma variavel;
	
	ifstream leMap (arquivoMap, ios::binary);
		if(leMap){
		//pego a quantidade de bytes que tem no arquivoMap
			leMap.seekg(0, leMap.end);
			int bytesPercorrer = leMap.tellg();
			leMap.seekg(0,leMap.beg);
			//leio todo arquivo do mapeamento
				if(bytesPecorrer > 0){
					int qtdPares = bytesPecorrer/2*sizeof int;
					int coordHash,coordBin;
						for (int i = 0; i < qtdPares; i++){
						coordHash = leMap.read(*coordHash,sizeof(int));  
						coordBin = leMap.read(*coordBin,sizeof(int));
						
						mapeamento[converteBinario(coordHash,4)] = coordBin; 
						}
						
				}		
					
		}else{
			cout << "Nao foi possivel ler o arquivo";
		}	
	
}
//tenho que ler o bloco agora, para ver se tem algo nele;
void tabelaHash::leituraBloco(int chave){
	//nao leio todo bloco, leio bloco por bloco;
	if(mapeamento[chave] == -1){
		//nao ha bloco naquela chave;
		return -1;
	}
	
	
	
