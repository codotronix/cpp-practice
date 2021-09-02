#include <iostream>
using namespace std;

class Base {
    public:
        int a;
        Base(): a(0) {}
        Base(int _a): a(_a) {}
        void setA(int x) { a=x; }
};
class Derived: private Base {
    public:
        Derived(int x): Base(x) {}
        void print() {
            (new Base)->setA(20);
            cout << a;
        }
};

int main () {
    Derived d(10);
    d.print();
    return 0;
}
