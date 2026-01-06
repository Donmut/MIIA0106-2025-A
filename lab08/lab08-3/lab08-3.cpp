#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string nickname;
    string lineId;
    string phone;
};

void printStudent(Student s) {
    cout << "ID       : " << s.id << endl;
    cout << "Nickname : " << s.nickname << endl;
    cout << "Line ID  : " << s.lineId << endl;
    cout << "Phone    : " << s.phone << endl;
}

int main() {
    Student s1;

    cout << "=== Input Student 1 ===\n";
    cout << "Enter ID: ";
    cin >> s1.id;
    cin.ignore(); // สำคัญมาก

    cout << "Enter Nickname: ";
    getline(cin, s1.nickname);

    cout << "Enter Line ID: ";
    getline(cin, s1.lineId);

    cout << "Enter Phone: ";
    getline(cin, s1.phone);

    cout << "\n=== Output (from function) ===\n";
    printStudent(s1);

    return 0;
}
