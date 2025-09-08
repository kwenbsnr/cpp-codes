#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h> // for _getch() to read a single character without echoing it

using namespace std;

void clearConsole() {
    #ifdef _WIN32
        system("CLS"); // Clear console (Windows)
    #else
        system("clear"); // Clear console (Linux/Mac)
    #endif
}

string getPasswordInput() {
    string password;
    char ch;
    while ((ch = _getch()) != '\r') { 
        if (ch == '\b') { 
            if (!password.empty()) {
                password.pop_back();
                cout << "\b \b"; 
            }
        } else {
            password.push_back(ch);
            cout << '*';
        }
    }
    cout << endl;
    return password;
}

int main() {
    const string correctUsername = "user";
    const string correctPassword = "program";
    int attempts = 5;

    string username, password;

    while (attempts > 0) {
        
        
        cout << "\n\nEnter username: ";
        cin >> username;

        cout << "Enter password: ";
        password = getPasswordInput();

        if (username == correctUsername && password == correctPassword) {
		   clearConsole();// Clear console
            cout << "\n\nAccess granted." << endl<<endl<<endl;
            clearConsole();
            int num;
    		
    		cout << "\t EVEN-ODD CHECKER SYSTEM" <<endl;
    		cout << "\t-------------------------"<< endl;
            cout <<"\n\tEnter an integer: ";
            cin >> num;
    
            if (num % 2 == 0)
                cout << endl <<"\t"<< num << " is even";
            else
                cout << endl <<"\t" << num << " is odd.";
                
            break;
        } else {
            attempts--;
            clearConsole(); // Clear console
            cout << "\nIncorrect username or password. " << attempts << " attempts remaining." << endl;
        }

        if (attempts == 0) {
            cout << "Too many failed attempts. Exiting program." << endl;

        }
    }

    return 0;
}