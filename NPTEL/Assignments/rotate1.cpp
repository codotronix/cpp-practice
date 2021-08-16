#include <iostream>
#include <algorithm>

using namespace std;

void printArr(int *a, int size) {
    for (int i=0; i<size; ++i) {
        cout << *(a+i) << " ";
    }
    cout << endl;
}

/*
* rotate(startAddress, midAddress, endAddress)
* this function will rotate leftin such a way that midAddress element will come to the place of startAddress elem
* and all the other elems from startAddress and endAddress will be rotated and placed accordingly
*/

int main () {
    int elem[5];

    for(int i=1; i<=5; ++i) {
        *(elem + i - 1) = i * 10;
    }

    printArr(elem, 5);

    rotate(elem, elem + 4, elem + 5);
    rotate(elem, elem + 1, elem + 4);

    printArr(elem, 5);

    return 0;
}