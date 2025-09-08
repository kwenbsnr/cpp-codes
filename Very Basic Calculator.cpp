

#include<iostream>
using namespace std;

int main (){

	/* Create a c++ program that simulates a basic calcu. The program should take user input for 2 numeric values and perform various arithmetic operations.*/



	char operation;
	int num1;
	int num2;

	cout<<"enter the 1st number"<<endl;
	cin>>num1;
	cout<<"enter the 2nd number"<< endl;
	cin>>num2;

	cout << " Enter operation: (+, -, /, *)\n";
	cin >> operation;

	//

	switch(operation){
		case '+':
		cout << num1<< "+" << num2 << "=" << num1+num2 << endl;
			break;

		case '-':
		cout << num1<< "-" << num2 << "=" << num1-num2 << endl;
		break;

		case  '*':
		cout << num1<< "*" << num2 << "=" << num1*num2 << endl;
		break;

		case  '/':
		cout << num1<< "/" << num2 << "=" << num1/num2 << endl;
		cout << "Remainder: " << num1 % num2 << endl;
		break;

		default:
			cout << " Error!!!" << endl;

}
	return 0;



}
