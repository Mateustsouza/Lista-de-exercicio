#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

void adivinhar();

char c = 's';   // VARIÁVEL GLOBAL

int main()
{

    while (c == 's')
    {
        adivinhar();
    }

    return 0;
}

void adivinhar()
{
    int n;
    do
    {
        unsigned seed = time(0);
        srand(seed);

        n = round(rand()/20);

        if ((n >= 0) && (n <= 1000))
        {
            int x;
            cout << "Eu tenho um numero entre 1 e 1000. Voce consegue adivinhar o meu numero \?" << endl;
            cout << "Digite o seu primeiro palpite  " << endl;
            cin >> x;

            if (x == n)
            {
                cout << "Excelente! Voce adivinhou o numero! Era o " << n << ". Gostaria de jogar novamente\?" << endl;
                cout << "Digite s para SIM ou n para NAO." << endl;
                cin >> c;
            }
            else
            {
                do
                {
                    if (x < n)
                    {
                        cout << "Muito baixo. Tente novamente" << endl;
                        cin >> x;
                    }
                    if (x > n)
                    {
                        cout << "Muito alto. Tente novamente" << endl;
                        cin >> x;
                    }

                } while (x != n);

                cout << "Excelente! Voce adivinhou o numero! Era o " << n << ". Gostaria de jogar novamente\?" << endl;
                cout << "Digite s para SIM ou n para NAO." << endl;
                cin >> c;
            }
        }
    } while (n > 1000);
}
