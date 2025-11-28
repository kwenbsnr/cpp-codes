#include <iostream>

using namespace std;

int main() {
    const int SIZE = 10; // Size of the array
    int numbers[SIZE];   // Declare an array to store 10 numbers

    // Prompt the user to input 10 numbers
    cout << "Enter 10 numbers, pressing Enter after each one:" << endl;

    // Input loop to read 10 numbers
    for (int i = 0; i < SIZE; ++i) {
        cout << "Number " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    // Output the numbers entered by the user
    cout << "\nThe numbers you entered are:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
