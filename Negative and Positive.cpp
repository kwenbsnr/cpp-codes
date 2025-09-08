#include <iostream>
#include <limits> //header for input validation
using namespace std;

int main() {
  
    int num[2][3];
    int countPos = 0, countNeg = 0;

    cout << "\tEnter six numbers that are either positive or negative:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            double input; //for decimal nums
           

            // Check if valid
            while (!(cin >> input)) {
                cout << "Invalid input. Please enter a number:" << endl;
                cin.clear(); 
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            }

            num[i][j] = static_cast<int>(input);

           if (num[i][j] > 0) {
                countPos++;
            } else if (num[i][j] < 0) {
                countNeg++;
            }
        }
    }
     cout<< "\n****************************************************" <<endl;
    cout << "\t\tNumber of positive numbers: " << countPos << endl;
    cout << "\t\tNumber of negative numbers: " << countNeg << endl;

    return 0;
}
