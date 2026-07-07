#include<iostream>
using namespace std;
int main()
{
    float c,f;
    cout<<"Enter Temp in fahrenheit: \n";
    cin>>f;
    c=(f-32)*1.8;
    cout<<"Temp in Celsius is:"<<c;
    return 0;
}