#include <iostream>
#include <string>

using namespace std;

int main () {
	int i = 9;
	char c = 'c';
	float f = 5.2f;
	double d = 9.2;
	string s { "I am Suman Barick... I am Codotronix... " };

	cout	<< endl
			<< "size of int i is " << sizeof(i) << " bytes"
			<< endl
			<< "size of char c is " << sizeof(c) << " bytes"
			<< endl
			<< "size of float f is " << sizeof(f) << " bytes"
			<< endl
			<< "size of double d is " << sizeof(d) << " bytes"
			<< endl
			<< "size of string s is " << sizeof(s) << " bytes"
			<< endl << endl;

	return 0;
}