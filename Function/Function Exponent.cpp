#include <iostream>
#include <cmath>

double calculatePower(double base, double exponent) {
    return pow(base, exponent);
}

int main() {
    double base, exponent;
    std::cout << "Enter the base number: ";
    std::cin >> base;
    std::cout << "Enter the exponent number: ";
    std::cin >> exponent;

    double result = calculatePower(base, exponent);
    std::cout << "The result is: " << result << std::endl;

    return 0;
}