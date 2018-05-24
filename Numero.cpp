#include <iostream>
#include <cmath>

using namespace std;

//Decimal -> Binario
//esse numero binario tem X bits
int DpB(int numero, int bits) {
    int valores[bits];

    for (int i = 0; i < bits; i++) {
        valores[i] = numero % 2;
        numero = numero / 2;
    }

    int total = 0;
    int multiplicador = 1000;
    for (int i = bits - 1; i >= 0; i--) {
        total = total + valores[i] * multiplicador;
        multiplicador = multiplicador / 10;
    }

    return total;
}

//Binario -> Decimal
//de X bits
int BpD(int valor, int bits) {
    int multiplicador = 1000;
    int valores[bits];

    for (int i = 0; i < bits; i++) {
        valores[i] = valor / multiplicador;
        if (valor >= multiplicador) {
            valor = valor - multiplicador;
        }
        multiplicador = multiplicador / 10;
    }

    int soma = 0;
    int indiceBit = bits - 1;

    for (int i = 0; i < bits; i++) {
        soma = soma + valores[i] * pow(2, indiceBit);
        indiceBit--;
    }

    return soma;
}