#include <iostream>
using namespace std;

int main() {
    int limit;

    cout << "Enter multiplication table limit: ";
    cin >> limit;

    for (int number = 1; number <= limit; number++) {
        cout << "Table for " << number << endl;
        for (int i = 1; i <= limit; i++) {
            int result = number * i;
            cout << number << " * " << i << " = " << result << endl;
        }
        cout << endl; 
    }

    return 0;
}
