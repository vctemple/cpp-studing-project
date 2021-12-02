// PASSAGEM DE PARAMETROS POR VALOR E REFENCIA
// USO DE SUBROTINAS DE PROCEDIMENTO E FUNÇÃO

#include <iostream>
#include <cctype>
using namespace std;


/*Passagem por valor em um procedimento*/

void fatorial1 (int N)
{
    int I, FAT = 1;
    for (I=1; I<=N; I++)
    {
        FAT *= I;
    }
    cout << "Fatorial de " << N << ": " << FAT << endl;
    return;
}


/*Passagem por referencia em um procedimento*/

void fatorial2 (int N, long int &FAT)
{
    int I;
    FAT = 1;
    for (I=1; I<=N; I++)
    {
        FAT *= I;
    }
    return;
}

/*Passagem por valor em uma funcao*/

int fatorial3 (int N)
{
    int I, FAT=1;
    for (I=1; I<=N; I++)
    {
        FAT *= I;
    }
    return FAT;
}

int main (void)
{
    int X;
    long int Y;

    cout << "Entre um valor para saber sua fatorial: ";
    cin >> X;
    cin.ignore(80, '\n');
    cout << endl;

    fatorial1(X); // Retem o valor dentro da subrotina e portanto cout deve ser feito dentro dela mesma
    cout << endl;

    fatorial2 (X, Y);
    cout << "Fatorial de " << X << ": " << Y << endl; // Retorna para a variavel Y o valor de FAT
    cout << endl;

    cout << "Fatorial de " << X << ": " << fatorial3(X); // Retorna para a propria funcao o valor de FAT
    cout << endl;

    return 0;
}
