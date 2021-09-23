#include<iostream>
using namespace std;

class Point {
    public:
    int a, b;
};

int main () {
    Point p = {4, 5};

    cout<< p.a + p.b;

    return 0;
}
