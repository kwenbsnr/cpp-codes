#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/*Write a C++ program for a simple "Guess the Number" game.
The program should generate a random number between 1 and 100, and the user needs to guess that number.
After each guess, the program should provide feedback whether the guess is too high, too low, or correct.
The game should continue until the user correctly guesses the number. */

int main(){
    
    int num;
    int guess;
    int tries = 0; // Initialize tries to 0
    
    srand(time(NULL));
    
    num = (rand() % 100) + 1;
    
    do {
        
        cout << "Enter a guess between (1-100): ";
        cin >> guess;
        tries++;
        
        if(guess > num){
            cout << "Too high!\n";
        }
        else if(guess < num){
            cout << "Too low!\n";
        }
        else {
            cout << "CORRECT! # of tries: " << tries << '\n';
        }
        
    } while(guess != num);
    
    cout << "\nThe secret number was: " << num << endl;
    
    return 0;
}

