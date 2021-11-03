// CAP04EX3G

#include <iostream>
using namespace std;

int main(void)
{
    int A, B, C, D, R2, R3;

    cout << "Escreva o valor de A: ";
    cin >> A;
    cin.ignore(80, '\n');

    cout << "Escreva o valor de B: ";
    cin >> B;
    cin.ignore(80, '\n');

    cout << "Escreva o valor de C: ";
    cin >> C;
    cin.ignore(80, '\n');

    cout << "Escreva o valor de D: ";
    cin >> D;
    cin.ignore(80, '\n');

    R2 = A%2;
    R3 = A%3;

    if (R2==0 and R3==0)
    {
        cout << "A variavel A e divisivel por 2 e 3" << endl << "O valor de A e: " << A << endl;
    }

    R2 = B%2;
    R3 = B%3;

    if (R2==0 and R3==0)
    {
        cout << "A variavel B e divisivel por 2 e 3" << endl << "O valor de B e: " << B << endl;
    }

    R2 = C%2;
    R3 = C%3;

    if (R2==0 and R3==0)
    {
        cout << "A variavel C e divisivel por 2 e 3" << endl << "O valor de C e: " << C << endl;
    }

    R2 = D%2;
    R3 = D%3;

    if (R2==0 and R3==0)
    {
        cout << "A variavel D e divisivel por 2 e 3" << endl << "O valor de D e: " << D << endl;
    }

return 0;
}
