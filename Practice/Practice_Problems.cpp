#include<bits/stdc++.h>
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
};


double operator-(const Point& p1, const Point& p2)
{
    int xDiff = p1.getX() - p2.getX();
    int yDiff = p1.getY() - p2.getY();
    return sqrt(xDiff * xDiff + yDiff * yDiff);
}

int main()
{
    Point p1(2, 3);
    Point p2(5, 7);

    p1.print();
    p2.print();

    double distance = p1 - p2;
   cout << "Manhattan distance: " << distance << std::endl;

    return 0;
}
