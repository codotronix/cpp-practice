#include<iostream>
using namespace std;


class Employee{
    int id;
    public: double basic;    //LINE-1
    public: double salary;   //LINE-2
public:
    Employee(int i, double b, double s=0) : id(i), basic(b), salary(s){	}
    void setBasic(double b) {    //LINE-3
        basic = b;
    }
    // friend double calculate(Employee);   //LINE-4
};


double calculate(const Employee &e){
    e.salary = e.basic + e.basic * 0.4;
    return e.salary;
}

int main(){
    int a;
    double b,c;
    cin >> a >> b >> c;
    const Employee e(a,b);
    cout << calculate(e) << " ";
    e.setBasic(c);
    cout << calculate(e);
    return 0;
}