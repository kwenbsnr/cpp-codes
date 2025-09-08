#include <iostream>

int main() {
    // Example: Displaying grades of students using a do-while loop
    int grade;

    do {
        // Prompt the user to enter the grade for the current student
        std::cout << "Enter a grade (or enter 0 to exit): ";
        std::cin >> grade;

        // Check if the user wants to exit
        if (grade == 0) {
            std::cout << "Exiting the program. Goodbye!\n";
        } else {
            // Display the entered grade along with a letter grade
            std::cout << "Grade: " << grade;

            // Display a letter grade based on the numerical grade
            if (grade >= 90) {
                std::cout << " (A)";
            } else if (grade >= 80) {
                std::cout << " (B)";
            } else if (grade >= 70) {
                std::cout << " (C)";
            } else if (grade >= 60) {
                std::cout << " (D)";
            } else {
                std::cout << " (F)";
            }

            std::cout << std::endl;
        }

    } while (grade != 0);

    return 0;
}

