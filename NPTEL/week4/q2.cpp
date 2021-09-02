#include <iostream>
using namespace std;

class Class1 {
    int a = 5;
    friend class Class2;
};

class Class2 {
    public: 
        void display (Class1 &c) {
            cout << c.a;
        }
};

int main(){
    Class1 c1;
    Class2 c2;
    c2.display(c1);
    return 0;
}