#include <iostream>

namespace performance
{
class Employee
{
private:
    int id;
    int performance_rating;

public:
    Employee(int empId, int rating) : id(empId), performance_rating(rating) {}

    int getPerformanceRating()
    {
        return performance_rating;
    }
};
}

namespace salary
{
class Employee
{
private:
    int id;
    int sal;

public:
    Employee(int empId) : id(empId) {}

    int getSalary(int performance_rating)
    {
        if (performance_rating >= 4)
            sal = 40000;
        else if (performance_rating == 3)
            sal = 30000;
        else if (performance_rating == 2)
            sal = 25000;
        else if (performance_rating == 1)
            sal = 20000;
        else
            sal = 0;  // Invalid performance rating

        return sal;
    }
};
}

int main()
{
    performance::Employee performanceEmployees[5] =
    {
        performance::Employee(0, 5),
        performance::Employee(1, 1),
        performance::Employee(2, 2),
        performance::Employee(3, 4),
        performance::Employee(4, 3)
    };

    int id;
    std::cout << "Enter the id for salary: ";
    std::cin >> id;

    salary::Employee salaryEmployee(id);
    int performance_rating = performanceEmployees[id].getPerformanceRating();
    int salary = salaryEmployee.getSalary(performance_rating);

    std::cout << "Salary for id " << id << ": " << salary << std::endl;

    return 0;
}
