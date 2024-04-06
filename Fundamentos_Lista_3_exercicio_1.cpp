
/*

COMPUTAÇÃO PARA ENGENHARIA - TURMA 02 - 1/2024

LISTA 3

Autor: Mateus Torres de Souza   
Data: 05/04/2024

*/
// Código 1

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Início da função principal

int main(){

float tanque,d1,d2,d3,d4,d5; // capacidade do tanque e distâncias
float c1,c2,c3,c4,c5; // consumo de cada distância
float media;

cout << "Insira a capacidade do tanque de gasolina do seu carro em litros" << endl;
cin >> tanque;

cout << "Digite 5 distancias para cada enchida do tanque" << endl;
cin >> d1 >> d2 >> d3 >> d4 >> d5;
cout << endl;

c1 = d1/tanque;
c2 = d2/tanque;
c3 = d3/tanque;
c4 = d4/tanque;
c5 = d5/tanque;

media = (c1 + c2 +c3 + c4 + c5) /5;

cout << "O consumo da viagem 1 foi " << c1 << endl;
cout << "O consumo da viagem 2 foi " << c2 << endl;
cout << "O consumo da viagem 3 foi " << c3 << endl;
cout << "O consumo da viagem 4 foi " << c4 << endl;
cout << "O consumo da viagem 5 foi " << c5 << endl;
cout << endl;
cout << "A media do consumo foi " << media << endl;

return 0;

}
