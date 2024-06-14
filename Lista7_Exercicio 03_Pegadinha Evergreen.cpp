
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main()
{

    while (1)
    {
        string texto1, texto2;
        string nome;

        getline(cin, texto1);
        getline(cin, texto2);

        if (texto1.size() == texto2.size()) // O nome tem uma quantidade PAR de caracteres
        {
            for (int j = 0; j <= (texto1.size() - 2); j += 2)
            {
                nome += texto1[j];
                nome += texto1[j + 1];

                nome += texto2[j];
                nome += texto2[j + 1];
            }
        }
        else // O nome tem uma quantidade ÍMPAR de caracteres
        {
            for (int j = 0; j <= (texto1.size() - 2); j += 2)
            {
                if (j == (texto1.size() - 2))
                {
                    nome += texto1[j];
                    nome += texto1[j + 1];
                    nome += texto2[(texto2.size() - 1)]; // Concatena o último caractere da SEGUNDA linha.
                    continue;
                }
                nome += texto1[j];
                nome += texto1[j + 1];

                nome += texto2[j];
                nome += texto2[j + 1];
            }
        }
        cout << nome << endl;
        cout << endl;
    }

    return 0;
}