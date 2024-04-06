/*

COMPUTAÇÃO PARA ENGENHARIA - TURMA 02 - 1/2024

LISTA 3

Autor: Mateus Torres de Souza   
Data: 05/04/2024

*/

// Código 3

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main (){

    char s[5];
    
    cout << "Escreva uma sequencia de 5 digitos inteiros" << endl;
    cin >> s;


    if((s[0] == s[4]) && (s[1] == s[3])){
        cout << "O NUMERO E UM PALINDROMO" << endl;
    }
    else {
        cout << "O NUMERO NAO E UM PALINDROMO" << endl;
    }

    return 0;
}
