#include <iostream>
using namespace std;

class One {
    public:
        One() { cout<<"1"; }
        ~One() { cout<<"1"; }
};

class Two : public One {
    public:
        Two() { cout<<"2"; }
        ~Two() { cout<<"2"; }
};

class Three : public Two {
    public:
        Three() { cout<<"3"; }
        ~Three() { cout<<"3"; }
};

void fun(Two t) {}

int main () {
    Three t;
    fun(t);
    return 0;
}