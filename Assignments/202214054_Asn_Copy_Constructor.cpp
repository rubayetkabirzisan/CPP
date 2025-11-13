//202214054
//Md. Rubaet Kabir Zishan

#include <bits/stdc++.h>
using namespace std;
class Rectangle
{
public:
    int width;
    int height;

    Rectangle(int w, int h)
    {
        width = w;
        height = h;
    }

    Rectangle(const Rectangle& other)
    {
        width = other.width;
        height = other.height;
    }

    int getArea()
    {
        return width * height;
    }

    int getPerimeter()
    {
        return 2 * (width + height);
    }

    bool isSquare()
    {
        return width == height;
    }
};

int main()
{
    Rectangle original(5, 10);
    Rectangle copy(original);

    copy.width = 7;

    cout << "Original Rectangle Area: " << original.getArea() << endl;
    cout << "Modified Copy Area: " << copy.getArea() << endl;

    cout << "Original Rectangle Perimeter: " << original.getPerimeter() << endl;
    cout << "Modified Copy Perimeter: " << copy.getPerimeter() << endl;

    cout << "Is Original Rectangle a Square? " << (original.isSquare() ? "Yes" : "No") << endl;
    cout << "Is Modified Copy a Square? " << (copy.isSquare() ? "Yes" : "No") << endl;

    return 0;
}

