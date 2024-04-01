/*
COMPUTAÇÃO PARA ENGENHARIA - TURMA 02 - 1/2024

LISTA 2

Autor: Mateus Torres de Souza
Data: 29/03/2024
*/


#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

// Início da função principal

int main(){

//8

float cat1,cat2,hip;

cout << "Codigo pra calculo da hipotenusa de um triangulo" << endl;
cout << endl;
cout << "Digite o comprimento do primeiro cateto" << endl;
cin >> cat1;
cout << "Digite o comprimento do segundo cateto" << endl;
cin >> cat2;

hip  = sqrt(cat1*cat1 + cat2*cat2);

cout << "A hipotenusa mede " << hip << endl;


return 0;

}
//8