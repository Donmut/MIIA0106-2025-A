#include <iostream>
#include <string>
using namespace std;

struct Student {
    string studentID;
    string nickname;
};

int main() {
    Student s1;
    Student* p = nullptr;

    // ใช้ pointer p ชี้ไปที่ s1
    p = &s1;

    // กำหนดค่าโดยใช้ p->
    p->studentID = "6711800001";
    p->nickname = "Don";

    // แสดงผลโดยใช้ p->
    cout << "ID: " << p->studentID << endl;
    cout << "Nickname: " << p->nickname << endl;

    return 0;
}