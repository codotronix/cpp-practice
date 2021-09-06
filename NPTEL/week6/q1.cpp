#include <iostream>
using namespace std;

/**
 * See how C++ polymorphism is different from Java polymorphism
 * */

class Base {
    int x;
    public:
        Base(int _x): x(_x) {}
        void fun () { cout << x << "parent" << endl; }
};
class Derived: public Base {
    int y;
    public:
        Derived(int _x, int _y): Base(_x), y(_y) {}
        void fun () { cout << y << "child" << endl; }
};

int main () {
    Base *b1 = new Base(5);
    Base *b2 = new Derived(2,3);
    Derived *b3 = new Derived(8,9);
    b1->fun();
    b2->fun();
    b3->fun();
    return 0;
}