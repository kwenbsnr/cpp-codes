#include <iostream>
using namespace std;

int main() {
    int n;

    // Input the number of terms
    cout << "Enter the number of terms in Fibonacci sequence: ";
    cin >> n;

    // Validate input
    n = (n < 0) ? 0 : n;  // Ensure a non-negative value

    // Calculate and display Fibonacci sequence
    int term1 = 0, term2 = 1, nextTerm, i = 1;

    cout << "Fibonacci Sequence: ";
    while (i <= n) {
        cout << term1 << " ";

        nextTerm = (i++ > 1) ? (term1 + term2) : term2;
        term1 = term2;
        term2 = nextTerm;
    }

    cout << endl;

    return 0;
}

