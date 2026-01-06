#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string nickname;
    string lineId;
    string phone;
};

// swap เขียนเอง
void swapStudent(Student& a, Student& b) {
    Student temp = a;
    a = b;
    b = temp;
}

// sort เขียนเอง (Bubble sort) เรียงตาม id
void sortByID(Student students[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (students[j].id > students[j + 1].id) {
                swapStudent(students[j], students[j + 1]);
            }
        }
    }
}

void printStudents(Student students[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "ID       : " << students[i].id << endl;
        cout << "Nickname : " << students[i].nickname << endl;
        cout << "Line ID  : " << students[i].lineId << endl;
        cout << "Phone    : " << students[i].phone << endl;
        cout << "----------------------\n";
    }
}

int main() {
    const int SIZE = 5;
    Student students[SIZE];

    // INPUT
    for (int i = 0; i < SIZE; i++) {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        cout << "ID: ";
        cin >> students[i].id;
        cout << "Nickname: ";
        cin >> students[i].nickname;
        cout << "Line ID: ";
        cin >> students[i].lineId;
        cout << "Phone: ";
        cin >> students[i].phone;
        cout << endl;
    }

    sortByID(students, SIZE);

    cout << "\n===== Student List (Sorted by ID) =====\n";
    printStudents(students, SIZE);

    return 0;
}
