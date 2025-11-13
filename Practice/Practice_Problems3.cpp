#include <iostream>
using namespace std;
class Point
{
private:
    int x;
    int y;

public:

    Point() : x(0), y(0) {}
    Point(int xVal, int yVal) : x(xVal), y(yVal) {}

    void setX(int xVal)
    {
        x = xVal;
    }
    void setY(int yVal)
    {
        y = yVal;
    }


    int getX() const
    {
        return x;
    }
    int getY() const
    {
        return y;
    }

    void print() const
    {
        cout << "x = " << x << ", y = " << y << endl;
    }

    bool operator>(const Point& other) const
    {
        if (getQuadrant() == other.getQuadrant())
        {

            return (x > other.getX());
        }
        else
        {

            return (getQuadrant() < other.getQuadrant());
        }
    }


    int getQuadrant() const
    {
        if (x >= 0 && y >= 0)
        {
            return 1;
        }
        else if (x < 0 && y >= 0)
        {
            return 2;
        }
        else if (x < 0 && y < 0)
        {
            return 3;
        }
        else
        {
            return 4;
        }
    }
};

int main()
{
    Point p1(2, 3);
    Point p2(5, 7);

    if (p1 > p2)
    {
        cout << "p1 is greater than p2" << endl;
    }
    else
    {
        cout << "p1 is not greater than p2" << endl;
    }

    return 0;
}
