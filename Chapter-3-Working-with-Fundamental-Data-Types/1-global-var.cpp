#include <iostream>

using namespace std;

int x = 9;

int main () {
	int x = 10;

	cout << "x = " << x << endl;
	cout << "global x = " << ::x << endl;

	cout << "Changing Global Variable to 18" << endl;

	::x = 18;

	cout << "global x = " << ::x << endl;

	return 0;
}