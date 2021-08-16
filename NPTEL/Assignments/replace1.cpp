#include <iostream>
#include <algorithm>

using namespace std;


void printArr(int *a, int size) {
    for (int i=0; i<size; ++i) {
        cout << *(a+i) << " ";
    }
    cout << endl;
}


/**
 * replace(startAddress, endAddress, oldValue, newValue) 
 * replace function will start from startAddress and go till endAddress
 * and will keep on replacing all matching oldValue, with the given newValue
 * */


int main () {
    int data[] = { 10, 20, 30, 40, 50 };

    for (int i=0; i<1; i++) {
        int j = data[i];
        replace(data, data+5, j, *(data+4-i));
        // replace(data+4, data+5, data[0], j); // OK
        // replace(data+i+1, data+5, data[4-i], j); // OK
        replace(&data[i+1], &data[5], data[4-i], j);
    }
    printArr(data, 5);

    return 0;
}