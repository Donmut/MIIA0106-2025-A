// TODO: Bubble Sort แบบมากไปน้อย ด้วย pointer
#include <iostream>
using namespace std;

void printArray(int* p, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(p + i) << " ";
    }
    cout << endl;
}

void swapValue(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortDescending(int* p, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {

            // เปรียบเทียบด้วย pointer เท่านั้น
            if (*(p + j) < *(p + j + 1)) {
                // swap ด้วย pointer
                swapValue(p + j, p + j + 1);
            }
        }
    }
}

int main() {
    int arr[] = { 5, 2, 9, 1, 3 };
    int size = 5;

    printArray(arr, size);      // ก่อนเรียง
    sortDescending(arr, size);  // เรียงมาก → น้อย
    printArray(arr, size);      // หลังเรียง

    return 0;
}