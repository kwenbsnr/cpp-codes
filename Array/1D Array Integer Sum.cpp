/*Write a C++ program that calculates the sum of elements in a single-dimensional array.

Define an integer array of size 5.
Prompt the user to enter 5 integers and store them in the array.
Calculate the sum of all the elements in the array.
Output the sum.
Your program should follow these steps:

Declare an integer array of size 5.
Prompt the user to enter 5 integers one by one and store them in the array.
Use a loop to traverse the array and calculate the sum of all elements.
Output the sum of the elements.*/

#include <iostream>
using namespace std;

int main() {
    int arrAy[5];
    int sum = 0;

    cout << "Enter 5 numbers, pressing Enter after each one:" << endl;

    for (int i = 0; i < 5; i++) {
        cin >> arrAy[i]; // Read the number from the user and store it in the array
        sum += arrAy[i]; // Add the current number to the sum
    }

    cout << "Sum: " << sum << endl;
    return 0;
}
