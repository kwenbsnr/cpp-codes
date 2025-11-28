#include <iostream>
using namespace std;

/*You are tasked with creating a C++ program that finds the least common multiple (LCM) of a set of input numbers. The program should follow these steps:

1.	Prompt the user to input the number of values for which they want to find the LCM.
2.	Use a do-while loop to repeatedly ask the user to input positive integers until the specified number of values is reached.
3.	Validate each input to ensure it is a positive integer.
4.	Calculate the common denominator of the input numbers.
5.	Determine and display the least common multiple (LCM) of the input numbers.
*/

// Function to find the least common multiple (LCM) of two numbers
	
	
	
int findLCM(int a, int b) {
    int max = (a > b) ? a : b;
    int min = (a < b) ? a : b;

    for (int i = max; ; i += max) {
        if (i % min == 0) {
            return i;
        }
    }
}

int main() {
	
	cout<< "\t====================================================================";
	cout <<"\n\t=\t Name: Bisnar, Quien B. \t Section/ Year: BSIT 1A\t   =";
	cout << "\n\t=\t Date: December 12, 2023\t\t\t\t   =";
	cout<< "\n\t====================================================================";
	cout << "\n\n\n\t--------------------------------------------------------------------"<< endl;
	
    int numValues;

    // Prompt the user to input the number of values
    cout << "\tEnter the number of values for which you want to find the LCM: ";
    cin >> numValues;

    // Find LCM
    int lcm = 1;

    for (int i = 0; i < numValues; ++i) {
        int currentValue;

        
        do {
            cout << "\t\tEnter a positive integer: ";
            cin >> currentValue;

            if (currentValue <= 0) {
                cout << "\t\tInvalid input. Please enter a positive integer.\n";
                
            }
        } while (currentValue <= 0);

        // Calculate the LCM
        lcm = findLCM(lcm, currentValue);
    }

    cout << "\n\n\tLeast Common Multiple (LCM): " << lcm << endl;

    return 0;
}


