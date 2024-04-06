/*

COMPUTAÇÃO PARA ENGENHARIA - TURMA 02 - 1/2024

LISTA 3

Autor: Mateus Torres de Souza   
Data: 05/04/2024

*/

// Código 5

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std; 


int main (){

    char a;
    
    cout << "Digite uma letra" << endl;
    cin >> a;
    
    switch (a) {
    	case 'a':
    		cout << "A letra e uma vogal" << endl;
    		break;
		case'e': 
			cout << "A letra e uma vogal" << endl;
			break;
		case'i': 
			cout << "A letra e uma vogal" << endl;
			break;
		case'o': 
			cout << "A letra e uma vogal" << endl;
			break;
		case'u': 
			cout << "A letra e uma vogal" << endl;
			break;
		default:
		cout << "A letra e uma consoante" << endl;	
	
	}

    return 0;
    } 

