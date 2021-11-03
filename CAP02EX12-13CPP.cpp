// CAP02EX12-13 CPP

#include <iostream>
using namespace std;

int main(void)
{
    int V1, V2, V3, V4, R1, R2, R3, R4;

    cout << "Using the increment post-fixed: V1++" << endl;

    V1 = 1;
    R1 = V1++;

    cout << "Value of R1: " << R1 << endl;
    cout << "Value of V1: " << V1 << endl << endl;

    cout << "Using the increment pre-fixed: ++V2" << endl;

    V2 = 1;
    R2 = ++V2;

    cout << "Value of R2: " << R2 << endl;
    cout << "Value of V2: " << V2 << endl << endl;

    cout << "Using the decrement post-fixed: V3--" << endl;

    V3 = 2;
    R3 = V3--;

    cout << "Value of R3: " << R3 << endl;
    cout << "Value of V3: " << V3 << endl << endl;

    cout << "Using the decrement pre-fixed: --V4" << endl;

    V4 = 2;
    R4 = --V4;

    cout << "Value of R4: " << R4 << endl;
    cout << "Value of V4: " << V4 << endl;

    return 0;
}
