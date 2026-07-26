#include <iostream>
using namespace std;
int main()
{
    int n, i, j, prime;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Prime numbers between 1 and " << n << " are:\n";
    for (i = 2; i <= n; i++)
    {
        prime = 1;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime == 1)
        {
            cout << i << " ";
        }
    }
    return 0;
}
