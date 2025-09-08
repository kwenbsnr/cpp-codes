#include <iostream>

using namespace std;

int main() {
    int number;
    int sum = 0;
    char choice;

    do {
        cout << "Enter a number: ";
        cin >> number;

        // Add the entered number to the sum
        sum += number;

        cout << "Do you want to enter another number? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "The sum of the entered numbers is: " << sum << endl;

    return 0;
}

