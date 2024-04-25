#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void Hanoi(int, int, int, int);
int n, inicio, fim, rt;

int main()
{
    

    cout << "Insira o numero de discos" << endl;
    cin >> n;
    cout << "Insira a estaca inicial e a estaca para a qual essa pilha de discos deve ser movida" << endl;
    cin >> inicio >> fim;
    cout << "Insira a estaca a ser usada como area de retencao temporaria" << endl;
    cin >> rt;

    Hanoi(n, inicio, fim, rt);

    return 0;
}



void Hanoi(int n, int inicio, int fim, int rt)
{
    if (n == 1)
    {
        cout << inicio << " para " << fim << endl;
        cout << endl;
        return;
    }
    Hanoi(n - 1, inicio, rt, fim);
    Hanoi(1, inicio, fim, rt);
    Hanoi(n - 1, rt, fim, inicio);
}