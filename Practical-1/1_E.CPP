#include <iostream>
using namespace std;
int main()
{
    int marks[6];
    int total = 0;
    cout << "Enter marks of 6 subjects:\n";
    for (int i = 0; i < 6; i++)
    {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }
    cout << "\nTotal Marks = " << total << endl;
    return 0;
}
