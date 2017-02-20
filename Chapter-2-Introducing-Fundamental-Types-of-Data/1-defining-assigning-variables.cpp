#include <iostream>

using namespace std;

int main () {
	
	cout << "Testing various ways to initializing a variable" << endl;

	int a = 8;	// Conventional syntax
	int b {9};	// 	Initializer list syntax
	int c (10);	//	Functional notation	syntax
	
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	//init multiple vars in 1 line
	int e {}, f {}, g {6}, h {3};		//empty

	e = f = g + h;

	cout << "e = " << e << endl;
	cout << "f = " << f << endl;
	cout << "g = " << g << endl;
	cout << "h = " << h << endl;

	int arr[] {1, 3, 6, 7, 9, 5};

	cout << "arr address = " << arr << endl;

	cout << "Printing elements of array:" << endl;

	for (int i: arr) {
		cout << i << " ";
	}

	cout << endl << "Happy Coding :)" << endl;
}