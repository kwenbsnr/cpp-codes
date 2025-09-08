#include <iostream>
#include <string>
#include <sstream> 

using namespace std;

const int MAX_SK_VOTERS = 10;
const int MAX_BARANGAY_OFFICIALS = 10;

struct Voter {
    string name;
    int age;
    string address;
    string gender;
};


void registerSKVoter(Voter skVoters[], int& skCount) {
    if (skCount < MAX_SK_VOTERS) {
        cout << "\n\nEnter voter details\n";
        cout << "\nName: ";
        getline(cin, skVoters[skCount].name);
        
        while (true) {
            string input;
            cout << "Age: ";
            getline(cin, input);
            stringstream ageStream(input);
            if (ageStream >> skVoters[skCount].age && skVoters[skCount].age >= 18 && skVoters[skCount].age <= 100) {
                break; 
            } else {
                cout << "Invalid age. Please enter a number between 18 and 100.\n";
            }
        }
        
        cout << "Address: ";
        getline(cin, skVoters[skCount].address);
        cout << "Gender: ";
        getline(cin, skVoters[skCount].gender);

        skCount++;
        cout << "\nVoter registered successfully." << endl;
    } else {
        cout << "Maximum number of SK voters reached.\n";
    }
}


void registerBarangayOfficial(Voter barangayOfficials[], int& officialCount) {
    if (officialCount < MAX_BARANGAY_OFFICIALS) {
        cout << "\n\nEnter official details\n";
        cout << "\nName: ";
        getline(cin, barangayOfficials[officialCount].name);
        
  
        while (true) {
            string input;
            cout << "Age: ";
            getline(cin, input);
            stringstream ageStream(input);
            if (ageStream >> barangayOfficials[officialCount].age && barangayOfficials[officialCount].age >= 20 && barangayOfficials[officialCount].age <= 100) {
                break; // Valid age input
            } else {
                cout << "Invalid age. Please enter a number between 20 and 100.\n";
            }
        }

        cout << "Address: ";
        getline(cin, barangayOfficials[officialCount].address);
        cout << "Gender: ";
        getline(cin, barangayOfficials[officialCount].gender);

        officialCount++;
        cout << "\nOfficial registered successfully." << endl;
    } else {
        cout << "Maximum number of Barangay officials reached.\n";
    }
}


void displaySKVoters(Voter skVoters[], int skCount) {
    cout << "Registered SK Voters:\n";
    cout << "----------------------------------------" << endl;
    for (int i = 0; i < skCount; ++i) {
        cout << "Name: " << skVoters[i].name << endl;
        cout << "Age: " << skVoters[i].age << endl;
        cout << "Address: " << skVoters[i].address << endl;
        cout << "Gender: " << skVoters[i].gender << endl << endl;
    }
}

void displayBarangayOfficials(Voter barangayOfficials[], int officialCount) {
    cout << "Registered Barangay Officials:\n";
    cout << "----------------------------------------" << endl;
    for (int i = 0; i < officialCount; ++i) {
        cout << "Name: " << barangayOfficials[i].name << endl;
        cout << "Age: " << barangayOfficials[i].age << endl;
        cout << "Address: " << barangayOfficials[i].address << endl;
        cout << "Gender: " << barangayOfficials[i].gender << endl << endl;
    }
}

// Main function
int main() {
    Voter skVoters[MAX_SK_VOTERS];
    Voter barangayOfficials[MAX_BARANGAY_OFFICIALS];

    int skCount = 0;
    int officialCount = 0;

    int choice;
    do {
        cout << "\nVoter Registration System\n";
        cout << "\n1. Register SK Voter\n";
        cout << "2. Register Barangay Official\n";
        cout << "3. Display Registered SK Voters\n";
        cout << "4. Display Registered Barangay Officials\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice) {
            case 1:
                registerSKVoter(skVoters, skCount);
                break;
            case 2:
                registerBarangayOfficial(barangayOfficials, officialCount);
                break;
            case 3:
                displaySKVoters(skVoters, skCount);
                break;
            case 4:
                displayBarangayOfficials(barangayOfficials, officialCount);
                break;
            case 5:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
