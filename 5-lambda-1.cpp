#include <iostream>

using namespace std;

int main () {

	//define a lambda function
	auto myLam = [] (int num) {  
					std::cout << "The lambda function 'myLam' is called with interger number = " 
								<< num 
								<< endl;
				};

	std::cout << "Calling lambda function..." << endl;
	
	myLam(9);

	return 0;	
}