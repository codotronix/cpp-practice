#include <iostream>
using namespace std;

class Base {
    public:
        void f1() { cout<<1; }
        virtual void f2() { cout<<2; }
};
class Derived: public Base {
    public:
        virtual void f1() { cout<<3; }
        void f2() { cout<<4; }
};
int main() {
    Base *b = new Derived;
    b->f1();
    b->f2();
    return 0;
}