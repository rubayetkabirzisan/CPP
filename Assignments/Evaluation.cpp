#include <iostream>

class Complex
{
private:
    double real;
    double imaginary;

public:
    Complex() : real(0.0), imaginary(0.0) {}
    Complex(double realPart, double imaginaryPart) : real(realPart), imaginary(imaginaryPart) {}

    // Getter methods
    double getReal() const
    {
        return real;
    }

    double getImaginary() const
    {
        return imaginary;
    }
};

void setComplex(Complex& complex, double real, double imaginary)
{
    complex = Complex(real, imaginary);
}

void add(const Complex& c1, const Complex& c2)
{
    double realSum = c1.getReal() + c2.getReal();
    double imaginarySum = c1.getImaginary() + c2.getImaginary();

    std::cout << "Sum: " << realSum << " + " << imaginarySum << "i" << std::endl;
}

void sub(const Complex& c1, const Complex& c2)
{
    double realDiff = c1.getReal() - c2.getReal();
    double imaginaryDiff = c1.getImaginary() - c2.getImaginary();

    std::cout << "Subtraction: " << realDiff << " + " << imaginaryDiff << "i" << std::endl;
}

int main()
{
    Complex c1;
    setComplex(c1, 3.5, 2.8);

    Complex c2;
    setComplex(c2, 1.2, 4.7);

    add(c1, c2);
    sub(c1, c2);

    return 0;
}
