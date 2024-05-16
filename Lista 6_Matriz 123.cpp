/*
Leia um valor inteiro N que é o tamanho da matriz que deve ser impressa
conforme o modelo fornecido.

Entrada
A entrada contém vários casos de teste e termina com EOF. Cada caso de teste
é composto por um único inteiro N (3 ≤ N < 70), que determina o tamanho (linhas e colunas)
de uma matriz que deve ser impressa.

Saída
Para cada N lido, apresente a saída conforme o exemplo fornecido.
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int dim[68]; // Vetor que contém as dimensões das matrizes a serem exibidas.
    // São 68 casos no máximo, de 3 a 70, incluindo o 3.

    int q; //  Variável que guarda a QUANTIDADE DE CASOS TESTE que foram inseridos.

    for (int i = 0; i <= 67; i++)
    {
        cin >> dim[i];
        if (dim[i] == -1) // ESSA É A CONDIÇÃO DE PARADA.
        {
            q = i;
            break; // ESSE BREAK INTERROMPE O LAÇO FOR, OU SEJA, O PROGRAMA SAI DO LAÇO IMEDIATAMENTE, SEM TERMINAR OS 68 LAÇOS.
        }
    }

    for (int n = 0; n <= q - 1; n++)
    {
        int N[dim[n]][dim[n]];

        if (dim[n] % 2 == 0) // Matriz Quadrada de dimensão PAR.
        {
            for (int j = 0; j <= dim[n] - 1; j++) // j é referente a COLUNA.
            {
                for (int i = 0; i <= dim[n] - 1; i++) // i é referente  a LINHA.
                {
                    if (i == j)  // ESTOU EM UM ELEMENTO QUE PERTENCE À DIAGONAL PRINCIPAL
                    {
                        N[i][j] = 1;
                        cout << N[i][j];
                        continue;
                    }
                    if (i + j == dim[n] - 1) //  ESTOU EM UM ELEMENTO QUE PERTENCE À DIAGONAL SECUNDÁRIA
                    {
                        N[i][j] = 2;
                        cout << N[i][j];
                        continue;
                    }
                    N[i][j] = 3;
                    cout << N[i][j];
                }
                cout << endl;
            }
        }
        else // Matriz Quadrada de dimensão ÍMPAR.
        {
            for (int j = 0; j <= dim[n] - 1; j++) // j é referente a LINHA.
            {
                for (int i = 0; i <= dim[n] - 1; i++) // i é referente  a COLUNA.
                {
                    if ((i == j) && (i + j == dim[n] - 1))
                    {
                        N[i][j] = 2; // Foi dada preferência para o 2.
                        cout << N[i][j];
                        continue;
                    }
                    if (i == j)   // ESTOU EM UM ELEMENTO QUE PERTENCE À DIAGONAL PRINCIPAL
                    {
                        N[i][j] = 1;
                        cout << N[i][j];
                        continue;
                    }
                    if (i + j == dim[n] - 1)  //  ESTOU EM UM ELEMENTO QUE PERTENCE À DIAGONAL SECUNDÁRIA
                    {
                        N[i][j] = 2;
                        cout << N[i][j];
                        continue;
                    }
                    N[i][j] = 3;
                    cout << N[i][j];
                }
                cout << endl;
            }
        }
    }
    return 0;
}