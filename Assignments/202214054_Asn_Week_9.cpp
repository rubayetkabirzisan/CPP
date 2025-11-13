#include<bits/stdc++.h>
using namespace std;
class Car
{
protected:
    string make;
    string model;
    int year;
    double rentalPrice;

public:
    Car(const string& make, const string& model, int year, double rentalPrice)
        : make(make), model(model), year(year), rentalPrice(rentalPrice) {}

    virtual void displayInfo() const
    {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Rental Price per Day: $" << rentalPrice << endl;
    }

    virtual ~Car() {}
};

class EconomyCar : public Car
{
public:
    EconomyCar(const string& make, const string& model, int year, double rentalPrice)
        : Car(make, model, year, rentalPrice) {}

    void displayInfo() const override
    {
        cout << "Car Type: Economy" << endl;
        Car::displayInfo();
    }
};

class StandardCar : public Car
{
public:
    StandardCar(const string& make, const string& model, int year, double rentalPrice)
        : Car(make, model, year, rentalPrice) {}

    void displayInfo() const override
    {
        cout << "Car Type: Standard" << endl;
        Car::displayInfo();
    }
};

class LuxuryCar : public Car
{
public:
    LuxuryCar(const string& make, const string& model, int year, double rentalPrice)
        : Car(make, model, year, rentalPrice) {}

    void displayInfo() const override
    {
        cout << "Car Type: Luxury" << endl;
        Car::displayInfo();
    }
};

int main()
{
    EconomyCar economyCar("Toyota", "Yaris", 2022, 50.0);
    StandardCar standardCar("Honda", "Accord", 2021, 100.0);
    LuxuryCar luxuryCar("Mercedes-Benz", "S-Class", 2023, 300.0);

    economyCar.displayInfo();
    cout << endl;

    standardCar.displayInfo();
    cout << endl;

    luxuryCar.displayInfo();
    cout << endl;

    return 0;
}
