#include <iostream>
using namespace std;

void swapValue(int* a, int* b) {
    int temp = *a;  // เก็บค่าที่ a ชี้อยู่
    *a = *b;        // เอาค่าที่ b ชี้อยู่มาใส่ a
    *b = temp;      // เอาค่าเดิมของ a ใส่กลับไปที่ b
}

int main() {
    int x = 5, y = 10;
    swapValue(&x, &y);
    cout << x << " " << y << endl;
    return 0;
}