#include <iostream>
using namespace std;

/*write a program using one-dimensional array that will ask you to give a series of numbers and then program will check and display the list of ODD
and EVEN numbers based on the given numbers by the user.*/

int main(){
	
	int numElement;
	
	cout << "\tHow many numbers do you want to input? \n";
	cin >> numElement;
	
	int numbers[numElement];
	
	
	cout << "\tPlease input " <<numElement<<" numbers" <<endl<<endl;
	for (int i=0;i<numElement; ++i){
		cin >> numbers[i];
	}
	cout <<endl << endl;
	
	
	cout << "\tThe ODD numbers are: " << endl;
    for (int i = 0; i < numElement; i++) {
        if (numbers[i] % 2 != 0) { //odd num checker
            cout << numbers[i] << " ";
        }
    }
    cout << endl;

    cout << "\tThe EVEN numbers are:" << endl;
    for (int i = 0; i < numElement; i++) {
        if (numbers[i] % 2 == 0) { // even num checker
            cout << numbers[i] << " ";
        }
    }
    cout << endl;

    return 0;
}

