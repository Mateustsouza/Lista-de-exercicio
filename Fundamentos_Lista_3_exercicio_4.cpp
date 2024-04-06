
/*

COMPUTAÇÃO PARA ENGENHARIA - TURMA 02 - 1/2024

LISTA 3

Autor: Mateus Torres de Souza   
Data: 05/04/2024

*/

// Código 4

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main (){

    int q;  // quantidade de dígitos do número binário
    cout << "Digite a quantidade de digitos do seu numero binario" << endl;
    cin >> q;

    char binario [q];
    cout << "Escreva o seu numero binario de " << q << " digitos" << endl;
    cin >> binario;

    int decimal = 0;
    int c = q-1;
    
    while (c >= 0 ){
        if(binario[c] == '1'){
            decimal += pow(2,q-(c+1)); // pow(base, expoente)
        }
      c--;
    }

    cout << endl;
    cout << "Esse e o numero " << decimal << " em decimal" << endl;

    return 0;
    } 
