#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    // Prompt the user to enter the number of items
    cout << "Enter the number of items to be processed: ";
    cin >> n;

    int arr[n];


    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    
    cout << "Original arrangement of numbers: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubbleSort(arr, n);

    cout << "Sorted arrangement of numbers: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
