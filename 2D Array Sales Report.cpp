#include <iostream>
#include <iomanip> // For setw
#include <string>
#include <limits> // For numeric limits

const int mnths = 12;

/*Write a program using a two-dimensional array that creates the sales report from January to December in 
Allie Pomperada Marketing Incorporated. Determine the highest and lowest month of sales.*/

int main() {
    std::string months[mnths] = { //array para store sa months
        "January", "February", "March", "April", "May", "June", 
        "July", "August", "September", "October", "November", "December"
    };

    double sales[mnths][2]; //para sales and expenses ni sya nga array
    double salesTotal = 0;
    double totalExpenses = 0;
    int highestmonth = 0;
    int lowestmonth = 0;
	
	std:: cout << "                   ==============================================================\n";
	std:: cout <<"\n                                  SALES REPORT GENERATOR SYSTEM\n";
	std:: cout << "                   ==============================================================";
   
    for (int i = 0; i < mnths; ++i) {
        std::cout << "\n\nEnter sales for " << months[i] << ": ";
        while (!(std::cin >> sales[i][0]) || sales[i][0] < 0) {
            std::cout << "\tInvalid input. Please enter a valid sales amount: ";
            std::cin.clear(); 
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
        }

        std::cout << "Enter expenses for " << months[i] << ": ";
        while (!(std::cin >> sales[i][1]) || sales[i][1] < 0) {
            std::cout << "\tInvalid input. Please enter a valid expenses amount: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
        }

        salesTotal += sales[i][0];
        totalExpenses += sales[i][1];

        if (sales[i][0] > sales[highestmonth][0]) {
            highestmonth = i;
        }
        if (sales[i][0] < sales[lowestmonth][0]) {
            lowestmonth = i;
        }
    }

    double profitLoss = salesTotal - totalExpenses;

    // output
    std::cout << "\n\n------------------------------------------------------\n";
    std::cout << "   Allie Pomperada Marketing Incorporated\n";
    std::cout << "               Income Statement\n";
    std::cout << "          For the year ended December 2022\n";
    std::cout << "------------------------------------------------------\n";
    std::cout << std::setw(12) << "Month" << std::setw(14) << "  Sales" << std::setw(15) << "  Expenses" << std::endl;
    std::cout << "------------------------------------------------------\n";
    for (int i = 0; i < mnths; ++i) {
        std::cout << std::setw(12) << months[i] << std::setw(12) << "P " << sales[i][0] << std::setw(12) << "P " << sales[i][1] << std::endl;
    }
    std::cout << "------------------------------------------------------\n\n";
    std::cout << "TOTAL SALES " << std::setw(11) << "P " << salesTotal << std::endl;
    std::cout << "TOTAL EXPENSES " << std::setw(8) << "P " << totalExpenses << std::endl;
    std::cout << "GAINS/LOSSES " << std::setw(10) << "P " << profitLoss << std::endl<< std:: endl;
    std::cout << "Highest Sales Month: " << months[highestmonth] << std::endl;
    std::cout << "Lowest Sales Month: " << months[lowestmonth] << std::endl;

    return 0;
}
