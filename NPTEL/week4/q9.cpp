#include <iostream>
using namespace std;

class statclass {
    static int x = 10;
    public:
        void print() {
            cout << x << endl;
        }
};