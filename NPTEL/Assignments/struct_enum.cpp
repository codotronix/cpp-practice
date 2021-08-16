#include <iostream>

using namespace std;

enum type { SQR, REC, TRI };
struct sqr_shape { int a; };
struct rec_shape { int a; int b; };
struct tri_shape { int a; int b; int c; };

struct geoShape {
    union shape {
        sqr_shape s1;
        rec_shape r1;
        tri_shape t1;
    };
    type t;
    shape s;
};

int main () {
    
    // type t;
    // cout << sizeof(t) << endl;
    cout << sizeof(geoShape) << endl;

    return 0;
}