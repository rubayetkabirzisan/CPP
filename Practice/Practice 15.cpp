#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex() : real(0.0), imaginary(0.0) {}

    void setComplex(double realPart, double imaginaryPart) {
        real = realPart;
        imaginary = imaginaryPart;
    }

    double getReal() const {
        return real;
    }

    double getImaginary() const {
        return imaginary;
    }
};

Complex add(const Complex& c1, const Complex& c2) {
    Complex sum;
    sum.setComplex(c1.getReal() + c2.getReal(), c1.getImaginary() + c2.getImaginary());
    return sum;
}

Complex sub(const Complex& c1, const Complex& c2) {
    Complex diff;
    diff.setComplex(c1.getReal() - c2.getReal(), c1.getImaginary() - c2.getImaginary());
    return diff;
}

int main() {
    Complex c1, c2;

    // Set values for c1
    c1.setComplex(3.5, 2.8);

    // Set values for c2
    c2.setComplex(1.2, 4.7);

    // Perform addition
    Complex sum = add(c1, c2);
    std::cout << "Sum: " << sum.getReal() << " + " << sum.getImaginary() << "i" << std::endl;

    // Perform subtraction
    Complex diff = sub(c1, c2);
    std::cout << "Subtraction: " << diff.getReal() << " + " << diff.getImaginary() << "i" << std::endl;

    return 0;
}
