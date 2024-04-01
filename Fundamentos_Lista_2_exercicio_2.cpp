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

//2

float x1,x2;
float soma,prod,dif,quo;

cout <<"Questao 2"<< endl;
cout << "Informe dois numeros reais" << endl;
cin >> x1 >> x2;

soma = x1 + x2;
prod = x1*x2;
dif = x1 - x2;
quo = x1/x2;

cout <<"A soma e: "<< soma << endl;
cout <<"O produto e: "<< prod << endl;
cout <<"A diferenca e: "<< dif << endl;
cout <<"O quociente e: "<< quo << endl;

cout << endl;

return 0;

}
// 2