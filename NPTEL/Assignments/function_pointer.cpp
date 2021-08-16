#include <iostream>
using namespace std;

int sum (int a, int b) {
    return a+b;
}

int subtract (int a, int b) {
    return a-b;
}

// a function pointer type, which takes in 2 ints, and returns 1 int
typedef int (*fnp) (int, int); 

// A higher order function
int caller (int a, int b, fnp fn) {
    return (*fn)(a, b);
}

int main () {

    cout << caller(4, 5, sum) << endl;
    cout << caller(5, 4, subtract) << endl;

    return 0;
}