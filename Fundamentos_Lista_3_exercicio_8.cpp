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

    double r1,r2;
    double result;
    char op;

    cout << "Insira o primeiro numero" << endl;
    cin >> r1;
    cout << "Insira o segundo numero" << endl;
    cin >> r2;
    cout << "Insira a operacao que deseja entre eles" << endl;
    cin >> op;

    switch (op){
        case '*':
            result = r1 * r2;
            cout << "Resultado: " << r1 << " * " << r2 << " = " << result << endl;
            break;
        case '/':
            result = r1 / r2;
            cout << "Resultado: " << r1 << " / " << r2 << " = " << result << endl;
            break;
        case '-':
            result = r1 - r2;
            cout << "Resultado: " << r1 << " - " << r2 << " = " << result << endl;
            break;
        case '+':
            result = r1 + r2;
            cout << "Resultado: " << r1 << " + " << r2 << " = " << result << endl;
            break;
    }   


    return 0;
    } 
