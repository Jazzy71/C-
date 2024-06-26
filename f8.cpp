#include <iostream>
#include <cmath> 
double calculateCircleArea(double radius) {
    return M_PI * pow(radius, 2); 
}

int main() {
    double radius;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    if (radius >= 0) {
        double area = calculateCircleArea(radius);
        std::cout << "Area of the circle with radius " << radius << " is: " << area << std::endl;
    } else {
        std::cout << "Radius cannot be negative." << std::endl;
    }
    return 0;
}

