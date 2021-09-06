#include <iostream>
using namespace std;

class Base {
    int b;
    public:
        Base(int i): b(i) {}
        virtual void f(Base *t) { cout<<t->b<<endl; }
};
class Derived: public Base {
    int d;
    public:
        Derived(int i, int j): Base(i), d(j) { }
        void f(Derived *t) { cout <<  t->d << endl; }
};
int main() {
    Base *t1 = new Derived(1,2);
    t1->f(new Derived);
    return 0;
}