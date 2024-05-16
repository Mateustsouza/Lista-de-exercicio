/*
Neste problema você deverá ler 15 valores colocá-los em 2 vetores conforme estes valores
forem pares ou ímpares. Só que o tamanho de cada um dos dois vetores é de 5 posições.
Então, cada vez que um dos dois vetores encher, você deverá imprimir todo o vetor e
utilizá-lo novamente para os próximos números que forem lidos. Terminada a leitura,
deve-se imprimir o conteúdo que restou em cada um dos dois vetores, imprimindo primeiro os
valores do vetor impar. Cada vetor pode ser preenchido tantas vezes quantas for necessário.

Entrada
A entrada contém 15 números inteiros.
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int N[15], impar[5], par[5];

    int j = 0; // Contador de quantos números estão guardados no vetor impar.
    int g = 0; // Contador de quantos números estão guardados no vetor par.

    for (int i = 0; i <= 14; i++)
    {
        cin >> N[i];

        if ((N[i] % 2) == 1 || (N[i] % 2) == -1)
        {
            impar[j] = N[i];
            j++;
            if (j > 4) // Opa! O vetor esta cheio?
            {
                for (int i = 0; i <= 4; i++)
                {
                    cout << "impar[" << i << "] = " << impar[i] << endl;
                }
                j = 0;
            }
        }
        else
        {
            par[g] = N[i];
            g++;
            if (g > 4) // Opa! O vetor esta cheio?
            {
                for (int i = 0; i <= 4; i++)
                {
                    cout << "par[" << i << "] = " << par[i] << endl;
                }
                g = 0;
            }
        }
    }
    if (j > 0) // Existe algum número ainda guardado no vetor impar?
    {
        for (int i = 0; i <= j - 1; i++)
        {
            cout << "impar[" << i << "] = " << impar[i] << endl;
        }
    }
    if (g > 0) // Existe algum número ainda guardado no vetor par?
    {
        for (int i = 0; i <= g - 1; i++)
        {
            cout << "par[" << i << "] = " << par[i] << endl;
        }
    }
    return 0;
}