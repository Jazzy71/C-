#include <iostream>
#include <string>
class Employee {
protected:
    std::string name;
    double salary;

public:
    Employee(const std::string& n, double sal) : name(n), salary(sal) {}
    virtual double calculatePay() const = 0;
};
class Manager : public Employee {
private:
    double bonus;

public:
    Manager(const std::string& n, double sal, double bns)
        : Employee(n, sal), bonus(bns) {}
    double calculatePay() const override {
        return salary + bonus;
    }
};
class Engineer : public Employee {
private:
    double hourlyRate;
    int hoursWorked;

public:
    Engineer(const std::string& n, double sal, double rate, int hours)
        : Employee(n, sal), hourlyRate(rate), hoursWorked(hours) {}
    double calculatePay() const override {
        return salary + (hourlyRate * hoursWorked);
    }
};

int main() {
    Manager manager("John Doe", 5000.0, 1000.0);
    Engineer engineer("Jane Smith", 4000.0, 25.0, 40);]
    const Employee* ptrEmployee1 = &manager;
    const Employee* ptrEmployee2 = &engineer;
    std::cout << "Manager's total pay: $" << ptrEmployee1->calculatePay() << std::endl;
    std::cout << "Engineer's total pay: $" << ptrEmployee2->calculatePay() << std::endl;

    return 0;
}

