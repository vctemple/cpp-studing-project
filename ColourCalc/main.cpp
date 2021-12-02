// COLORCALC
// It's a calculator but with colors

#include <iostream>
#include <iomanip>
#include "colour.h"
using namespace std;

float R, A, B;

void pausa(void)
{
    color(0, 6);
    cout << endl;
    cout << "Press [Enter] for back to Menu: ";
    cin.get();
    clear();
    color(0, 7);
    return;
}

void adicao(void)
{
    color(0, 14);
    cout << endl;
    cout << "-----------" << endl;
    cout << "    SUM    " << endl;
    cout << "-----------" << endl;
    cout << endl;

    cout << "Enter the variable [A]: ";

    color(14, 0);
    cin >> A;
    cin.ignore(80, '\n');

    color(0, 14);
    cout << "Enter the variable [B]: ";

    color(14, 0);
    cin >> B;
    cin.ignore(80, '\n');
    cout << endl;

    color(0, 14);
    R = A+B;

    cout << "The result for the sum of [A] and [B] is:";
    color (14, 0);
    cout << setw(8) << R;
    cout << endl;

    pausa();
    return;
}

void subtracao(void)
{
    color(0, 1);
    cout << endl;
    cout << "-----------------" << endl;
    cout << "   subtraction   " << endl;
    cout << "-----------------" << endl;
    cout << endl;

    cout << "Enter the variable [A]: ";

    color(1, 0);
    cin >> A;
    cin.ignore(80, '\n');

    color(0, 1);
    cout << "Enter the variable [B]: ";

    color(1, 0);
    cin >> B;
    cin.ignore(80, '\n');
    cout << endl;

    color(0, 1);
    R = A-B;

    cout << "The result for the subtraction of [A] and [B] is:";
    color(1, 0);
    cout << setw(8) << R;
    cout << endl;
    pausa();
    return;
}

void multiplicacao(void)
{
    color (0, 5);
    cout << endl;
    cout << "--------------------" << endl;
    cout << "   multiplication   " << endl;
    cout << "--------------------" << endl;
    cout << endl;

    cout << "Enter the variable [A]: ";

    color (5, 0);
    cin >> A;
    cin.ignore(80, '\n');

    color (0, 5);
    cout << "Enter the variable [B]: ";

    color (5, 0);
    cin >> B;
    cin.ignore(80, '\n');
    cout << endl;

    color (0, 5);
    R = A*B;

    cout << "The result for the multiplication of [A] and [B] is:";
    color(5, 0);
    cout << setw(8) << R;
    cout << endl;
    pausa();
    return;
}

void divisao(void)
{
    color(0, 4);
    cout << endl;
    cout << "--------------" << endl;
    cout << "   division   " << endl;
    cout << "--------------" << endl;
    cout << endl;

    cout << "Enter the variable [A]: ";

    color(4, 0);
    cin >> A;
    cin.ignore(80, '\n');

    color(0, 4);
    cout << "Enter the variable [B]: ";

    color(4, 0);
    cin >> B;
    cin.ignore(80, '\n');
    cout << endl;

    color(0, 4);
    if (B==0)
    {
        cout << "Division error" << endl;
        cout << "The variable [B] cannot be 0" << endl;
    }

    else
    {
        R = A/B;

        cout << "The result for the division of [A] by [B] is:";
        color(4, 0);
        cout << setw(8) << R;
        cout << endl;
    }
    pausa();
    return;
}

int main (void)
{
    int opcao = 0;

    while (opcao != 5)
    {
        color(0, 2);
        cout << setprecision(2);
        cout << setiosflags(ios::right);
        cout << setiosflags (ios::fixed);
        cout << endl << endl;
        cout << "-----------------" << endl;
        cout << "    Calculator   " << endl;
        cout << "    Main Menu    " << endl;
        cout << "-----------------" << endl;
        cout << endl;

        cout << "[1] - Sum" << endl;
        cout << "[2] - Subtraction" << endl;
        cout << "[3] - Multiplication" << endl;
        cout << "[4] - Division" << endl;
        cout << "[5] - Exit program" << endl;
        cout << endl;

        cout << "Choose which option you want: ";

        color(2, 0);
        cin >> opcao;
        cin.ignore(80, '\n');

        color(0, 2);
        if (opcao != 5)
        {
            switch(opcao)
            {
                case 1: adicao();           break;
                case 2: subtracao();        break;
                case 3: multiplicacao();    break;
                case 4: divisao();          break;
                default: cout << endl << "Non available option!" << endl;
                         pausa();
            }
        }

    }
    return 0;
}
