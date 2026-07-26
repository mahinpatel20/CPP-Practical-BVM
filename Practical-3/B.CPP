#include <iostream>
using namespace std;

class Bank
{
private:
    string name;
    int accNo;
    float balance;

public:
    // Assign Initial Values
    void assign()
    {
        cout << "\nEnter Depositor Name: ";
        cin >> name;

        cout << "Enter Account Number: ";
        cin >> accNo;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    // Deposit Amount
    void deposit()
    {
        float amount;
        cout << "Enter Deposit Amount: ";
        cin >> amount;

        balance = balance + amount;
    }

    // Withdraw Amount
    void withdraw()
    {
        float amount;

        cout << "Enter Withdrawal Amount: ";
        cin >> amount;

        if(amount <= balance)
        {
            balance = balance - amount;
            cout << "Withdrawal Successful\n";
        }
        else
        {
            cout << "Insufficient Balance\n";
        }
    }

    // Display Details
    void display()
    {
        cout << "\nDepositor Name : " << name;
        cout << "\nAccount Number : " << accNo;
        cout << "\nBalance        : " << balance << endl;
    }
};

int main()
{
    int n;

    cout << "Enter Number of Account Holders: ";
    cin >> n;

    Bank b[n];

    // Assign Initial Values
    for(int i = 0; i < n; i++)
    {
        cout << "\nEnter Details of Account Holder " << i + 1 << endl;
        b[i].assign();
    }

    // Deposit
    for(int i = 0; i < n; i++)
    {
        cout << "\nDeposit for Account Holder " << i + 1 << endl;
        b[i].deposit();
    }

    // Withdraw
    for(int i = 0; i < n; i++)
    {
        cout << "\nWithdraw for Account Holder " << i + 1 << endl;
        b[i].withdraw();
    }

    // Display
    cout << "\n------ Account Details ------\n";

    for(int i = 0; i < n; i++)
    {
        b[i].display();
    }

    return 0;
}