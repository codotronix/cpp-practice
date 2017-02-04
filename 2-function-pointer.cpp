#include <cstdio>
using namespace std;

void myFunction () 
{	
	static int call_count = 0;
	call_count++;

	if (call_count == 1) {
		puts("\nHi, myFunction has been called...");	
	} 
	else {
		printf("\nHi, myFunction has been called AGAIN... for %dth time \n", call_count);	
	}
	
}


int main (int argc, char ** argv) 
{
	//declare and assign a function pointer
	void (*fp)() = myFunction;		//same=> void (*fp)() = &myFunction;

	puts("Hello! Welcome from main...");

	//Call the function using the pointer
	fp();

	//Another syntax to call a function pointer function
	(*fp)();

	return 0;
}