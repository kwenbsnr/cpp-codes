#include <iostream>
using namespace std;

int main(){
	/*Create a program that helps calculate the time taken by friends to complete a marathon based on individual running paces.

	The program should:

		*Ask for the marathon distance in km and the number of participating friends.
		*For each friend, input their running pace in km/h.
		*Calculate and display the time each friend will take to finish the marathon based on their respective running paces.

		Implement this program in C++ to prompt users for necessary details and provide the time taken by each friend to complete the marathon.*/



	int distance;
	cout << "Enter the distance of the marathon (in km): \n";
	cin >> distance;

	int friends; //Number of friends participating in the marathon
	cout << "\nEnter the number of friends participating in the marathon: \n\n";
	cin >> friends;

	int num=1;
	int runpace;
	while (num <= friends) {
		double pace;
	cout << "\nEnter running pace in km/h for friend " << num << ": "<<endl;
	cin >> pace;

	double time = distance / pace;
	cout << " \nFriend " << num << " will take " << time << " hours to complete the marathon " << endl;

	num++;
	}



	return 0;
}
