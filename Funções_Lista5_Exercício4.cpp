#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;

void mult();

int main()
{
    cout << "Vamos aprender multiplicacao" << endl;
    cout << endl;

    while (1)
    {
        mult();
    }
    return 0;
}

void mult()
{
    unsigned seed = time(0);
    srand(seed);
    int n1, n2, resultado;

    n1 = rand() % 10;
    n2 = rand() % 10;

    cout << "Quanto vale " << n1 << " vezes " << n2 << "\?" << endl;
    cin >> resultado;

    if (resultado == n1 * n2) // Caso em que ele acerte na 1ª tentativa
    {
        cout << "Muito bom!" << endl;
        cout << endl;
    }
    else
    {
        do
        {
            cout << "Nao. Por favor, tente novamente" << endl;
            cin >> resultado;
            if (resultado == n1 * n2)
            {
                cout << "Muito bom!" << endl;
                cout << endl;
            }

        } while (resultado != n1 * n2);
    }
}