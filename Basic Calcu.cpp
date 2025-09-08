#include<iostream>
using namespace std;

int main (){
	

	/* Write a C++ program that acts as a simple calculator. The program should take two numbers and an arithmetic operator as input and perform the corresponding calculation. */
	
	cout<< "\t====================================================================";
	cout <<"\n\t=\t Name: Bisnar, Quien B. \t Section/ Year: BSIT 1A\t   =";
	cout << "\n\t=\t Date: October 26, 2023\t\t\t\t\t   =";
	cout<< "\n\t====================================================================";
	cout << "\n\n\n\n\t--------------------------------------------------------------------";
	
	double num1;
	double num2;
	char operation;
	//ask the user to input 2 numbers
	
	cout<< "\t\t\t\nInput two numbers and the corresponding operation to be used between the two numbers (+, -, *, /): \n";
	cin >> num1 >> operation >> num2;
	
	if (operation == '+'){
		cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
	}
	else if (operation == '-'){
		cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
	}
	else if (operation == '*'){
		cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
	}
	else if (operation == '/' ){
	//	cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;

		if (num2 == 0 ){
			cout << "ERROR: DIVISION BY ZERO\n";
		}
	}
	else {
		cout << "INVALID!";
	}
	
	cout << "\n\n\n\n\t--------------------------------------------------------------------";

	

	

	
	

	return 0;
}
