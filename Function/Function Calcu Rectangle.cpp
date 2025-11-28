/*create a simple program that calculates the area and perimeter of a rectangle using a void function. Here are the steps:

Define a void function named calculateRectangle that takes the length and width of a rectangle as parameters.
Inside the function, calculate the area and perimeter of the rectangle.
Print out the calculated area and perimeter within the function.
In the main function, prompt the user to enter the length and width of the rectangle.
Call the calculateRectangle function with the user-provided length and width as arguments.*/
#include <iostream>
using namespace std;


void calculateRectangle (double length, double width){
	double Area = length * width ;
	double Perimeter = 2 *(length + width);
	
	cout << endl <<"The area of the rectangle is: " << Area << " units" <<endl << endl;
	cout << "The perimeter of the rectangle is: " << Perimeter << " square units" << endl <<endl ;
}

int main(){
	
	double length; 
	double width;
	
	cout <<"Enter the length of the rectangle: " << endl;
	cin >> length;
	
	cout <<"Enter the width of the rectangle: " << endl;
	cin >> width;
	
	calculateRectangle (length, width);
	
	return 0;
	
}


