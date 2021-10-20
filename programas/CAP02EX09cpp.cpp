// CAP02EX09 CPP

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    cout << "Standard representation" << endl;
    cout << "10 in decimal      = " << dec << 10 << endl;
    cout << "10 in octal        = " << oct << 10 << endl;
    cout << "10 in hexadecimal  = " << hex << 10 << endl;

    cout << setiosflags(ios::uppercase);
    cout << endl;

    cout << "Representation with uppercase ON" << endl;
    cout << "10 in decimal      = " << dec << 10 << endl;
    cout << "10 in octal        = " << oct << 10 << endl;
    cout << "10 in hexadecimal  = " << hex << 10 << endl;

    cout << resetiosflags(ios::uppercase);
    cout << setiosflags(ios::showbase);
    cout << endl;

    cout << "Representation with showbase ON" << endl;
    cout << "10 in decimal      = " << dec << 10 << endl;
    cout << "10 in octal        = " << oct << 10 << endl;
    cout << "10 in hexadecimal  = " << hex << 10 << endl;

    cout << setiosflags(ios::uppercase);
    cout << endl;

    cout << "Representation with both ON" << endl;
    cout << "10 in decimal      = " << dec << 10 << endl;
    cout << "10 in octal        = " << oct << 10 << endl;
    cout << "10 in hexadecimal  = " << hex << 10 << endl;

return 0;
}
