#include <iostream>
using namespace std;

int main(){
	
	int carNum;
	
	cout << "How many cars do you have? " <<endl;
	cin >>carNum;
	
	string* cars = new string [carNum];
	
	for (int i=0; i<carNum; i++){
		cout <<"\nEnter car number " << i+1<< ": \n";
		cin >> 	cars[i];
	}
	
	for (int i=0; i<carNum; i++){
	cout <<"\nCar number " << i+1<< ": \n";
	cout <<cars[i];

	}
	
	
	/*#include <iostream>
using namespace std;

int main(){
    
    int carNum;
    
    cout << "How many cars do you have? " <<endl;
    cin >> carNum;
    
    if (carNum < 0) {
        cout << "Error: Number of cars cannot be negative." << endl;
        return 1;  // return a non-zero value to indicate an error
    }
    
    string* cars = new string[carNum];
    
    for (int i=0; i<carNum; i++){
        cout <<"Enter car number " << i+1<< ": \n";
        cin >> cars[i];
    }
    
    for (int i=0; i<carNum; i++){
        cout <<"Car number " << i+1<< ": " << cars[i] << "\n";
    }

    delete[] cars;
    
    return 0;
}*/
	
	
	
	
}