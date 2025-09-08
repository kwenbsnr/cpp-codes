#include<iostream>
using namespace std;

int main(){

    // Declare a 2D array with 2 rows and 4 columns
    int x [2][4];

    // Initialize the elements of the array
    for (int i=0; i<2; i++){
        for (int j=0; j<4; j++){
            if(i == 0) {
                x[i][j] = 1;
            } else {
                x[i][j] = j + 1;
            }
            // Print each element as it is initialized
            cout << x[i][j] << endl;
        }
    }

    // Print the output
    cout << "Output:\n";
    for (int i=0; i<2; i++){
        for (int j=0; j<4; j++){
            cout << x[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}