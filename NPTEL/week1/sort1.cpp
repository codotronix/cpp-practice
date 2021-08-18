#include <iostream>
#include <algorithm>

using namespace std;

int main () {
    int numarr[] = { 231, 54, 205, 12, 30 };

    sort(numarr, &numarr[6]);

    for (int i=0; i<5; ++i) {
        cout << numarr[i] << " ";
    }

    return 0;
}