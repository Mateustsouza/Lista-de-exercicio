#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

    float e = 0;
    float fatorial;
    int c;
    int i;

    for (c = 0; c < 10; c++)  // Soma dos 10 primeiros termos da expressão
    { 

        if (c > 1)
        {
            fatorial = c;

            for (i = 1; i < c; i++)  // Esse for faz o cálculo do fatorial de c     
            { 

                fatorial *= (c - i);
            }
        }
        else
        {
            fatorial = 1; // Aqui são gerados os dois primeiros termos da série
        }

        e += (1 / fatorial); // "Float = 1 / Float". Não pode ser "Float = 1 / int", esse era o erro.  A variável fatorial tinha que ser declrada como float.
    }
    cout << "O numero de Euler vale: " << e << endl;
    return 0;
}