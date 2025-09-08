#include <iostream>
#include <string>

using namespace std;

int main() {
    string Strinput, Stroutput;

    // Prompt da user to input a string 
    cout << "\n\t\tEnter a string: ";
    getline(cin, Strinput);

    // Remove vowels from the input string
    for (char ch : Strinput) {
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            Stroutput += ch;
        }
    }

    cout << "\n\t\tResult after removing all the vowels: " << Stroutput << endl;

    return 0;
}
