#include <iostream>
#include <string>
class Vehicle {
protected:
    std::string make;
    std::string model;

public:
    Vehicle(const std::string& mk, const std::string& mdl) : make(mk), model(mdl) {}
    virtual void drive() const {
        std::cout << "Vehicle: " << make << " " << model << " is being driven." << std::endl;
    }
};
class Car : public Vehicle {
private:
    int seatingCapacity;

public:
    Car(const std::string& mk, const std::string& mdl, int capacity)
        : Vehicle(mk, mdl), seatingCapacity(capacity) {}
    void drive() const override {
        std::cout << "Car: " << make << " " << model << " with seating capacity " << seatingCapacity << " is being driven." << std::endl;
    }
};
class Truck : public Vehicle {
private:
    double payloadCapacity;
    double towingCapacity;

public:
    Truck(const std::string& mk, const std::string& mdl, double payload, double towing)
        : Vehicle(mk, mdl), payloadCapacity(payload), towingCapacity(towing) {}
    void drive() const override {
        std::cout << "Truck: " << make << " " << model << " with payload capacity " << payloadCapacity
                  << " tons and towing capacity " << towingCapacity << " tons is being driven." << std::endl;
    }
};

int main() {
    Car car("Toyota", "Camry", 5);
    Truck truck("Ford", "F-150", 2.5, 7.5);
    const Vehicle* ptrVehicle1 = &car;
    const Vehicle* ptrVehicle2 = &truck;
    ptrVehicle1->drive();
    ptrVehicle2->drive();
    return 0;
}

