#ifndef CHOCOLATE_H_
#define CHOCOLATE_H_
class Chocolate{
	friend class bloco;
	public:
		Chocolate(int cod);
		Chocolate(Chocolate& nChocolate); 
		//nao tem delete porque nao usei o new no chocolate
		//~Chocolate();w
		void insereNome(char *nome);
		void insereMarca(char *marca);
		void insereIng(char *ingSecundario);
		void insereTeor(unsigned int teorCac);
		char* pegaNome();
		char* pegaMarca();
		char* pegaIng();
		int pegaTeor();
		int pegaCodigo();
		
	private:
		char nomeChocolate[50];
		char marcaChocolate[50];
		char ingredienteSec[50];
		int teorCacau;
		int codigo;
};
#endif 

