#include<iostream>
using namespace std;

int main() {
    // Print even numbers from 2 to 20
    for (int i = 2; i <= 20; i += 2) {
        cout << i << endl;
    }

    // Print odd numbers from 19 down to 1
    for (int i = 19; i >= 1; i -= 2) {
        cout << i << endl;
    }

    return 0;
}