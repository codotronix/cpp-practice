#include <iostream>
using namespace std;

class Base {
    public:
        virtual void print() = 0;
};
void Base::print() {
    cout<<"Vitual Print";
}
int main() {
    Base b;
    Base *pt = new Base;
    b->f1();
    b->f2();
    return 0;
}