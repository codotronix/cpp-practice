#include <cstdio>

using namespace std;

void fa () { puts("fa is called...\n");}
void fb () { puts("fb is called...\n");}
void fc () { puts("fc is called...\n");}
void fd () { puts("fd is called...\n");}
void fe () { puts("fe is called...\n");}

//DEclare and Assign the function pointer array
void (*fpArray[])() = { fa, fb, fc, fd, fe };

int main (int argc, char ** argv) {
	
	//Let"s loop over the fpArray and call the functions one by one
	for(auto fp: fpArray) {
		fp();
	}

	return 0;
}
