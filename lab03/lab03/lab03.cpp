#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentID;
    string studentname;
    float score;
    string grade;

    cout << "Enter your studentID: ";
    cin >> studentID;
    cin.ignore();
    cout << "Enter your studentname: ";
    getline(cin, studentname);

    cout << "Enter your score: ";
    cin >> score;
    if (score >= 90) {
        grade = "Grade A";
    }
    else if (score >= 80) {
        grade = "Grade B";
    }
    else if (score >= 70) {
        grade = "Grade C";
    }
    else if (score >= 60) {
        grade = "Grade D";
    }
    else {
        grade = "Grade F";
    }
    cout << "\n";
    cout << "========Student Report========" << endl;
    cout << "StudentID: " << studentID << endl;
    cout << "Studentname: " << studentname << endl;
    cout << "Score: " << score << endl;
    cout << "Grade: " << grade << endl;
    cout << "==============================" << endl;

    return 0;
}