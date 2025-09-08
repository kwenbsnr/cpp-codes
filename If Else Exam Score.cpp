#include <iostream>
using namespace std;

int main(){

	double score;

	cout << "Please enter your entrance score: ";
	cin >> score;

	if (score >=90 && score <= 100){
		cout << "Your are eligible to enroll for Information Technology.";
	}
	else if (score >=80 && score <89){
		cout << "You are eligible to enroll for Engineering course.";
	}
	else if (score >=70 && score <=79){
		cout << "You are eligible to enroll for Education.";
	}
	else if (score >=60 && score <=69){
		cout << "You are eligible to enroll for Criminology course.";
	}
	else if (score <60 && score >=0){
		cout << "I recommend you to retake the test or explore other options.";
	}
	else{
		cout << "Please input a valid number.";
	}

	return 0;
}
