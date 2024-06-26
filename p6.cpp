#include <iostream>
class Shape {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
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
    double perimeter() const override {
        return 2 * (width + height);
    }
};
class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(double b, double h) : base(b), height(h) {}
    double area() const override {
        return 0.5 * base * height;
    }
    double perimeter() const override {
        double hypotenuse = sqrt(base * base + height * height);
        return base + height + hypotenuse;
    }
};

int main() {
    Rectangle rect(5.0, 3.0);
    Triangle tri(4.0, 6.0);
    std::cout << "Rectangle:" << std::endl;
    std::cout << "Area: " << rect.area() << std::endl;
    std::cout << "Perimeter: " << rect.perimeter() << std::endl;
    std::cout << "\nTriangle:" << std::endl;
    std::cout << "Area: " << tri.area() << std::endl;
    std::cout << "Perimeter: " << tri.perimeter() << std::endl;

    return 0;
}

