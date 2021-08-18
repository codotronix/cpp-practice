#include <iostream>

using namespace std;

int main () {
    int data[] = { 1, 2, 3, 4, 5 };

    cout << data << " " << data+1 << " ";
    cout << *data << " " << *(data+1) << " " << endl;

    int *data_list[5] = { data+1, data+2, data+3, data+4, data };

    cout << data_list[0] << endl;

    int **data_ptr = data_list;

    cout << data_ptr[0] << endl;

    cout << **(data_ptr+2) << "-" << *++data_ptr[2] << endl;

     return 0;
}