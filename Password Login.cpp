#include <iostream>
#include <string>
#include <conio.h>  // Include the console I/O header for _getch()

using namespace std;

int main() {
    string password;
    char ch;
    string correctPassword = "admin"; // Set the correct password

    cout << "Enter password to access the system (input is hidden): ";

    ch = _getch(); // Read a character without echoing it
    while (ch != 13) { // 13 is the ASCII value for Enter key
        if (ch != 8) { // If the key is not backspace
            password.push_back(ch);
            cout << '*'; // Print an asterisk for each character entered
        } else if (!password.empty()) { // If backspace is hit and the password string is not empty
            password.pop_back(); // Remove the last character from the password
            cout << "\b \b"; // Move backspace, print space (to overwrite the asterisk), move backspace again
        }
        ch = _getch(); // Read the next character
    }

    cout << endl;

    // Check if the entered password matches the correct password
    if (password == correctPassword) {
        cout << "Access granted." << endl;
    } else {
        cout << "Access denied." << endl;
    }

    return 0;
}
