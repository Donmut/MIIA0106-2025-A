#include <iostream>
using namespace std;

struct Address {
    int number;
    char road[20];
    char district[20];
    char province[20];
};

struct Phone {
    char home[10];
    char mobile[10];
};

struct Student {
    char id[9];
    char name[20];
    char surname[20];
    Address addr;   // nested struct Address
    Phone tel;      // nested struct Phone
};

int main() {
    Student s1;

    // รับค่าข้อมูลนักศึกษา 1 คน
    cout << "Enter Student Information:\n";
    cout << "ID: ";
    cin >> s1.id;
    cout << "Name: ";
    cin >> s1.name;
    cout << "Surname: ";
    cin >> s1.surname;

    cout << "Address - House Number: ";
    cin >> s1.addr.number;
    cout << "Address - Road: ";
    cin >> s1.addr.road;
    cout << "Address - District: ";
    cin >> s1.addr.district;
    cout << "Address - Province: ";
    cin >> s1.addr.province;

    cout << "Phone - Home: ";
    cin >> s1.tel.home;
    cout << "Phone - Mobile: ";
    cin >> s1.tel.mobile;

    // แสดงผลข้อมูลทั้งหมด
    cout << "\n===== Output =====\n";
    cout << "ID: " << s1.id << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Surname: " << s1.surname << endl;

    cout << "Address: " << endl;
    cout << "  House Number: " << s1.addr.number << endl;
    cout << "  Road: " << s1.addr.road << endl;
    cout << "  District: " << s1.addr.district << endl;
    cout << "  Province: " << s1.addr.province << endl;

    cout << "Phone: " << endl;
    cout << "  Home: " << s1.tel.home << endl;
    cout << "  Mobile: " << s1.tel.mobile << endl;

    return 0;
}