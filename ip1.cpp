#include <iostream>
#include <cmath>
class Shape {
protected:
    double height;
    double width;

public:
    Shape(double h, double w) : height(h), width(w) {}
    virtual ~Shape() {}
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
};
class Rectangle : public Shape {
public:
    Rectangle(double h, double w) : Shape(h, w) {}

    double area() const override {
        return height * width;
    }

    double perimeter() const override {
        return 2 * (height + width);
    }
};
class Triangle : public Shape {
public:
    Triangle(double h, double w) : Shape(h, w) {}

    double area() const override {
        return (height * width) / 2;
    }

    double perimeter() const override {
        double hypotenuse = sqrt(height * height + width * width);
        return height + width + hypotenuse;
    }
};

int main() {
    Rectangle rect(5.0, 10.0);
    Triangle tri(5.0, 10.0);
    std::cout << "Rectangle:" << std::endl;
    std::cout << "Area: " << rect.area() << std::endl;
    std::cout << "Perimeter: " << rect.perimeter() << std::endl;
    std::cout << "Triangle:" << std::endl;
    std::cout << "Area: " << tri.area() << std::endl;
    std::cout << "Perimeter: " << tri.perimeter() << std::endl;

    return 0;
}

