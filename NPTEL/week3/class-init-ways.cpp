#include <iostream>
using namespace std;

class Double {
    private:
        double d;

    public:
        Double(): d(0.0) { cout<<"Double::Double() "; }
        Double (double _d): d(_d) { cout<<"Double::Double(double) "; }
        Double (const Double& _od): d(_od.d) { cout<<"Double::Double(Double&) "; }
        ~Double() { cout << d << " "; }
};

int main () {
    Double d1(43.33);
    Double d2;
    Double d3 = 53.33;
    Double d4 = d3;
    return 0;
}