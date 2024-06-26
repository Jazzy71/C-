#include <iostream>
class Shape {
public:
    virtual double area() const = 0;
};
class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() const override {
        return width * height;
    }
};
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return 3.14159 * radius * radius; 
    }
};

int main() {
    Rectangle rect(5.0, 3.0);
    Circle circle(2.5);
    std::cout << "Area of Rectangle: " << rect.area() << std::endl;
    std::cout << "Area of Circle: " << circle.area() << std::endl;

    return 0;
}

