#include <iostream>
#include <cmath>
using namespace std;

// Right Angle Triangle
float area(float base, float height)
{
    return 0.5 * base * height;
}

// Equilateral Triangle
float area(float side)
{
    return (sqrt(3) / 4) * side * side;
}

// Isosceles Triangle
float area(float equalSide, float base, int)
{
    float height = sqrt(equalSide * equalSide - (base * base) / 4);
    return 0.5 * base * height;
}

int main()
{
    float base, height, side, equalSide, isoBase;

    // Right Angle Triangle
    cout << "Enter base and height of Right Angle Triangle: ";
    cin >> base >> height;
    cout << "Area of Right Angle Triangle = " << area(base, height) << endl;

    // Equilateral Triangle
    cout << "\nEnter side of Equilateral Triangle: ";
    cin >> side;
    cout << "Area of Equilateral Triangle = " << area(side) << endl;

    // Isosceles Triangle
    cout << "\nEnter equal side and base of Isosceles Triangle: ";
    cin >> equalSide >> isoBase;
    cout << "Area of Isosceles Triangle = " << area(equalSide, isoBase, 0) << endl;

    return 0;
}