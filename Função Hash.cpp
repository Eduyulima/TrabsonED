#include <iostream>
#include <cstdlib>

using namespace std;

int Fhash(int codigo){
	return (codigo%31)%16;
}