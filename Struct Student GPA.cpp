#include <iostream>
#include <string>
#include <limits>

using namespace std;

struct student {
    string name;
    int age;
    string major;
    string subjects[5];
    double grades[5];
    double gpa;
};

// calcu GPA
double calculateGPA(double grades[], int numGrades) {
    double total = 0;
    for (int i = 0; i < numGrades; ++i) {
        total += grades[i];
    }
    return total / numGrades;
}


int main() {
	
	cout << system ("color 6")<<endl<<endl;
    const int numStudents = 3;
    const int numSubjects = 5;
    student students[numStudents];

    for (int i = 0; i < numStudents; ++i) {
    	cout<<endl<< "\t--------------------------------------------------------------\n";   
		cout << "\t\t\tInput details for student " << i + 1 << "\n" <<endl<<endl;

        cout <<endl<< "\t\tName: ";
        getline(cin, students[i].name);

        cout << "\t\tAge: ";
        cin >> students[i].age;

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer again
        cout << "\t\tDepartment: ";
        getline(cin, students[i].major);

        for (int j = 0; j < numSubjects; ++j) {
            cout <<endl<<endl <<"\t\tEnter the name of subject " << j + 1 << ": ";
            getline(cin, students[i].subjects[j]);

            double grade;
            cout << "\t\tEnter the grade for " << students[i].subjects[j] << ": ";
            while (true) {
                cin >> grade;
                if (grade >= 75 && grade <= 99) {
                    students[i].grades[j] = grade;
                    break;
                } else {
                    cout << "\t\tInvalid grade. Please enter a grade between 75 and 99: ";
                }
            }

            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer for the next subject name
        }

        students[i].gpa = calculateGPA(students[i].grades, numSubjects);
        cout << endl;
    }

		// output
        cout <<endl<<endl<< "\t*************************************************************************************\n";

    for (int i = 0; i < numStudents; ++i) {
        cout <<endl<<endl << "\t\tDetails for student " << i + 1 << ":\n";
        cout << "\t\tName: " << students[i].name << endl;
        cout << "\t\tAge: " << students[i].age << endl;
        cout << "\t\tDepartment: " << students[i].major << endl;
        cout << "\t\tSubjects and Grades: \n";
        for (int j = 0; j < numSubjects; ++j) {
            cout << "\t\t  " << students[i].subjects[j] << ": " << students[i].grades[j] << endl;
        }
        cout << "\t\tGPA: " << students[i].gpa << endl << endl;
    }

    return 0;
}

