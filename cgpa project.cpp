#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

// Calculate CGPA
double calculateCGPA(const vector<double>& marks) {

    double sum = 0;

    for (int i = 0; i < marks.size(); i++) {
        sum += marks[i] / 10.0;
    }

    return sum / marks.size();
}

int main() {

    int n;

    cout << "\n===== CGPA CALCULATOR =====\n";

    // Input number of subjects
    cout << "Enter number of subjects: ";
    cin >> n;

    while (n <= 0) {
        cout << "Invalid number. Try again: ";
        cin >> n;
    }

    vector<double> marks(n);

    // Input marks
    for (int i = 0; i < n; i++) {

        cout << "Enter marks for subject " << (i + 1) << ": ";
        cin >> marks[i];

        while (marks[i] < 0 || marks[i] > 100) {
            cout << "Invalid marks (0-100). Re-enter: ";
            cin >> marks[i];
        }
    }

    double cgpa = calculateCGPA(marks);
    double percentage = cgpa * 9.5;

    // Output
    cout << fixed << setprecision(2);

    cout << "\n----- RESULT -----\n";
    cout << "CGPA       : " << cgpa << endl;
    cout << "Percentage : " << percentage << "%\n";

    cout << "\nThank you for using CGPA Calculator!\n";

    return 0;
}

