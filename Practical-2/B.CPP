#include <iostream>
using namespace std;

// Call by Value
void swapValue(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    cout << "\nInside Call by Value:";
    cout << "\na = " << a << " b = " << b << endl;
}

// Call by Reference
void swapReference(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    cout << "\nInside Call by Reference:";
    cout << "\na = " << a << " b = " << b << endl;
}

int main()
{
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    // Call by Value
    swapValue(x, y);

    cout << "\nAfter Call by Value:";
    cout << "\nx = " << x << " y = " << y << endl;

    // Call by Reference
    swapReference(x, y);

    cout << "\nAfter Call by Reference:";
    cout << "\nx = " << x << " y = " << y << endl;

    return 0;
}