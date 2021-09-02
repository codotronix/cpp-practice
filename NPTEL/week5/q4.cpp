#include <iostream>
using namespace std;

class classA {
    public:
        void printA() { cout<< "ClassA"; }
};

class classB : public classA {
    public:
        void printB() { cout<< "ClassB"; }
};

int main () {
    classB b;
    b.printA();
    return 0;
}