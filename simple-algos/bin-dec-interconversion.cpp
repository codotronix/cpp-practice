#include <iostream>

using namespace std;

int main () {
    // ask for a decimal number
    cout << endl << "Enter an integer: ";
    int n;
    cin >> n;

    // Now convert it into binary
    // We can keep on dividing the number by 2
    // and collect the remainders from right to left
    // i.e. the 1st reminder should be at left most bit (LSB)
    int b = 0, q, rem, mult = 1;    
    while (n>0) {
        rem = n % 2;
        b = mult * rem + b;
        mult *= 10;
        n = n / 2;
    }

    cout<<endl<<"Binary: "<<b<<endl;


    // Now, let's convert the binary to decimal
    // to see if our output is correct
    cout<<endl<<"Converting the binary "<<b<<" to decimal to verify the answer ..."<<endl;

    mult = 1;
    int dec = 0;
    while (b > 0) {
        rem = b % 10;
        dec = rem * mult + dec;
        mult *= 2;
        b = b / 10;
    }

    cout<<endl<<"binary to decimal conversion result: "<<dec<<endl;

    return 0;
}