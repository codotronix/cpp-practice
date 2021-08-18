#include <iostream>

using namespace std;

int main () {
int a = 10, b = 20;

    const int * p = new int[2] { a, b };    // dynamic memory management, new array declare + assignment

    cout << *p << ", " << 1[p] << endl;

    return 0;
}


