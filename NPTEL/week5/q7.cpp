#include <iostream>
using namespace std;

class A {
    protected:
        int a;
    public:
        A(int _a=0) : a(_a) {}
};
class B: public A {
    A t1;
    public:
        B(int x, A t): A(x), t1(t) {}
        void print() { cout<<a; }
        void show() { cout<<t1.a; }
};