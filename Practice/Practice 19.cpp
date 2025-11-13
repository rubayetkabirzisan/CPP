#include <iostream>
#include <cmath>

class Point {
private:
    double x;
    double y;

public:
    Point(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}

    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }
};

class Line {
private:
    Point point1;
    Point point2;

public:
    Line(const Point& p1, const Point& p2) : point1(p1), point2(p2) {}

    double getLength() const {
        double xDiff = point1.getX() - point2.getX();
        double yDiff = point1.getY() - point2.getY();
        return std::sqrt(xDiff * xDiff + yDiff * yDiff);
    }

    Point getMidpoint() const {
        double xMid = (point1.getX() + point2.getX()) / 2;
        double yMid = (point1.getY() + point2.getY()) / 2;
        return Point(xMid, yMid);
    }
};

int main() {
    // Create two points
    Point p1(1.0, 2.0);
    Point p2(4.0, 6.0);

    // Create a line using the two points
    Line line(p1, p2);

    // Calculate and print the length of the line
    double length = line.getLength();
    std::cout << "Length of the line: " << length << std::endl;

    // Calculate and print the midpoint of the line
    Point midpoint = line.getMidpoint();
    std::cout << "Midpoint of the line: (" << midpoint.getX() << ", " << midpoint.getY() << ")" << std::endl;

    return 0;
}

