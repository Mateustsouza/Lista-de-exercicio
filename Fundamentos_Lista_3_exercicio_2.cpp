
/*

COMPUTAÇÃO PARA ENGENHARIA - TURMA 02 - 1/2024

LISTA 3

Autor: Mateus Torres de Souza   
Data: 05/04/2024

*/

// Código 2

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main (){

    float a,g; // a - álcool e g - gasolina
    float div;

    cout << "Calculadora para recomendacao de alcool ou gasolina" << endl;
    cout << endl;
    cout << "Insira o preco do alcool e, em seguida, o da gasolina" << endl;
    cin >> a >> g;
    
    cout << endl;

    div = a/g;

    if (div>0.7){
        cout << "Mais vantajoso abastecer com gasolina" << endl;
    }
    else { 
        cout << "Mais vantajoso abastecer com alcool" << endl;
    }

    return 0;
}






