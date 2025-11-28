#include <iostream>

// Function to calculate the greatest common divisor (GCD) using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate the least common multiple (LCM)
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    // Step 1: Prompt the user to input the number of values
    int numValues;
    std::cout << "Enter the number of values: ";
    std::cin >> numValues;

    // Step 2: Use a do-while loop for input validation
    int commonDenominator = 1;
    int inputValue;
    int count = 0;
    
    do {
        std::cout << "Enter a positive integer: ";
        if (std::cin >> inputValue && inputValue > 0) {
            // Step 3: Validate each input
            commonDenominator = lcm(commonDenominator, inputValue);
            count++;
        } else {
            // Handle invalid input
            std::cout << "Invalid input. Please enter a positive integer.\n";
            std::cin.clear(); // Clear error flag
           
        }
    } while (count < numValues);

    // Step 4: Display common denominator
    std::cout << "Common Denominator: " << commonDenominator << std::endl;

    // Step 5: Calculate and display LCM
    int result = commonDenominator;
    for (int i = 1; i <= numValues; ++i) {
        result = lcm(result, i);
    }

    std::cout << "Least Common Multiple (LCM): " << result << std::endl;

    return 0;
}
