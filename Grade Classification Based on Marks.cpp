#include <iostream>
using namespace std;
int main() {
    int subjects;
    float marks;
    cout << "Enter the total number of subjects: ";
    cin >> subjects;

    for (int i = 1; i <= subjects; i++) {
        cout << "Enter marks for subject " << i << " (out of 100): ";
        cin >> marks;

        if (marks >= 90) {
            cout << "Grade for subject " << i << ": A" << endl;
        } else if (marks >= 75) {
            cout << "Grade for subject " << i << ": B" << endl;
        } else if (marks >= 50) {
            cout << "Grade for subject " << i << ": C" << endl;
        } else {
            cout << "Grade for subject " << i << ": F" << endl;
        }
    }

    return 0;
}
