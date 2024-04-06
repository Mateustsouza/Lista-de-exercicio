/*

COMPUTAÇÃO PARA ENGENHARIA - TURMA 02 - 1/2024

LISTA 3

Autor: Mateus Torres de Souza   
Data: 05/04/2024

*/

// Código 6

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std; 


int main (){

    float l1,l2,l3;
    
    cout << "Insira a medida do primeiro lado" << endl;
    cin >> l1;
    
    cout << endl;

    cout << "Insira a medida do segundo lado" << endl;
    cin >> l2;

    cout << endl;

    cout << "Insira a medida do terceiro lado" << endl;
    cin >> l3;

    cout << endl;

    if ((l1 == l2) && (l3 == l1)){
        cout << "O triangulo e Equilatero" << endl;
    }
    else {
        if (((l1 == l2) || (l2 == l3)) || (l1 == l3) ){
            cout << "O triangulo e Isosceles" << endl;
        }
        else {
            cout << "O tringulo e Escaleno" << endl;
        }
    }
    return 0;
    } 
