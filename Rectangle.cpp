#include <iostream>
using namespace std;

int main(){
	
	double width, height;
	char symbol;
	
	
	cout << "Please enter the width of the rectangle: " << endl;
	cin >> width;
	
	cout << "Please enter the height of the rectangle: " <<endl;	
	cin >> height;
	
	cout <<"Enter symbol to be used: "<< endl;
	cin >>symbol;
	
	for (int i=1; i<= height; i++){
		for (int j = 1; j <=width; j++){
			cout << symbol <<" ";
		}
		
		cout<<endl;
	}
	
	return 0;
	
	
}
