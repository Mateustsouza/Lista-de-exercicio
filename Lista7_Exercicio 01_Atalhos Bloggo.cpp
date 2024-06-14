#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main()
{

    while (1)
    {
        string texto, texto_bloggo, str;
        bool n = 1, ita = 1;
        getline(cin, texto);

        for (int i = 0; i < texto.size(); i++)
        {
            if ((texto[i] == '*') && (n == 1)) // PRIMEIRO ASTERISCO
            {
                str = "<b>";
                texto_bloggo += str;
                n = 0;
            }
            else if ((texto[i] == '*') && (n == 0)) // SEGUNDO ASTERISCO
            {
                str = "</b>";
                texto_bloggo += str;
                n = 1;
            }
            else if ((texto[i] == '_') && (ita == 1)) // PRIMEIRO UNDERSCORE
            {
                str = "<i>";
                texto_bloggo += str;
                ita = 0;
            }
            else if ((texto[i] == '_') && (ita == 0)) // SEGUNDO UNDERSCORE
            {
                str = "</i>";
                texto_bloggo += str;
                ita = 1;
            }
            else
            {
                texto_bloggo += texto[i];
            }
        }

        cout << texto_bloggo;
    }
    return 0;
}
