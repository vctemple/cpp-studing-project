// Subrotinas ex1
// CALCULADORA

#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

float R, A, B;

void adicao (void);
void subtracao (void);
void multiplicacao (void);
void divisao (void);
void pausa (void);

int main (void)
{
    int opcao = 0;

    while (opcao != 5)
    {
        cout << setprecision(2);
        cout << setiosflags(ios::right);
        cout << setiosflags (ios::fixed);
        cout << endl << endl;
        cout << "-------------------" << endl;
        cout << "   Calculadora     " << endl;
        cout << "  Menu Principal   " << endl;
        cout << "-------------------" << endl;
        cout << endl;

        cout << "[1] - Adicao" << endl;
        cout << "[2] - Subtracao" << endl;
        cout << "[3] - Multiplicacao" << endl;
        cout << "[4] - Divisao" << endl;
        cout << "[5] - Sair do programa" << endl;
        cout << endl;

        cout << "escolha uma das opcoes disponiveis: ";
        cin >> opcao;
        cin.ignore(80, '\n');

        if (opcao != 5)
        {
            switch(opcao)
            {
                case 1: adicao();           break;
                case 2: subtracao();        break;
                case 3: multiplicacao();    break;
                case 4: divisao();          break;
                default: cout << "opcao invalida";
            }
        }

    }
    return 0;
}

void adicao(void)
{
    cout << endl;
    cout << "------------" << endl;
    cout << "   Adicao   " << endl;
    cout << "------------" << endl;
    cout << endl;

    cout << "Entre um valor para a variavel [A]: ";
    cin >> A;
    cin.ignore(80, '\n');

    cout << "Entre um valor para a variavel [B]: ";
    cin >> B;
    cin.ignore(80, '\n');
    cout << endl;

    R = A+B;

    cout << "O resultado da soma de [A] e [B] = " << setw(8) << R;
    cout << endl;

    pausa();
    return;
}

void subtracao(void)
{
    cout << endl;
    cout << "----------------" << endl;
    cout << "    subtracao   " << endl;
    cout << "----------------" << endl;
    cout << endl;

    cout << "Entre um valor para a variavel [A]: ";
    cin >> A;
    cin.ignore(80, '\n');

    cout << "Entre um valor para a variavel [B]: ";
    cin >> B;
    cin.ignore(80, '\n');
    cout << endl;

    R = A-B;

    cout << "O resultado da subtracao de [A] e [B] = " << setw(8) << R;
    cout << endl;

    pausa();
    return;
}

void multiplicacao(void)
{
    cout << endl;
    cout << "------------------" << endl;
    cout << "   multiplicacao  " << endl;
    cout << "------------------" << endl;
    cout << endl;

    cout << "Entre um valor para a variavel [A]: ";
    cin >> A;
    cin.ignore(80, '\n');

    cout << "Entre um valor para a variavel [B]: ";
    cin >> B;
    cin.ignore(80, '\n');
    cout << endl;

    R = A*B;

    cout << "O resultado da multiplicacao de [A] e [B] = " << setw(8) << R;
    cout << endl;

    pausa();
    return;
}

void divisao(void)
{
    cout << endl;
    cout << "-------------" << endl;
    cout << "   divisao   " << endl;
    cout << "-------------" << endl;
    cout << endl;

    cout << "Entre um valor para a variavel [A]: ";
    cin >> A;
    cin.ignore(80, '\n');

    cout << "Entre um valor para a variavel [B]: ";
    cin >> B;
    cin.ignore(80, '\n');
    cout << endl;

    if (B==0)
    {
        cout << "Erro ao dividir" << endl;
        cout << "A variavel [B] nao pode ser 0" << endl;
    }

    else
    {
        R = A/B;

        cout << "O resultado da multiplicacao de [A] e [B] = " << setw(8) << R;
        cout << endl;
    }

    pausa();
    return;
}

void pausa(void)
{
    cout << endl;
    cout << "Tecle [Enter] para voltar ao menu principal: ";
    cin.get();

    return;
}
