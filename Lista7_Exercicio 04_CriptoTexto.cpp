#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    int C;
    cin >> C;

    while (C > 0)
    {
        string texto, msg;
        cin >> texto;
        bool min;

        int i;
        for (i = (texto.size() - 1); i >= 0; i--) // A varredura começa do FINAL da string.
        {
            min = islower(texto[i]);
            if (min == 1)
            {
                cout << texto[i];
            }
        }
        cout << endl;
        cout << endl;
        C--;
    }
    return 0;
}

/*
char c = 'a';
bool b;
b = islower(c);

cout << b;

*/
