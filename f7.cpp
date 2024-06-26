#include <iostream>
#include <iomanip>
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() {
    double temperature;
    char choice;
    std::cout << "Enter 'C' to convert Celsius to Fahrenheit or 'F' to convert Fahrenheit to Celsius: ";
    std::cin >> choice;
    if (choice == 'C' || choice == 'c') {
        std::cout << "Enter temperature in Celsius: ";
        std::cin >> temperature;
        double fahrenheit = celsiusToFahrenheit(temperature);
        std::cout << "Temperature in Fahrenheit: " << std::fixed << std::setprecision(2) << fahrenheit << std::endl;
    } else if (choice == 'F' || choice == 'f') {
        std::cout << "Enter temperature in Fahrenheit: ";
        std::cin >> temperature;
        double celsius = fahrenheitToCelsius(temperature);
        std::cout << "Temperature in Celsius: " << std::fixed << std::setprecision(2) << celsius << std::endl;
    } else {
        std::cout << "Invalid choice." << std::endl;
    }

    return 0;
}

