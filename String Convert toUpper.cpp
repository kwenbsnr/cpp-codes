#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/*Design a program that will ask the user to give string in uppercase and then the program will convert the given string into lowercase 
or the given string is lowercase then the program will convert it to uppercase format.*/

int main(){
	
	string string;
	
	cout << "Enter string: ";
	getline(cin, string);
	
	bool Upper = false;
	bool Lower = false;
	
	for (char& c : string){
		if (isupper (c)){
			Upper = true;
			
			c = tolower(c);
		}
	else if (islower(c)){
		Lower = true;
		c = toupper(c);
	    }
	}
    
    if (Upper && !Lower){
    	cout << "Converted string: " << string << endl;
    	
	}
	
	else if ( !Upper && Lower){ 
		cout << "Converted string: " << string << endl; 
	}
	else {
		cout << "Invalid input. Please enter a string in uppercase or lowercase." << endl;
		}
    
    return 0;
    
    
}