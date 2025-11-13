#include <iostream>
using namespace std;

namespace SquareSpace
{
double Area(double side)
{
    return side * side;
}

}

namespace CircleSpace
{
const double PI = 3.14159;
double Area(double radius)
{
    return PI * radius * radius;
}

}

int main()
{
    double a;
    cout << "Enter the value of a: ";
    cin >> a;

    double squareArea = SquareSpace::Area(a);
    double circleArea = CircleSpace::Area(a);

    cout << "Area of square: " << squareArea << endl;
    cout << "Area of circle: " << circleArea << endl;

    return 0;
}
