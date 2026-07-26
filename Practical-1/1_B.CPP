#include<iostream>
using namespace std;
int main()
{
    cout<<"1    --->    Addition \n";
    cout<<"2    --->    Subtraction \n";
    cout<<"3    --->    Multiplication \n";
    cout<<"4    --->    Divison\n";
    int choice;
    float n1,n2,result;
    cout<<"Enter Your Choice :\n";
    cin>>choice;
    cout<<"Enter Number 1:\n";
    cin>>n1;
    cout<<"Enter Number 2:\n";
    cin>>n2;
    if(choice==1)
    {
        result=n1+n2;
        cout<<"Result is:"<<result;
    }
    else if(choice==2)
    {
        result=n1-n2;
        cout<<"Result is:"<<result;
    }
    else if(choice==3)
    {
        result=n1*n2;
        cout<<"Result is:"<<result;
    }
    else if(choice==4)
    {
        result=n1/n2;
        cout<<"Result is:"<<result;
    }
    else 
    {
        cout<<"Invalid Choice";
    }
    return 0;
}