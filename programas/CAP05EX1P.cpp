// CAP05EX1P modify

#include <iostream>
using namespace std;

int main(void)
{
    int A, B, R, SOMA = 0, TOTAL = 0;
    float MEDIA;

    cout << "Type a range between two numbers to know the summation and average of the even values!" << '\n' << endl;

    cout << "Beginning with: ";
    cin >> A;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Finishing at: ";
    cin >> B;
    cin.ignore(80, '\n');
    cout << endl;

    while (A <= B)
    {
        R = A%2;

        if (R == 0)
        {
            SOMA = SOMA+A;
            TOTAL++;
            cout << "Number " << TOTAL << ": " << A << endl;
        }

        A++;

    }

    MEDIA = SOMA/TOTAL;

    cout << '\n';
    cout << "Total numbers: " << TOTAL << endl;
    cout << "Sum: " << SOMA << endl;
    cout << "Average: " << MEDIA << endl;

return 0;
}
