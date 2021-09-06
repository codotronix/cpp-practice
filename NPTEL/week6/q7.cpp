#include<iostream>
using namespace std;

class A1{
    public:
        A1(){ cout<< "A1"; }
        ~A1(){ cout<< "~A1"; }
};
class A2: public A1{
    public:
        A2(){ cout<< "A2"; }
        ~A2(){ cout<< "~A2"; }
};
int main() {
    A1 *t = new A2;
    delete t;
    return 0;
}