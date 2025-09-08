#include <iostream>
#include <string>  // Include string for std::string
using namespace std;

class employee {
protected:
    string name;
    int number;

public:
    // Parameterized constructor for employee
    employee(string nm, int num) {
        name = nm;
        number = num;
        cout << "employee: parameterized constructor" << endl;
    }
    
    // Default constructor for employee
    employee() {
        name = "Unknown";
        number = 0;
        cout << "employee: default constructor" << endl;
    }
};

// Derived class manager
class manager : public employee {
private:
    string title;
    double club_dues;

public:
    // Use member initializer list to call base class constructor
    manager(string nm) : employee(nm, 0) {  // 0 is a placeholder for `number`
        cout << "manager: parameterized constructor" << endl;
    }
};

// Derived class scientist
class scientist : public employee {
private:
    string publications;

public:
    // Use member initializer list to call base class constructor
    scientist(string nm) : employee(nm, 0) {  // 0 is a placeholder for `number`
        cout << "scientist: parameterized constructor" << endl;
    }
};

// Derived class laborer
class laborer : public employee {
public:
    // Use member initializer list to call base class constructor
    laborer(string nm) : employee(nm, 0) {  // 0 is a placeholder for `number`
        cout << "laborer: parameterized constructor" << endl;
    }
};

int main() {
    manager m("Mariel");
    scientist s("Dr. Smith");
    laborer l("John");

    return 0;
}







/*#include <iostream>
#include <string>
using namespace std;

class employee{
	
	protected:
		string name;
		int number;
		
	public:
		employee(string b) {
			cout << "employee: default" << endl;
		}
};

class manager: public employee{
	
	private:
		string title;
		double club_dues;
	public:
		employee ( "Mariel") {
			cout << manager <<endl;
		}		
};

class scientist: public employee{
	
	private:
		string publications;
};

class laborer: public employee {};
*/