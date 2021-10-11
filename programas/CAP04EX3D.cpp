// CAP04EX3D

#include <iostream>
using namespace std;

int main(void)
{

float N1, N2, N3, N4, NE, MD1, MD2;

cout << "Entre a primeira nota: ";
cin >> N1;
cin.ignore(80, '\n');

cout << "Entre a segunda nota: ";
cin >> N2;
cin.ignore(80, '\n');

cout << "Entre a terceira nota: ";
cin >> N3;
cin.ignore(80, '\n');

cout << "Entre a quarta nota: ";
cin >> N4;
cin.ignore(80, '\n');

MD1 = (N1+N2+N3+N4)/4;

if (MD1 >= 7)
    {
     cout << "Aluno aprovado com media: " << MD1 << endl;
    }
else
    {
     cout << "Aluno com media: " << MD1 << endl << "Necessario exame" << endl;
     cout << "Insira a nota do exame: ";
     cin >> NE;
     cin.ignore(80,'\n');
     MD2 = (NE+MD1)/2;
     if (MD2 >= 5)
        {
         cout << "Aluno aprovado com media: " << MD2;
        }
     else
        {
         cout << "Aluno reprovado com media: " << MD2;
        }
    }
return 0;
}
