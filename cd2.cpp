#include <iostream>
#include <string>

class Car {
private:
    std::string brand;
    std::string model;
    int year;

public:
    Car(const std::string& brand, const std::string& model, int year) 
        : brand(brand), model(model), year(year) {
        std::cout << "Car object created for " << brand << " " << model << " " << year << std::endl;
    }
    ~Car() {
        std::cout << "Car object destroyed for " << brand << " " << model << " " << year << std::endl;
    }
    void display() {
        std::cout << "Car: " << brand << " " << model << " " << year << std::endl;
    }
};

int main() {
    Car myCar("Toyota", "Corolla", 2022);
    myCar.display();

    return 0;
}

