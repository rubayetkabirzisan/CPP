#include <iostream>

class Bus
{
private:
    double velocity;
    double costPerKilometer;

public:
    void setAttributes(double v, double c)
    {
        velocity = v;
        costPerKilometer = c;
    }

    double calculateTime(double distance)
    {
        return distance / velocity;
    }

    double calculateCost(double distance)
    {
        return distance * costPerKilometer;
    }
};

class Train
{
private:
    double velocity;
    double costPerKilometer;

public:
    void setAttributes(double v, double c)
    {
        velocity = v;
        costPerKilometer = c;
    }

    double calculateTime(double distance)
    {
        return distance / velocity;
    }

    double calculateCost(double distance)
    {
        return distance * costPerKilometer;
    }
};

void compareTime(Bus bus, Train train, double distance)
{
    double busTime = bus.calculateTime(distance);
    double trainTime = train.calculateTime(distance);

    std::cout << "Time comparison:" << std::endl;
    std::cout << "Bus time: " << busTime << " hours" << std::endl;
    std::cout << "Train time: " << trainTime << " hours" << std::endl;
    if (busTime < trainTime)
    {
        std::cout << "Bus is more efficient in terms of time." << std::endl;
    }
    else if (busTime > trainTime)
    {
        std::cout << "Train is more efficient in terms of time." << std::endl;
    }
    else
    {
        std::cout << "Both bus and train take the same time." << std::endl;
    }
}

void compareCost(Bus bus, Train train, double distance)
{
    double busCost = bus.calculateCost(distance);
    double trainCost = train.calculateCost(distance);

    std::cout << "Cost comparison:" << std::endl;
    std::cout << "Bus cost: $" << busCost << std::endl;
    std::cout << "Train cost: $" << trainCost << std::endl;
    if (busCost < trainCost)
    {
        std::cout << "Bus is more efficient in terms of cost." << std::endl;
    }
    else if (busCost > trainCost)
    {
        std::cout << "Train is more efficient in terms of cost." << std::endl;
    }
    else
    {
        std::cout << "Both bus and train cost the same." << std::endl;
    }
}

int main()
{
    Bus bus;
    bus.setAttributes(60.0, 10.0); // Set bus attributes (velocity and cost per kilometer)

    Train train;
    train.setAttributes(100.0, 15.0); // Set train attributes (velocity and cost per kilometer)

    double distance = 200.0; // Distance in kilometers

    compareTime(bus, train, distance);
    std::cout << std::endl;
    compareCost(bus, train, distance);

    return 0;
}

