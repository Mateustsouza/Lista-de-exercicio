#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

    int n;

    cout << "Insira um numero inteiro nao negativo" << endl;
    cin >> n;

    unsigned long int fatorial = n;

    if (n > 1)
    {
        int i;
        for (i = 1; i < n; i++)
        {

            fatorial *= (n - i);
        }
        cout << n << "! = " << fatorial << endl;
    }
    else
    {
        fatorial = 1;
        cout << n << "! = " << fatorial << endl;
    }
    return 0;
}
