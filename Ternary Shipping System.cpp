#include <iostream>
using namespace std;

/* Write a C++ program that calculates tye shipping cost for an order based on the order's total value and destination*/

int main (){

	cout << "Good day clients. Please fill out  the following and please be guided. \n";

	cout << "\nFor orders with total value LESS THAN P500: \n";
	cout << "Shipping to the USA costs P500.\nShipping to Canada costs P1,000.\nShipping to all other countries costs P1,500.\n";

	cout << "\nFor orders with a TOTAL VALUE OF P500 OR MORE: \n";
	cout << "Shipping to the USA is free.\nShipping to Canada costs P5,000.\nShipping to all other countries costs P10,000. \n";

	double value;

	cout << "\nPlease input the order's total value (in Peso): \n ";
	cin >> value;
	cout << "\n";

	string country;

	cout << "Please input the destination country: \n";
	cin >> country;
	cout << endl;


	 string message = (value > 500) ? (country == "USA" ? "Your shipping fee is free."

               : (country == "Canada" ? "Your shipping costs P5,000."
               : "Your shipping costs P10,000."))
               : (value < 500) ? (country == "USA" ? "Your shipping costs P500."
               : (country == "Canada" ? "Your shipping costs P1,000."
               : "Your shipping costs P1,500."))
               : "Invalid input.";

	cout << message << endl;
	return 0;
}

