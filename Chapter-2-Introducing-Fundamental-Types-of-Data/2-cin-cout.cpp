#include <iostream>
//#include <string>

using namespace std;

int main () {
	int day {}, month {}, year {};

	cout 	<< endl
			<< "Enter a date as dd mm yyyy format"
			<< "[three values separated by spaces]"
			<< "and then press enter..."
			<< endl;

	cin >> day >> month >> year;

	//string dt {day + " " + month + " " + year};

	cout	<< "Date entered by you is : " 
			<< day
			<< " "
			<< month
			<< " "
			<< year
			<< endl;

	return 0;
}