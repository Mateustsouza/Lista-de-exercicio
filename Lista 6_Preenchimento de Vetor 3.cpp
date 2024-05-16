/*
Leia um valor X. Coloque este valor na primeira posição de um vetor N[100]. Em cada posição subsequente de N (1 até 99),
coloque a metade do valor armazenado na posição anterior, conforme o exemplo abaixo.
Imprima o vetor N.

Entrada
A entrada contem um valor de dupla precisão com 4 casas decimais.

Saída
Para cada posição do vetor N, escreva "N[i] = Y", onde i é a posição do vetor e Y é o valor
armazenado naquela posição.
Cada valor do vetor deve ser apresentado com 4 casas decimais.
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main()
{

    double N[100], x;
    cin >> fixed >> setprecision(4) >> x;

    N[0] = x;

    for (int i = 0; i <= 98; i++)
    {
        N[i + 1] = N[i] / 2;
        cout << "N[" << i << "] = " << fixed << setprecision(4) << N[i] << endl;
        if (i == 98)
        {
            cout << "N[" << i + 1 << "] = " << fixed << setprecision(4) << N[i + 1] << endl;
        }
    }

    return 0;
}