#include <iostream>

int main() {
    int numRows, numCols;

    do {
        // Prompt the user to enter the number of rows
        std::cout << "Enter the number of rows (enter 0 to exit): ";
        std::cin >> numRows;

        // Check if the user wants to exit
        if (numRows == 0) {
            std::cout << "Exiting the program. Goodbye!\n";
            break;
        }

        do {
            // Prompt the user to enter the number of columns
            std::cout << "Enter the number of columns: ";
            std::cin >> numCols;

            // Check if the number of columns is valid
            if (numCols <= 0) {
                std::cout << "Please enter a positive number of columns.\n";
            }

        } while (numCols <= 0);

        // Display the rectangular pattern of stars
        for (int i = 0; i < numRows; ++i) {
            for (int j = 0; j < numCols; ++j) {
                std::cout << "* ";
            }
            std::cout << std::endl;
        }

    } while (true);

    return 0;
}

