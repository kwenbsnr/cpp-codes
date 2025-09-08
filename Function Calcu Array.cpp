#include <iostream>
using namespace std;

int Sum(int* array, int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum;
}

double Avee(int* array, int size) {
    int sum = Sum(array, size);
    return (double)sum / size;
}

int main() {
    int size;
    cout <<endl;
    cout << "\t\tEnter the size of the array: "<<endl;
    cin >> size;

    int* array = new int[size];
    cout << "\t\tEnter the elements of the array: "<<endl;
    for(int i = 0; i < size; i++) {
        cin >> array[i];
    }

    int sum = Sum(array, size);
    double avg = Avee(array, size);

    cout << "The sum is: " << sum << endl;
    cout << "The average is: " << avg << endl;

    return 0;
}