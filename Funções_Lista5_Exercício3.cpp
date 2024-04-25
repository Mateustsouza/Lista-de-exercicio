#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

void perfect(int);

int ma
{
    int i;
    for (i = 1; i <= 1000; i++)
    {
        perfect(i);
    }
    return 0;
}

void perfect(int n)
{
    int r2, r3, r5, r7, r11, r13, r17, r19, r23, r29, r31, r37, r41;
    int i2 = 0, i3 = 0,
        i5 = 0, i7 = 0, i11 = 0, i13 = 0, i17 = 0,
        i19 = 0, i23 = 0, i29 = 0, i31 = 0, i37 = 0, i41 = 0;
    int n1; // Variavel para guardar o valor de n.
    n1 = n;
    if (n == 1)
    {
        cout << "O numero " << n << " e um numero perfeito" << endl;
        cout << endl;
    }

    if (n >= 2)
    {
        do
        {
            r2 = n % 2;

            if (r2 == 0)
            {
                i2++;
                n /= 2;
            }
        } while (r2 == 0 && (n > 2));
    }
    n = n1;
    if (n >= 3)
    {
        do
        {
            r3 = n % 3;

            if (r3 == 0)
            {
                i3++;
                n /= 3;
            }
        } while ((r3 == 0) && (n > 3));
    }
    n = n1;
    if (n >= 5)
    {
        do
        {
            r5 = n % 5;

            if (r5 == 0)
            {
                i5++;
                n /= 5;
            }
        } while (r5 == 0 && (n > 5));
    }
    n = n1;
    if (n >= 7)
    {
        do
        {
            r7 = n % 7;

            if (r7 == 0)
            {
                i7++;
                n /= 7;
            }
        } while (r7 == 0 && (n > 7));
    }
    n = n1;
    if (n >= 11)
    {
        do
        {
            r11 = n % 11;

            if (r11 == 0)
            {
                i11++;
                n /= 11;
            }
        } while (r11 == 0 && (n > 11));
    }
    n = n1;
    if (n >= 13)
    {
        do
        {
            r13 = n % 13;

            if (r13 == 0)
            {
                i13++;
                n /= 13;
            }
        } while (r13 == 0 && (n > 13));
    }
    n = n1;
    if (n >= 17)
    {
        do
        {
            r17 = n % 17;

            if (r17 == 0)
            {
                i17++;
                n /= 17;
            }
        } while (r17 == 0 && (n > 17));
    }
    n = n1;
    if (n >= 19)
    {
        do
        {
            r19 = n % 19;

            if (r19 == 0)
            {
                i19++;
                n /= 19;
            }
        } while (r19 == 0 && (n > 19));
    }
    n = n1;
    if (n >= 23)
    {
        do
        {
            r23 = n % 23;

            if (r23 == 0)
            {
                i23++;
                n /= 23;
            }
        } while (r23 == 0 && (n > 23));
    }
    n = n1;
    if (n >= 29)
    {
        do
        {
            r29 = n % 29;

            if (r29 == 0)
            {
                i29++;
                n /= 29;
            }
        } while (r29 == 0 && (n > 29));
    }
    n = n1;
    if (n >= 31)
    {
        do
        {
            r31 = n % 31;

            if (r31 == 0)
            {
                i31++;
                n /= 31;
            }
        } while (r31 == 0 && (n > 31));
    }
    n = n1;
    if (n >= 37)
    {
        do
        {
            r37 = n % 37;

            if (r37 == 0)
            {
                i37++;
                n /= 37;
            }
        } while (r37 == 0 && (n > 37));
    }
    n = n1;
    if (n >= 41)
    {
        do
        {
            r41 = n % 41;

            if (r41 == 0 && (n > 41))
            {
                i41++;
                n /= 41;
            }
        } while (r41 == 0); // Aqui é finalizada a fatoração do número n.
    }
    n = n1;

    int soma = 1;

    if (i2 != 0)
    {
        int s2;
        s2 = pow(2, i2);
        soma += s2;
    }
    if (i3 != 0)
    {
        int s3;
        s3 = pow(3, i3);
        soma += s3;
    }
    if (i5 != 0)
    {
        int s5;
        s5 = pow(2, i5);
        soma += s5;
    }
    if (i7 != 0)
    {
        int s7;
        s7 = pow(2, i7);
        soma += s7;
    }
    if (i11 != 0)
    {
        int s11;
        s11 = pow(2, i11);
        soma += s11;
    }
    if (i13 != 0)
    {
        int s13;
        s13 = pow(2, i13);
        soma += s13;
    }
    if (i17 != 0)
    {
        int s17;
        s17 = pow(2, i17);
        soma += s17;
    }
    if (i19 != 0)
    {
        int s19;
        s19 = pow(2, i19);
        soma += s19;
    }
    if (i23 != 0)
    {
        int s23;
        s23 = pow(2, i23);
        soma += s23;
    }
    if (i29 != 0)
    {
        int s29;
        s29 = pow(2, i29);
        soma += s29;
    }
    if (i31 != 0)
    {
        int s31;
        s31 = pow(2, i31);
        soma += s31;
    }
    if (i37 != 0)
    {
        int s37;
        s37 = pow(2, i37);
        soma += s37;
    }
    if (i41 != 0)
    {
        int s41;
        s41 = pow(2, i41);
        soma += s41;
    }
    if (n != 1)
    {
        if (n == soma)
        {
            cout << "O numero " << n1 << " e um numero perfeito" << endl;
            cout << endl;
        }
    }
}