#include <iostream>
using namespace std;
double areaOfCircle(double r, double pi = 3.14)
{
    return pi * r * r;
}
int main()
{
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle = " << areaOfCircle(radius);
    return 0;
}