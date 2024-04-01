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

//5

double l,c;  // Largura e comprimento
double area; // area da sala

cout << "Digite a largura da sala em metros" << endl;
cin >> l;

cout << "Digite o comprimento da sala em metros" << endl;
cin >> c;

area = l * c;

cout << " A area da sala e: " << setprecision(3) << fixed << area << " metros quadrados" << endl;

cout << endl;



return 0;

}
//5