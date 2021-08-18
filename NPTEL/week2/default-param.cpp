#include<iostream>

using namespace std;

// NOTE: After default parameter cannot come any normal/positional param
// void fun (char n1 = 'C', int n2 = 9, double n3 = 30.03);     // OK
void fun (char = 'C', int = 9, double = 30.03);                 // OK

// int sum (int a, int b) { return a+b; }           // OK, int can take in floats
double sum (double a, double b) { return a+b; }     // OK, double can take in floats

int main () {
    fun();

    cout << sum(2.1f, 3.8f);

    return 0;
}

void fun (char n1, int n2, double n3) {
    cout << n1 << " " << n2 << " " << n3 << endl;
}