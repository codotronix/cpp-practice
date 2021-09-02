#include <iostream>
using namespace std;

class ClassA {
    int a;
    public:
        ClassA(int _a) { a=_a; }
        int get() { return a; }
};

class ClassB {
    static ClassA c1;
    public:
        static int get() {
            return c1.get();
        }
};

int main(void) {
    ClassB b;
    cout << b.get(); // ERROR: undefined reference to `ClassB::c1'
    return 0;
}