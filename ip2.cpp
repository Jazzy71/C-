#include <iostream>
#include <string>
class Vehicle {
protected:
    std::string make;
    std::string model;
    int year;
public:
    Vehicle(const std::string& mk, const std::string& mdl, int yr) : make(mk), model(mdl), year(yr) {}

    void setMake(const std::string& mk) { make = mk; }
    std::string getMake() const { return make; }

    void setModel(const std::string& mdl) { model = mdl; }
    std::string getModel() const { return model; }

    void setYear(int yr) { year = yr; }
    int getYear() const { return year; }

    virtual ~Vehicle() {}
};
class Car : public Vehicle {
private:
    int seatingCapacity;
    std::string fuelType;
public:
    Car(const std::string& mk, const std::string& mdl, int yr, int sc, const std::string& ft) 
        : Vehicle(mk, mdl, yr), seatingCapacity(sc), fuelType(ft) {}
    void setSeatingCapacity(int sc) { seatingCapacity = sc; }
    int getSeatingCapacity() const { return seatingCapacity; }
    void setFuelType(const std::string& ft) { fuelType = ft; }
    std::string getFuelType() const { return fuelType; }
};
class Truck : public Vehicle {
private:
    double payloadCapacity;
    double towingCapacity;

public:
    Truck(const std::string& mk, const std::string& mdl, int yr, double pc, double tc) 
        : Vehicle(mk, mdl, yr), payloadCapacity(pc), towingCapacity(tc) {}

    void setPayloadCapacity(double pc) { payloadCapacity = pc; }
    double getPayloadCapacity() const { return payloadCapacity; }

    void setTowingCapacity(double tc) { towingCapacity = tc; }
    double getTowingCapacity() const { return towingCapacity; }
};

int main() {
    Car myCar("Toyota", "Camry", 2020, 5, "Gasoline");
    std::cout << "Car Make: " << myCar.getMake() << std::endl;
    std::cout << "Car Model: " << myCar.getModel() << std::endl;
    std::cout << "Car Year: " << myCar.getYear() << std::endl;
    std::cout << "Car Seating Capacity: " << myCar.getSeatingCapacity() << std::endl;
    std::cout << "Car Fuel Type: " << myCar.getFuelType() << std::endl;
    Truck myTruck("Ford", "F-150", 2018, 3000.0, 12000.0);
    std::cout << "Truck Make: " << myTruck.getMake() << std::endl;
    std::cout << "Truck Model: " << myTruck.getModel() << std::endl;
    std::cout << "Truck Year: " << myTruck.getYear() << std::endl;
    std::cout << "Truck Payload Capacity: " << myTruck.getPayloadCapacity() << " lbs" << std::endl;
    std::cout << "Truck Towing Capacity: " << myTruck.getTowingCapacity() << " lbs" << std::endl;

    return 0;
}

