#include <iostream>
using namespace std;
int data = 0;
class Test {
    public:
    Test() { data++; }
    ~Test() { data++; }
};
int incr() {
    data++;
    { Test obj; }
    cout << data << " ";
    return data++;
}
int main () {
    cout << incr() << " ";
    cout << data << endl;
    return 0;
}