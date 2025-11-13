#include <iostream>
using namespace std;

class Rectangle {
public:
    int width;
    int height;

    // Constructor
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

    // Copy Constructor
    Rectangle(const Rectangle &obj) {
        width = obj.width;
        height = obj.height;
    }

    // Calculate the area
    int area() {
        return width * height;
    }
};

int main() {
    Rectangle r1(10, 20);
    Rectangle r2 = r1;
    r2.width = 15;
    r2.height = 25;

    cout << "r1: width = " << r1.width << ", height = " << r1.height << ", Area = " << r1.area() << endl;
    cout << "r2: width = " << r2.width << ", height = " << r2.height << ", Area = " << r2.area() << endl;

    return 0;
}
