#include <iostream>
#include <string>

using namespace std;

int main () {
	string name {"Unknown"};

	cout << "Enter Your Name :";
	cin >> name;

	cout << endl << "Hello " << name << " !" << endl;

	return 0;
}