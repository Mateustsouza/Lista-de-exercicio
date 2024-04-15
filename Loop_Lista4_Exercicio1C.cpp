#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

    float ex = 0;
    float fatorial;
    float x;
    int i;
    int c;

    cout << "Calculo da exponencial de x" << endl;
    cout << "Insira o valor de x" << endl;
    cin >> x;

    for (c = 0; c < 10; c++)
    {
        if (c > 1)
        {
            fatorial = c;
            for (i = 1; i < c; i++)
            {
                fatorial *= (c - i);
            }
        }
        else
        {
            fatorial = 1;
        }

        ex += pow(x, c) / fatorial; // pow(base,expoente)
    }
    cout << "O numero de Euler vale: " << ex << endl;
    return 0;
}