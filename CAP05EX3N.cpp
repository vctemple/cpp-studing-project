// CAP05EX3N

#include <iostream>
using namespace std;

int main(void)
{
    int I = 0;
    float S = 0, M = 0, N;

    do
    {
        cout << "Entre um valor numerico positivo para somar ou negativo para sair: ";
        cin >> N;
        cin.ignore(80,'\n');

        if (N >= 0)
        {
            S += N;
            I++;
        }

    } while (!(N < 0));

    if (I > 0)
    {
        M = S/I;
    }
    else
    {
        cout << endl << "Voce nao forneceu nenhum valor positivo";
    }

    cout << endl;
    cout << "Valor da soma: " << S << endl;
    cout << "Valor da media: " << M << endl;
    cout << "Quantidade de entradas: " << I;
}
