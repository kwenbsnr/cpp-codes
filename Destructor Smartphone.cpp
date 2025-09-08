#include <iostream>
using namespace std;

class Smartphone {
public:
    string brand;
    string model;

    // Constructor
    Smartphone(string b, string m) : brand(b), model(m) {
        cout << "\nSmartphone is being set up!" << endl;
    }

    // Destructor
    ~Smartphone() {
        cout << "\nSmartphone is being reset to factory settings!" << endl;
    }
};

int main() {
    // Create an object of Smartphone
    Smartphone myPhone("Samsung", "Galaxy S21");
    cout <<myPhone.brand;
    cout <<myPhone.model;
    // When main ends, the destructor will be called automatically
    return 0;
}
