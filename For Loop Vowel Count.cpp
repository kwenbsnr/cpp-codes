/*Write a program that counts the number of vowels (a, e, i, o, u) in a given string entered by the user.

Here's the outline of the code:

Prompt the user to enter a string.
Read the user's input string.
Initialize a variable to store the count of vowels.
Iterate through each character of the string.
Check if the character is a vowel (either lowercase or uppercase).
If the character is a vowel, increment the count of vowels.
After the loop, print the total count of vowels in the string.
*/


#include <iostream>
using namespace std;

int main() {
    string word;

    cout << "Enter any word: ";
    getline( cin , word);

    int vowels = 0;
    for (char ch : word) {
        // Check if the character is a vowel (both lowercase and uppercase)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
    }

    cout << "The number of vowels in the word \"" << word << "\" is: " << vowels << endl;

    return 0;
}
