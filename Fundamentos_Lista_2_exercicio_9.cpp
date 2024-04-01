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

//9

float d,total,custo;

cout << "Digite a distancia total em quilometros" << endl;
cin >> d;

if(d<=50){
    total = d*1.75;
    custo = total/d;
    }
if(d>50){
    if(d<=150){
        total = 50*1.75 + (d-50)*1.65;
        custo = total/d;
            }
    else {
        total = 50*1.75 + 100*1.65 + (d-150)*1.5;
        custo = total/d;
       }
    }

cout << "O valor total a pagar e " << total << " reais." << endl;
cout << "O custo medio foi de " << custo << " por quilometro rodado."<< endl;


return 0;

}
//9