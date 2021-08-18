#include <iostream>
using namespace std;

union Data{
    int i_data;
    char c_data[4];
};

void testmat (int [10][20]) {
    cout << "It works ..." << endl;
}

int main () {
    Data d;

    d.i_data = 257;
    for (int i = 3; i>=0; --i) 
        cout << d.c_data[i] << " ";

    cout << endl << d.i_data << endl;

    int mat [10][20];
    testmat(mat);

    return 0;
}