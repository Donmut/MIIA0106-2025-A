#include <iostream>
#include <string>
using namespace std;

// ===== struct Phone =====
struct Phone {
    string mobile;
    string home;
};

// ===== struct Parent =====
struct Parent {
    string name;
    string relationship;
    Phone contact;
};

// ===== struct Student =====
struct Student {
    string id;
    string nickname;
    string lineId;
    Phone myContact;
    Parent myParent;
};

// ===== input function (ใช้ pointer) =====
void inputStudent(Student* s) {
    cout << "===== Student Data =====" << endl;
    cout << "ID: ";
    getline(cin, s->id);

    cout << "Nickname: ";
    getline(cin, s->nickname);

    cout << "Line ID: ";
    getline(cin, s->lineId);

    cout << "===== Student Contact =====" << endl;
    cout << "Mobile number: ";
    getline(cin, s->myContact.mobile);

    cout << "Home number: ";
    getline(cin, s->myContact.home);

    cout << "===== Parent Data =====" << endl;
    cout << "Parent Name: ";
    getline(cin, s->myParent.name);

    cout << "Relationship: ";
    getline(cin, s->myParent.relationship);

    cout << "===== Parent Contact =====" << endl;
    cout << "Parent Mobile: ";
    getline(cin, s->myParent.contact.mobile);

    cout << "Parent Home: ";
    getline(cin, s->myParent.contact.home);
}

// ===== show function (ใช้ pointer) =====
void showStudent(Student* s) {
    cout << "\n===== Student Information =====" << endl;
    cout << "ID: " << s->id << endl;
    cout << "Nickname: " << s->nickname << endl;
    cout << "Line ID: " << s->lineId << endl;

    cout << "Student Contact:" << endl;
    cout << "Mobile: " << s->myContact.mobile << endl;
    cout << "Home: " << s->myContact.home << endl;

    cout << "Parent Information:" << endl;
    cout << "Name: " << s->myParent.name << endl;
    cout << "Relationship: " << s->myParent.relationship << endl;

    cout << "Parent Contact:" << endl;
    cout << "Mobile: " << s->myParent.contact.mobile << endl;
    cout << "Home: " << s->myParent.contact.home << endl;
}

// ===== main =====
int main() {
    Student s1;
    Student* p = &s1;

    inputStudent(p);   // ใช้ pointer
    showStudent(p);    // ใช้ pointer

    return 0;
}