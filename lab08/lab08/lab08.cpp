#include <iostream>
#include <string>
using namespace std;

// TODO 1: เพิ่ม field ใน struct Student
struct Student {
    string id;
    string nickname;
    string lineId;
    string phone;
};

int main() {
    Student s1; // ตัวแปรเดี่ยวของ struct

    cout << "=== Input Student 1 ===\n";
    // TODO 2: รับค่าจากผู้ใช้เก็บลง s1
    cout << "ID: ";
    cin >> s1.id;

    cout << "Nickname: ";
    cin >> s1.nickname;

    cout << "Line ID: ";
    cin >> s1.lineId;

    cout << "Phone: ";
    cin >> s1.phone;

    cout << "\n=== Output Student 1 ===\n";
    // TODO 3: แสดงผลข้อมูลของ s1
    cout << "ID: " << s1.id << endl;
    cout << "Nickname: " << s1.nickname << endl;
    cout << "Line ID: " << s1.lineId << endl;
    cout << "Phone: " << s1.phone << endl;

    return 0;
}