#include <iostream>
using namespace std;

class Square {
    int l;
    public:
        Square(int _l): l{_l} {}
        friend void print(Square);      // OK
        // void friend print(Square);   // OK
};

void print(Square s) {
    cout << s.l;
}

int main(){
    Square t1(5);
    print(t1);
    return 0;
}