#include <iostream>
using namespace std;

int main()
{
	float num1, num2;

	cout << "Input two numbers: ";

	if (cin >> num1)
	{
		if (cin >> num2)
		{
			if (num1 > num2)
			{
				cout << num2 << ", " << num1;
				cout << "\nThe number that has the larger value is " << num1;
				cout << ", while " << num2 << " has the smaller value.";
			}
			else if (num1 < num2)
			{
				cout << num1<< ", " << num2;
				cout << "\nNumber with larger value: " << num2 << endl
					 << "Number with smaller value: " << num1;
			}
			else
			{
				cout << num1 << ", " << num2;
				cout << "\nBoth numbers are equal.";
			}
		}
		else
		//if the input for num2 is invalid.
		{
			cout << "Invalid. Please enter a numeric value." << endl;

			return 1;
		}
	}
	else
	// if the input for num1 is invalid.
	{
		cout << "Invalid. Please enter a numeric value." << endl;
		return 1;
	}

	return 0;
}
