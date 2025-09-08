#include <iostream>
using namespace std;


int main(){
	
	int choice;
	double temperature;
	char repeat;
	
	
	do{
		
		cout << "\n\n\n\t------------------------------------------------------------------------------------";
		cout << "\n\t\tHello! What do you want to convert? Please choose in the menu";
		cout << "\n\n\t************************TEMPERATURE CONVERSION MENU*********************************";
		cout <<"\n\t\t 1. Convert from Fahrenheit to Celsius";
		cout << "\n\t\t 2. Convert from Celsius to Fahrenheit";
		cout << "\n\t\t Please enter your choice (1 or 2): ";
		cin >> choice;
		
		if (choice ==1){ // Convert F to C
			cout << "\n\tEnter temperature in Fahrenheit: ";
			cin >> temperature;
			double celsius = (temperature +32) * 9/5 ;
			cout << "\n\tTemperature in Celsius: " << celsius << " C" <<endl;
			
		}else if (choice ==2){ // Convert C to F
		cout << "\n\tEnter temperature in Celsius: ";
		cin >> temperature;
		double fahr = (temperature * 5/9) - 32 ;
		cout << "\n\tTemperature in Fahrenheit: " << fahr << " F" << endl;
		}else {
			cout << "\n\tInvalid choice. Please choose between 1 and 2.";
		}
		
			cout << "\n\tDo you want to perform another conversion? (y/n): ";
			cin >> repeat;
			
		} while  (repeat == 'y' );
	return 0;
	
		
		
	}


