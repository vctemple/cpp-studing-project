// CAP02EX08 CPP

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    float HT, VH, PD, TD, SB, SL;

    cout << setprecision(2);
    cout << setiosflags(ios::right);
    cout << setiosflags(ios::fixed);

    cout << "Escreva o numero de horas trabalhadas.............: ";
    cin >> HT;
    cin.ignore(80, '\n');


    cout << "Escreva o valor da hora de trabalho...............: ";
    cin >> VH;
    cin.ignore(80, '\n');

    cout << "Escreva o percentual de desconto retido na fonte..: ";
    cin >> PD;
    cin.ignore(80, '\n');

    SB = HT*VH;
    TD = (PD/100)*SB;
    SL = SB-TD;

    cout << endl;
    cout << "Salario bruto ...................: " << setw(8) << SB << endl;
    cout << "Valor total de desconto retido ..: " << setw(8) << TD << endl;
    cout << "Valor do salario liquido ........: " << setw(8) << SL << endl;

    cout << endl;
    cout << "Tecle enter para sair";
    cin.get();

    return 0;
}
