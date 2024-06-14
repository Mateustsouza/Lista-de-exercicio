#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    while (1)
    {
        string ra;
        getline(cin, ra);

        if (((ra.size() > 20) || (ra.size() < 20)) || ((ra[1] != 'A') || (ra[0] != 'R')))
        {
            cout << "INVALID DATA" << endl;
        }
        else
        {
            int j;
            for (j = 2; j < ra.size(); j++)
            {
                if (ra[j] != '0')
                {
                    for (int i = j; i < ra.size(); i++)
                    {
                        cout << ra[i];
                    }
                    cout << endl;
                    break;
                }
            }
        }
    }
    return 0;
}

