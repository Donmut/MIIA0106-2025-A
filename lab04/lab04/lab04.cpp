#include <iostream>
#include <string>

using namespace std;

int main() {
	cout << "------ FOR LOOP ------" << "\n";
	int i = 1;

	for (i = 1;
		i <= 10;
	    i++){
		cout << i << endl;
		
	}
    cout << "------WHILE LOOP------" << "\n";
    i = 1;

	while (i <= 10) {
		cout << i << endl;
		i++;
	}
	cout << "------ DO WHILE LOOP------" << "\n";
	i = 1;
	do {
		cout << i << endl;
		i++;
	} while (i <= 10);

	return 0;
}
