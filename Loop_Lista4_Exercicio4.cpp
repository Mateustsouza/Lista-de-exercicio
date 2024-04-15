#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

    int A; // Número do produto
    int B; // Quantidade vendida

    float total = 0, total1 = 0, total2 = 0, total3 = 0, total4 = 0, total5 = 0;

    cout << "Insira o numero do produto e a quantidade vendida, respectivamente." << endl;
    cout << "Apos finalizar a insercao dos dados, digite 0 0 para visualizar o valor total." << endl;
    cout << "Pode comecar: " << endl;
    do
    {
        cin >> A >> B;

        switch (A)
        {
        case 1:
            total1 += B * 2.98;
            total += B * 2.98;
            break;
        case 2:
            total2 += B * 4.5;
            total += B * 4.5;
            break;
        case 3:
            total3 += B * 9.98;
            total += B * 9.98;
            break;
        case 4:
            total4 += B * 4.49;
            total += B * 4.49;
            break;
        case 5:
            total5 += B * 6.87;
            total += B * 6.87;
            break;
        case 0:
            break;
        default:
            cout << "O produto " << A << " nao esta cadastrado." << endl;
            break;
        }
    } while ((A != 0) && (B != 0));

    cout << "O valor total do produto 1 foi de: " << total1 << endl;
    cout << "O valor total do produto 2 foi de: " << total2 << endl;
    cout << "O valor total do produto 3 foi de: " << total3 << endl;
    cout << "O valor total do produto 4 foi de: " << total4 << endl;
    cout << "O valor total do produto 5 foi de: " << total5 << endl;
    cout << "O valor total geral foi de: " << total << endl;

    return 0;
}