#include <iostream>
using namespace std;

int main()
{

    int speedLimit;

    // Prompt the user to input speed limit
    cout << "\n\n\t\tInput your driving speed: ";
    cin >> speedLimit;

    cout << "\t\t******************************************";

    switch (speedLimit)
    {
        case 1 ... 9:
            cout << "\n\n\t\tYou were lucky.";
            break;
        case 10 ... 19:
            cout << "\n\n\t\tPayable fine: P400";
            break;
        case 20 ... 29:
            cout << "\n\n\t\tPayable fine: P800";
            break;
        case 30 ... 39:
            cout << "\n\n\t\tPayable fine: P1,000";
            break;
        case 40 ... INT_MAX:
            cout << "\n\n\t\tHand over your driver's license!";
            break;
        default:
            cout << "\n\n\tPlease input valid numbers.";
            break;
    }

	cout << "\n\n\t\t******************************************";

    return 0;
}
