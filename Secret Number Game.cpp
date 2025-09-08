#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main (){
	

	/* Create a C++ program that allows users to play a "Guess the Secret Number" game. 
	The program should require users to guess a number (predetermined or randomly generated) 
	secret number within a limited number of attempts using a while loop.  */
	
	
	
	
	cout<< "\n\n\t       _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_";
	cout<< "\n\t     _-_-\t\t\t\t\t\t\t  _-_-";
	cout << "\n\t   _-_-              \033[0;30;47mGUESS THE SECRET NUMBER GAME\033[0m               _-_-"; //sets the text to black with a white background 
	cout<< "\n\t _-_-\t\t\t\t\t\t\t      _-_-";
	cout<< "\n\t_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n\n";
	
	int num;
    int guess;
    int tries = 0; 
    
    srand(time(NULL));
    
    num = (rand() % 100) + 1;
	
	
	
    cout << "\t\t\tEnter a guess between (1-100): ";
    cin >> guess;
    tries++;

    while (guess != num) {
        if (guess > num) {
        	cout << "\t\t\t\t====================================";
            cout << "\n\t\t\t\t\033[3m=      Your guess is too high!     =\n"; //sets the text to italic format
            cout << "\t\t\t\t====================================\n\n\n";
            
        } else if (guess < num) {
            cout << "\t\t\t\t====================================";
            cout << "\n\t\t\t\t\033[3m=      Your guess is too low!      =\n";
            cout << "\t\t\t\t====================================\n\n\n";
        }

        cout << "\t\t\tEnter a guess between (1-100): ";
        cin >> guess;
        tries++;
    }
	
	cout <<"\t\t\t**********************************************************************************************";
    cout << "\n\t\t\tCongratulations! You have successfully earned the opportunity to claim 500 pesos for your correct answer."; //rewards the user with a cash prize regardless of the number of attempts
    cout << "\n\t\t\tNumber of tries:" << tries << '\n';
    cout <<"\t\t\t**********************************************************************************************";

    return 0;
}

	
	
