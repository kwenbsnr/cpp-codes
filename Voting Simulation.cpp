#include <iostream>
#include <string>
using namespace std;

struct Voter {
    string name;
    int age;
    string address;
    char gender;
};

const int MAX_SK_VOTERS = 100; // Maximum number of SK voters
const int MAX_BARANGAY_OFFICIALS = 50; // Maximum number of Barangay officials

Voter skVoters[MAX_SK_VOTERS];
Voter barangayOfficials[MAX_BARANGAY_OFFICIALS];

int skVoterCount = 0; // Counter for SK voters
int barangayOfficialCount = 0; // Counter for Barangay officials

// Function to register SK voter
void registerSKVoter() {
    Voter newVoter;
    cout << "Enter name: ";
    getline(cin >> ws, newVoter.name);
    cout << "Enter age: ";
    cin >> newVoter.age;
    cout << "Enter address: ";
    getline(cin >> ws, newVoter.address);
    cout << "Enter gender (M/F): ";
    cin >> newVoter.gender;

    // Validate user input
    // Add your validation logic here

    skVoters[skVoterCount++] = newVoter;
    cout << "SK voter registered successfully!\n";
}

// Function to register Barangay official
void registerBarangayOfficial() {
    Voter newOfficial;
    cout << "Enter name: ";
    getline(cin >> ws, newOfficial.name);
    cout << "Enter age: ";
    cin >> newOfficial.age;
    cout << "Enter address: ";
    getline(cin >> ws, newOfficial.address);
    cout << "Enter gender (M/F): ";
    cin >> newOfficial.gender;

    // Validate user input
    // Add your validation logic here

    barangayOfficials[barangayOfficialCount++] = newOfficial;
    cout << "Barangay official registered successfully!\n";
}

// Function to display registered SK voters
void displaySKVoters() {
    cout << "Registered SK Voters:\n";
    for (int i = 0; i < skVoterCount; ++i) {
        cout << "Name: " << skVoters[i].name << ", Age: " << skVoters[i].age << ", Address: " << skVoters[i].address << ", Gender: " << skVoters[i].gender << endl;
    }
}

// Function to display registered Barangay officials
void displayBarangayOfficials() {
    cout << "Registered Barangay Officials:\n";
    for (int i = 0; i < barangayOfficialCount; ++i) {
        cout << "Name: " << barangayOfficials[i].name << ", Age: " << barangayOfficials[i].age << ", Address: " << barangayOfficials[i].address << ", Gender: " << barangayOfficials[i].gender << endl;
    }
}

int main() {
    int choice;
    do {
        cout << "\nVoter Registration System Menu\n";
        cout << "1. Register SK Voter\n";
        cout << "2. Register Barangay Official\n";
        cout << "3. Display Registered SK Voters\n";
        cout << "4. Display Registered Barangay Officials\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                registerSKVoter();
                break;
            case 2:
                registerBarangayOfficial();
                break;
            case 3:
                displaySKVoters();
                break;
            case 4:
                displayBarangayOfficials();
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
