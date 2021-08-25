#include <iostream>
using namespace std;

class ThisPointer {
    private:
        int data;
    public:
        ThisPointer(int data=0) { this->data = data; }
        ThisPointer(ThisPointer& t) { this = t; }

};