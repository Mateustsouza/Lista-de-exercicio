/*

COMPUTAÇÃO PARA ENGENHARIA - TURMA 02 - 1/2024

LISTA 3

Autor: Mateus Torres de Souza   
Data: 05/04/2024

*/

// Código 7

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std; 


int main (){

    int senha;

    cout << "Digite sua senha de usuario" << endl;
    cin >> senha;

    switch (senha) {
        case 1234:
            cout << "ACESSO PERMITIDO" << endl;
            break;
        default:
            cout << "ACESSO NEGADO" << endl;  
        }

    return 0;
    } 
