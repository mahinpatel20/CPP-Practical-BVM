#include <iostream>
#include <string>
using namespace std;

// Function to find maximum of three integers
int max(int a, int b, int c)
{
    if(a >= b && a >= c)
        return a;
    else if(b >= a && b >= c)
        return b;
    else
        return c;
}

// Function to find maximum of three strings
string max(string s1, string s2, string s3)
{
    if(s1 >= s2 && s1 >= s3)
        return s1;
    else if(s2 >= s1 && s2 >= s3)
        return s2;
    else
        return s3;
}

int main()
{
    int a, b, c;
    string s1, s2, s3;

    // Maximum of three numbers
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    cout << "Maximum Number = " << max(a, b, c) << endl;

    // Maximum of three strings
    cout << "\nEnter three strings: ";
    cin >> s1 >> s2 >> s3;
    cout << "Maximum String = " << max(s1, s2, s3) << endl;

    return 0;
}
