/*
Leia um valor e faça um programa que coloque o valor lido na primeira posição de um vetor N[10].
Em cada posição subsequente, coloque o dobro do valor da posição anterior.
Por exemplo, se o valor lido for 1, os valores do vetor devem ser 1,2,4,8 e assim sucessivamente.
Mostre o vetor em seguida.

Entrada
A entrada contém um valor inteiro (V<=50).

Saída
Para cada posição do vetor, escreva "N[i] = X", onde i é a posição do vetor e X é o valor
armazenado na posição i. O primeiro número do vetor N (N[0]) irá receber o valor de V.
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

	float vetor[10];
	int n;

	//cout << "Insira um valor inteiro entre 1 e 50" << endl;
	cin >> n;
	vetor[0] = n;
	cout << endl;

	for (int i = 0; i <= 8; i++)
	{
		vetor[(i + 1)] = 2 * vetor[i];
		cout << "N[" << i << "] = " << vetor[i] << endl;

		if (i == 8)
		{

			cout << "N[" << i+1 << "] = " << vetor[i + 1] << endl;
		}
	}

	return 0;
}
