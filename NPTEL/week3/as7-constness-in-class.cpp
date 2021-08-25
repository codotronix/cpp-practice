#include <iostream>
#include <string>
using namespace std;

class Integer {
    int i;
    public:
        Integer(const int& _i) : i(_i) {}
        void change_i (const int& _i) const { i = _i; }
};