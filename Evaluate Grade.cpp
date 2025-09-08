#include <iostream>
using namespace std;

int main() {
    const int students = 1;

    int subs;
    cout << "Enter the number of subjects: ";
    cin >> subs;

    double grades[students][subs];

    cout << "Enter grades for " << subs << " subjects:" << endl<< endl;
    for (int s = 0; s < subs; ++s) {
        cout << "Subject " << s + 1 << ":\n";
        for (int i = 0; i < students; ++i) {
            cin >> grades[i][s];
        }
    }

    int gradE[] = {90, 80, 70};
    char gradelttr[] = {'A', 'B', 'C', 'F'};

    for (int s = 0; s < subs; ++s) {
        cout << "\n";
        for (int i = 0; i < students; ++i) {
            cout << "Subject " << s+1<< " Grade:   " << grades[i][s];

            if (grades[i][s] >= 0 && grades[i][s] <= 100) {
                char lettgrde = 'F';
                for (int k = 0; k < sizeof(gradE) / sizeof(int); ++k) {
                    if (grades[i][s] >= gradE[k]) {
                        lettgrde = gradelttr[k];
                        break;
                    }
                }
                cout << "\t" << lettgrde ;
                
                /*A-Excellent- 100–90% 
			      B Good- 89–80% 
				  C Fair-  79–70% 
				  F Failing-64 and below.*/

                if (lettgrde == 'A' || lettgrde == 'B' || lettgrde == 'C') {
                    cout << " PASSED" << endl;
                } else if (lettgrde == 'F') {
                    cout << " FAILED" << endl;
                }
            } else {
                cout << "  OUT OF RANGE" << endl;
            }
        }
    }

    return 0;
}
