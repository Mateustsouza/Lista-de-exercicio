
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void primo(int);

int main()
{
    int i;
    for (i = 2; i <= 1000; i++)
    {
        primo(i);
    }
    return 0;
}

void primo(int n)
{
    int i;
    int resto;
    int r = 0;
    for (i = 1; i < (n - 1); i++)
    {
        resto = n % (n - i);
        if (resto != 0)
        {
            r++;
        }
    }
    if (r == (n - 2))
    {
        cout << "O numero " << n << " e primo" << endl;
        cout << endl;
    }
}
