// EX_CORES
// Exercicio para aplicacao de bibliotecas

#include <iostream>
#include <windows.h>
using namespace std;

#define black     0
#define blue      1
#define green     2
#define cyan      3
#define red       4
#define magenta   5
#define brown     6
#define lgray     7
#define dgrey     8
#define lblue     9
#define lgreen   10
#define lcyan    11
#define lred     12
#define lmagenta 13
#define yellow   14
#define white    15

void clear(void)
{
    HANDLE tela;
    DWORD escrita = 0;
    COORD pos;

    tela = GetStdHandle(STD_OUTPUT_HANDLE);
    pos.X = 0;
    pos.Y = 0;
    FillConsoleOutputCharacter(tela, 32, 80 * 25, pos, &escrita);
    SetConsoleCursorPosition(tela, pos);

    return;
}

void color(int fundo, int texto)
{
    HANDLE tela;
    int cor;

    tela = GetStdHandle(STD_OUTPUT_HANDLE);

    if (fundo < 0 and fundo > 15 and texto < 0 and texto > 15)
    {
        cor = 15;
    }
    else
    {
        cor = texto + fundo*16;
    }

    SetConsoleTextAttribute(tela, cor);

    return;
}

int main(void)
{
clear();
cout << "Exemplos de colorizacao de textos por codigo numerico:" << endl << endl;
cout << endl;

color(1,14);
cout << "Fundo: azul / Texto: amarelo" << endl;
cout << endl;

color (3, 8);
cout << "Fundo: Ciano / Texto: Cinza escuro" << endl;
cout << endl;

color (4, 14);
cout << "Fundo: Vermelho / Texto: Amarelo" << endl;
cout << endl;

color (0, 2);
cout << "Fundo: Preto / Texto: Verde" << endl;
cout << endl;

color (7, 12);
cout << "Fundo: Cinza claro / Texto: Vermelho claro" << endl;
cout << endl;

color (6, 5);
cout << "Fundo: Marrom / Texto: Roxo" << endl;
cout << endl;

color (5, 0);
cout << "Fundo: Roxo / Texto: Preto" << endl;
cout << endl;

color (0, 7);
cout << "Tecle [Enter] para sair";
cin.get();

return 0;
}
