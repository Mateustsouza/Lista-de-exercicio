/*
Faça um programa que leia um vetor N[20]. Troque a seguir, o primeiro elemento com o último,
o segundo elemento com o penúltimo, etc., até trocar o 10º com o 11º. Mostre o vetor modificado.

Entrada
A entrada contém 20 valores inteiros, positivos ou negativos.

Saída
Para cada posição do vetor N, escreva "N[i] = Y", onde i é a posição do vetor e Y é o valor
armazenado naquela posição.
*/


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

    int N[20];

    for (int i = 0; i <= 19; i++)
    {
        cin >> N[i];
    }

    int x; // Variável Auxiliar para se guardar o valor de N[i]

    for (int i = 0; i <= 9; i++)
    {

        x = N[i];
        N[i] = N[19 - i];
        N[19 - i] = x;
    }
    for (int i = 0; i <= 19; i++)
    {
        cout << "N[" << i << "] = " << N[i] << endl;
    }

    return 0;
}
