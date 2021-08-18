#include <iostream>

using namespace std;

void compute (int n1, int n2, int& n3, int* n4) {
    n3 = n1 + n2;
    *n4 = n1 * n2;
}

int main () {
    int w = 10, x = 20, y = 0, z = 0;
    compute(w, x, y, &z);

    cout << y << " " << z << endl;


    const double d = 3.2;
    const double *p = &d;
    double const *q = &d;
    const double * const r = &d;

    cout << p << " " << q <<endl;

    return 0;
}