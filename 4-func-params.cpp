#include <cstdio>

using namespace std;

void func1 (int i) {
	i = 42;
}

void func2 (int & i) {
	i = 9;
}

void func3 (const int & i) {
	//i = 11;	//error: assignment of read-only reference ‘i’
	printf("\nInside func3... %d\n", i);
}

void func4 (const int i) {
	//i = 30;	//error: assignment of read-only reference ‘i’
	printf("\nInside func4... %d\n", i);
}

int main (int argc, char ** argv) {
	int x = 5;

	func1(x);
	printf("\n x = %d \n", x);

	//Now due to reference operator &, the value of x will be changed
	func2(x);
	printf("\n x = %d \n", x);

	func3(x);
	func4(x);

	return 0;
}
