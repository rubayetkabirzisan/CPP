#include <iostream>
#include <cmath>

class Point {
private:
    double x;
    double y;

public:
    Point(double xCoordinate, double yCoordinate) : x(xCoordinate), y(yCoordinate) {}

    Point* shiftBy(int dx, int dy) {
        x += dx;
        y += dy;
        return this;
    }

    static double distance(Point p1, Point p2) {
        double dx = p2.x - p1.x;
        double dy = p2.y - p1.y;
        return std::sqrt(dx * dx + dy * dy);
    }

    void print() {
        std::cout << "Coordinates: (" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    Point p1(3, 4);
    Point* p2;
    p2 = p1.shiftBy(2, 5);

    std::cout << "Distance between p1 and p2: " << Point::distance(p1, *p2) << std::endl;

    p1.print();
    p2->print();

    return 0;
}
