#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int* p = &a;

    *p = 100;   // เปลี่ยนค่า a ผ่าน pointer (dereference)

    cout << "a = " << a << endl;
    return 0;
}