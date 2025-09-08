#include <iostream>
using namespace std;

// Define a class named Car
class Car {
public:
    // Attributes (features)
    string color;
    string model;
    int year;

    // Method (action)
    void drive() {
       cout << "The car is driving!" << endl;
    }

    void displayInfo() {
        cout << "Car Model: " << model << ", Color: " << color << ", Year: " << year << endl;
    }
};

int main() {
    // Create an object of type Car
    Car myCar;
    myCar.color = "Red";       // Setting the color attribute
    myCar.model = "Toyota";    // Setting the model attribute
    myCar.year = 2020;         // Setting the year attribute

    // Call the drive method
    myCar.drive();

    // Display the car's information
    myCar.displayInfo();

    // Create another object of type Car
    Car anotherCar;
    anotherCar.color = "Blue";
    anotherCar.model = "Honda";
    anotherCar.year = 2018;

    anotherCar.drive();
    anotherCar.displayInfo();

    return 0;
}
