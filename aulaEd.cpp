#include <iostream>
#include <iomanip>
using namespace std;

int bit(int numero,int pos){
	return (numero >> pos);
}

//~ ofstream arquivo ("arquivobinario.dat" ios::binary  | ios::app){
	 //~ ______   _    _   _______
	//~ |  ____| | |  | | |  ___  |
	//~ | |      | |__| | | |   | |
	//~ | |      |  __  | | |   | |
    //~ | |____  | |  | | | |___| |
    //~ |______| |_|  |_| |_______|
//~ int setar(int numero, int pos){
	//~ //setar é mudar para 1
	//~ return (1 << pos)| numero;
//~ }

//~ int resetar (int numero, int pos){
	//~ //resetar é mudar para 0
	//~ return 

int main()
{
	string a = " ";
    int cont;
    int cont2 = 15;
    int con1 = 30;
    cout << setw(con1) << "______________";
    cout << endl;
    
	for (int i = 4; i >= 0; i--){
		cout << setw(cont2) << "/";
		cont = cont2;
		cout <<  "__/__/__/__/__/" << endl;
		//~ cont = cont - 2;
		cont2 = cont2 - 1;
	}
	for (int i = 2; i >= 0; i--){
		cout << setw(cont2) << "/";
		cout <<  "              /" << endl;
		if(i==2){
			cout << setw(cont2 -1) << "/";
			cout <<  "  CHOCOLATE   /" << endl;
			cont2 = cont2 - 1;
		}
		if(i==1){
			cout << setw(cont2 -1) << "/";
			cout <<  "    NESTLE    /" << endl;
			cont2 = cont2 - 1;
		}
		//~ cont = cont - 2;
		cont2 = cont2 - 1;
	}
		cout << setw(cont2) << "/";
		cont = cont2;
		cout <<  "______________/" << endl;
		//~ cont = cont - 2;
		cont2 = cont2 - 1;
	
}



					//~ _______________
				   //~ /__/__/__/__/__/
				  //~ /__/__/__/__/__/
				 //~ /__/__/__/__/__/
				//~ /__/__/__/__/__/
			   //~ /              /
			  //~ /   CHOCOLATE  /
			 //~ /     NESTLE   /
			//~ /______________/
  
