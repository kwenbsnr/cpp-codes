#include <iostream>
using namespace std;

class Smartphone {
public:
    string brand;
    string model;
    int batteryLife;

    // Constructor
    Smartphone(string b, string m, int battery) {
        brand = b;
        model = m;
        batteryLife = battery;
        cout << "Smartphone is being set up!" << endl;
    }
};

int main() {
    // Create an object of Smartphone, which calls the constructor
    Smartphone myPhone("Apple", "iPhone 14", 100);
    cout << "Phone model: " << myPhone.model << endl;
    return 0;
}
