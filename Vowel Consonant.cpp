#include <iostream>
using namespace std;

int main(){
	
	char c;
	bool LowercaseVowel, UppercaseVowel;
	
	cout << "Enter an alphabet: ";
	cin >> c;
	
	LowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ? true : false;
    UppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') ? true : false;

    cout << (!isalpha(c) ? "Error! Non-alphabetic character." : (LowercaseVowel || UppercaseVowel) ? (string(1, c) + " is a vowel.") : (string(1, c) + " is a consonant."));

    return 0;
}
	
