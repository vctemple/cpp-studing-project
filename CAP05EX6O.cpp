//CAP05EX6O

#include <iostream>
using namespace std;

int main(void)
{
    char RESP = 'S';
    int N;

    while (RESP == 'S' || RESP == 's')
    {
        int FAT = 1;
        do
        {
            cout << "Escolha um numero para saber sua fatorial: ";
            cin >> N;

            if (cin.fail())
            {
                cout << endl << "Entre um valor numerico!" << endl << endl;
                cin.clear();
                cin.ignore(1000, '\n');
            }
            else
            {
                break;
            }
        } while (true);
        cin.ignore(80,'\n');

        for ( int I = 1; I <= N; I++)
        {
            FAT *= I;
        }

        cout << "Fatorial de " << N << ": " << FAT << endl;
        cout << endl;
        cout << "Deseja escolher outro numero?" << endl;
        cout << "Tecle [S] p/ sim ou qualquer outra letra para sair: ";
        cin.get(RESP);
        cin.ignore();
        cout << endl;

    }

    return 0;
}
