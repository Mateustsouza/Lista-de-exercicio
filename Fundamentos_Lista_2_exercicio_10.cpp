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

//10
char nome [5];
int c = 0;
int va = 0;
int ve = 0;
int vi = 0;
int vo = 0;
int vu = 0;

cout << "Digite uma palavra com 5 letras" << endl;
cin >> nome [5];


while(c<5){
   
    if(nome[c] == 'a'){
       va++; 
    }
    if(nome[c] == 'e'){
        ve++;
    }
    if(nome[c] == 'i'){
        vi++;
    }
    if(nome[c] == 'o'){
        vo++;
    }
    if(nome[c] == 'u'){
        vu++;
    }
    c++;
}
cout << "A palavra tem:" << endl;
cout << endl;
cout << va << " a" << endl;
cout << ve << " e" << endl;
cout << vi << " i" << endl;
cout << vo << " o" << endl;
cout << vu << " u" << endl;
cout << c;


return 0;

}
//10

