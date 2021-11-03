// CAP04EX3E

#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    float A, B, C, D, X, X1, X2;

    cout << "Entre a variavel A: ";
    cin >> A;
    cin.ignore(80,'\n');

    cout << "Entre a variavel B: ";
    cin >> B;
    cin.ignore(80,'\n');

    cout << "Entre a variavel C: ";
    cin >> C;
    cin.ignore(80,'\n');

    if (A==0 and B==0 and C==0)
        {
        cout << "Nao e uma expressao completa de segundo grau";
        }
    else
        {
        D = pow(B,2)-(4*A*C);
        if (D==0)
            {
            X = -B/(2*A);
            cout << "A raiz da equacao e de: " << X;
            }
        else
            {
            if (D>0)
                {
                X1 = (-B + sqrt(D))/(2*A);
                X2 = (-B - sqrt(D))/(2*A);
                cout << "As raizes da equacao sao : " << X1 << " e " << X2;
                }
            else
                {
                cout << "Nao existem raizes reais";
                }
            }
        }
return 0;
}
