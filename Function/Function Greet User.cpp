#include <iostream>
using namespace std;

/*create a simple program that takes a user's name as input and then greets the user using a void function. Here are the steps:

Define a void function named greet User that takes a string parameter for the user's name.
Inside the function, print a greeting message to the console, addressing the user by name.
In the main function, prompt the user to enter their name.
Read the user's name from the input.
Call the greetUser function with the user's name as an argument.*/

void greetUser (string name){
	
	cout<<"Hello " << name <<"! Welcome to this program!";
}

int main (){
	string name;
	
	cout <<endl<<"Enter your name: " <<endl;
	getline (cin,name);
	
	greetUser(name);
	return 0;
	
	
}
