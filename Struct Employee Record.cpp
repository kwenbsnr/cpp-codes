#include <iostream>
#include <string>
#include <limits>

using namespace std;


struct Employee {
    string name;
    int age;
    double salary[12]; 
    double totalAnnualSalary;
    string designation;
};

void inputEmployeeData(Employee* emp);
void calculateTotalAnnualSalary(Employee* emp);
void displayEmployeeData(const Employee* emp);
double calculateGrandTotalSalary(const Employee* employees, int numEmployees);

int main() {
	cout << system ("color 3");
    const int numEmployees = 3;
    Employee employees[numEmployees];

 
    for (int i = 0; i < numEmployees; ++i) {
    	    	cout<<endl<< "\t--------------------------------------------------------------\n\n";   

        cout << "\t\t    Enter details for employee " << i + 1 << ":\n";
        inputEmployeeData(&employees[i]);
        calculateTotalAnnualSalary(&employees[i]);
        cout << endl;
    }

    // Display 
    for (int i = 0; i < numEmployees; ++i) {
        displayEmployeeData(&employees[i]);
        cout << endl;
    }

    double grandTotalSalary = calculateGrandTotalSalary(employees, numEmployees);
    cout<<endl<< "\t==============================================================\n";   
    cout << endl<<"\t\tGRAND TOTAL SALARY OF EMPLOYEES: P" << grandTotalSalary << endl;

    return 0;
}

// User prompt
void inputEmployeeData(Employee* emp) {
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer
    cout << "\t\tName: ";
    getline(cin, emp->name);

    cout << "\t\tAge: ";
    while (!(cin >> emp->age) || emp->age < 25 || emp->age > 60) {
        cout << "\t\t   Invalid age. Please enter an age between 25 and 60: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer
    cout << "\t\tDesignation: ";
    getline(cin, emp->designation);

    cout <<endl<<endl << "\t\tEnter monthly salary for each month:\n"<<endl;
    for (int i = 0; i < 12; ++i) {
        cout << "\t\tMonth " << i + 1 << ": \n";
        while (!(cin >> emp->salary[i]) || emp->salary[i] < 0) {
            cout << "\t\t   Invalid salary. Please enter a non-negative value: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}

void calculateTotalAnnualSalary(Employee* emp) {
    emp->totalAnnualSalary = 0;
    for (int i = 0; i < 12; ++i) {
        emp->totalAnnualSalary += emp->salary[i];
    }
}

//output
void displayEmployeeData(const Employee* emp) {

    cout <<endl<<endl<< "\t*****************************************************************************************" ;

    cout <<endl<< "\t\t\t\t\tEMPLOYEE DETAILS\n"  <<endl<<endl;
    cout << "\t\tName: " << emp->name << endl;
    cout << "\t\tAge: " << emp->age << endl;
    cout << "\t\tDesignation: " << emp->designation << endl;
    cout <<  "\t\tMonthly Salaries: ";
    for (int i = 0; i < 12; ++i) {
        cout <<endl << endl<< "\t\t Month " << i + 1 << ": P" << emp->salary[i] << " \n";
    }
    cout << endl;
    cout << endl << "\t\tTotal Annual Salary: P" << emp->totalAnnualSalary << endl;
}

double calculateGrandTotalSalary(const Employee* employees, int numEmployees) {
    double grandTotal = 0;
    for (int i = 0; i < numEmployees; ++i) {
        grandTotal += employees[i].totalAnnualSalary;
    }
    return grandTotal;
}

