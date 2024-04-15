#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    /*

    TRIPLO DE PITÁGORAS

    */

    int l1, l2, l3;

    for (l1 = 1; l1 <= 20; l1++)
    {
        for (l2 = 1; l2 <= 20; l2++)
        {
            for (l3 = 1; l3 <= 20; l3++)
            {
                if ((l1 < (l2 + l3) && l2 < (l1 + l3)) && l3 < (l1 + l2)) // Condição de existência de um triângulo: Teste da desigualdade triangular
                {
                    bool a;
                    a = (((l1 > l2) && (l1 > l3)) && (l2 >= l3)); // L1 é a hipotenusa e L2 é o segundo maior lado. Essas restrições foram feitas para eliminar as permutações.

                    if (a == 1)
                    {

                        if (pow(l1, 2) == (pow(l2, 2) + pow(l3, 2))) // Teste do triângulo retângulo
                        {
                            cout << "lado1 = " << l1 << endl;
                            cout << "lado2 = " << l2 << endl;
                            cout << "lado3 = " << l3 << endl;
                            cout << "Formam um triplo de pitagoras" << endl;
                            cout << endl;
                        }
                    }
                }
            }
        }
    }
    return 0;
}