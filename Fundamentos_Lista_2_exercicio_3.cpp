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

//3

cout <<"Questao 3"<< endl;

double r;                // raio da cincunferência
double D,A;              // Diâmetro e Área da circunferência
const double pi = 3.14159;

cout << "Informe o valor do raio da circunferencia" << endl;
cin >> r;

D = 2*r;
A = pi*(r*r);

cout << "O diametro  e: "<< D << endl;
cout << "A area  e: "<< A << endl;

cout << endl;




return 0;

}
//3