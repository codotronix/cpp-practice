#include <iostream>

using namespace std;

class Student {
    int roll, semester;
    string name;
    public:
        Student(int _roll, string _name, int _semester): roll(_roll), name(_name), semester(_semester) {}

    void promote() {
        // ++semester; // OK
        this->semester++; // OK
        // this.semester++; // WRONG
    }

    void show() {
        cout << roll << " : " << name << " : " << semester << endl;
    }
};

int main() {
    Student s(10, "Nikhil", 2);
    s.promote();
    s.show();
    return 0;
}