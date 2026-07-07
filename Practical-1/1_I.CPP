#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int &b = a;   // b is a reference to a

    cout << "Value of a = " << a << endl;
    cout << "Value of b = " << b << endl;

    b = 20;   // Changing b also changes a

    cout << "\nAfter changing b:" << endl;
    cout << "Value of a = " << a << endl;
    cout << "Value of b = " << b << endl;

    return 0;
}
