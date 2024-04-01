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

//6

int n1,n2;  // Dois números inteiros
int resto;  // O resto da divisão entre n1 e n2

cout << "Digite dois numeros inteiros" << endl;

cout << endl;

cout << "Primeiro o maior deles" << endl;
cin >> n1;
cout << "Agora o menor" << endl;
cin >> n2;

resto = n1 % n2;

cout << endl;

if (resto == 0){
    cout << n1 << " e multiplo de " << n2 << endl;
}

if (resto != 0){
    cout << n1 << " NAO e multiplo de " << n2 << endl;
}

cout << endl;



return 0;

}
//6