#include <iostream>
#include <string>

using namespace std;

const int MAX_STUDENTS = 100; // Maximum number of students
const int MAX_SUBJECTS = 5;   // Maximum number of subjects

string studentNames[MAX_STUDENTS];
int studentYearLevels[MAX_STUDENTS];
string studentDepartments[MAX_STUDENTS];
double studentGrades[MAX_STUDENTS][MAX_SUBJECTS]; // 2D array to store grades for each student

int numStudents = 0; // Current number of students

// Function to add a new student to the system
void addStudent() {
    if (numStudents >= MAX_STUDENTS) {
        cout << "Cannot add more students. Maximum limit reached." << endl;
        return;
    }

    cout << "Enter student name: ";
    cin >> studentNames[numStudents];
    cout << "Enter student year level: ";
    cin >> studentYearLevels[numStudents];
    cout << "Enter student department: ";
    cin >> studentDepartments[numStudents];
    cout << "Student added successfully!" << endl;

    numStudents++;
}

// Function to record academic performance (grades) for a student
void recordGrades() {
    string studentName;
    cout << "Enter student name: ";
    cin >> studentName;

    // Search for the student
    int studentIndex = -1;
    for (int i = 0; i < numStudents; ++i) {
        if (studentNames[i] == studentName) {
            studentIndex = i;
            break;
        }
    }

    if (studentIndex != -1) {
        cout << "Enter grades for " << MAX_SUBJECTS << " subjects:" << endl;
        for (int j = 0; j < MAX_SUBJECTS; ++j) {
            cout << "Enter grade for subject " << j + 1 << ": ";
            cin >> studentGrades[studentIndex][j];
        }
        cout << "Grades recorded successfully!" << endl;
    } else {
        cout << "Student not found!" << endl;
    }
}

// Function to calculate average grades for a student
void calculateAverageGrade() {
    string studentName;
    cout << "Enter student name: ";
    cin >> studentName;

    // Search for the student
    int studentIndex = -1;
    for (int i = 0; i < numStudents; ++i) {
        if (studentNames[i] == studentName) {
            studentIndex = i;
            break;
        }
    }

    if (studentIndex != -1) {
        double total = 0.0;
        for (int j = 0; j < MAX_SUBJECTS; ++j) {
            total += studentGrades[studentIndex][j];
        }
        double average = total / MAX_SUBJECTS;
        cout << "Average grade for " << studentName << " is: " << average << endl;
    } else {
        cout << "Student not found!" << endl;
    }
}

// Function to display student details
void displayStudentDetails() {
    for (int i = 0; i < numStudents; ++i) {
        cout << "Name: " << studentNames[i] << endl;
        cout << "Year Level: " << studentYearLevels[i] << endl;
        cout << "Department: " << studentDepartments[i] << endl;
        cout << "Grades:" << endl;
        for (int j = 0; j < MAX_SUBJECTS; ++j) {
            cout << "Subject " << j + 1 << ": " << studentGrades[i][j] << endl;
        }
        cout << endl;
    }
}

int main() {
    int choice;
    do {
        cout << "Menu:\n1. Add new student\n2. Record grades\n3. Calculate average grade\n4. Display student details\n5. Exit\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                recordGrades();
                break;
            case 3:
                calculateAverageGrade();
                break;
            case 4:
                displayStudentDetails();
                break;
            case 5:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}