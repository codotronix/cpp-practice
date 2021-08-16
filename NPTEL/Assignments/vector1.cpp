#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<char> vc) {
    for (int i=0; i<vc.size(); ++i) {
        cout <<  vc[i] << " ";
    }
    cout << endl;
}

int main () {

    // // let's init a char vector of size 3,
    // // and put 'S' in all 3 places
    // vector<char> vc(3, 'S');
    // printVector(vc);

    // // let's now resize,
    // // but init with 'T',
    // // Will the old 'S' get overwritten with 'T' ???
    // // NOPE, ONLY NEW PLACES GETS NEW DATA
    // vc.resize(9, 'T');
    // printVector(vc);

    // // NOW IF WE RESIZE DOWN
    // vc.resize(5);
    // printVector(vc);

    const int size = 3, c = 65;
    vector<char> vc(size, 'A');
    for (int i=1; i<=3; i++) {
        vc.push_back(65+i);
    }
    printVector(vc);

    vc.resize(10, 88);
    vc.resize(8);
    printVector(vc);



    return 0;
}