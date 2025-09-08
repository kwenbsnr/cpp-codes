#include <iostream>
using namespace std;

int main() {
    int numCount;

    // Prompt the user to enter the count of numbers
    cout << "Enter the count of numbers: ";
    cin >> numCount;

    int numbers[numCount]; // Declare the array with the specified size

    // Prompt the user to enter the numbers
    cout << "Enter " << numCount << " numbers, pressing Enter after each one:" << endl;
    for (int i = 0; i < numCount; i++) {
        cin >> numbers[i]; // Read the numbers from the user
    }

    // Display the list of odd and even numbers
    cout << "List of ODD numbers:" << endl;
    for (int i = 0; i < numCount; i++) {
        if (numbers[i] % 2 != 0) { // Check if the number is odd
            cout << numbers[i] << " ";
        }
    }
    cout << endl;

    cout << "List of EVEN numbers:" << endl;
    for (int i = 0; i < numCount; i++) {
        if (numbers[i] % 2 == 0) { // Check if the number is even
            cout << numbers[i] << " ";
        }
    }
    cout << endl;

    return 0;
}

