#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int multiplicationTable[10][10];
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
             multiplicationTable[i][j] = (i + 1) * (j + 1);
        }
    }

     cout << "\t\t********************************************************";
    cout << "\n\t\t\t\tMULTIPLICATION TABLE" <<endl;
    cout << "\t\t********************************************************"<<endl<<endl <<endl;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            cout << setw(8) << multiplicationTable[i][j];
        }
        cout << endl;
    }

    return 0;
}
