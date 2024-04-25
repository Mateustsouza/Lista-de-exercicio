#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float Farenheit(float);

int main()
{
    float F;
    int i;
    cout << "Celsius" << ' ' << ' ' << "Farenheit" << endl;
    for (i = 0; i <= 100; i++)
    {
        F = Farenheit(i);
        cout << setprecision(1) << fixed;
        cout << ' ' << ' ' << i << ' ' << ' ' << ' ' << ' ' << ' ' << ' ' << ' ' << ' ' << ' ' << ' ' << ' ' << F << endl;
        cout << endl;
    }

    return 0;
}

float Farenheit(float celsius)
{
    float F;
    F = (9.0 /9 5.0) * celsius + 32;
    return F;
}
