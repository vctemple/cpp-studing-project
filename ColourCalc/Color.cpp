// Color functions
// functions coding for the color header

#include <iostream>
#include <windows.h>
#include <string>

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

void clear(void)
{
  DWORD n;
  DWORD size;
  COORD coord = {0};
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  HANDLE h = GetStdHandle ( STD_OUTPUT_HANDLE );
  GetConsoleScreenBufferInfo ( h, &csbi );
  size = csbi.dwSize.X * csbi.dwSize.Y;
  FillConsoleOutputCharacter ( h, TEXT ( ' ' ), size, coord, &n );
  GetConsoleScreenBufferInfo ( h, &csbi );
  FillConsoleOutputAttribute ( h, csbi.wAttributes, size, coord, &n );
  SetConsoleCursorPosition ( h, coord );

  return;
}
