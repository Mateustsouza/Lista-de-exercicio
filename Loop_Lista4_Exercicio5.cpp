#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

    int a, b, c, d, e;
    int i, f, g, h, u;

    cout << "Insira uma sequencia de cinco numeros entre 1 e 30:" << endl;
    cin >> a >> b >> c >> d >> e;
    cout << endl;

    cout << a << ' ';
    for (i = 0; i < a; i++)
    {
        cout << "*";
    }
    cout << "\n";

    cout << b << ' ';
    for (i = 0; i < b; i++)
    {
        cout << "*";
    }
    cout << "\n";

    cout << c << ' ';
    for (i = 0; i < c; i++)
    {
        cout << "*";
    }
    cout << "\n";

    cout << d << ' ';
    for (i = 0; i < d; i++)
    {
        cout << "*";
    }
    cout << "\n";

    cout << e << ' ';
    for (i = 0; i < e; i++)
    {
        cout << "*";
    }
    return 0;
}