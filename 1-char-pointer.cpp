#include <cstdio>

char * getNameFromConsole () {
	static char response[50];
	puts("\nPlease enter your name: ");
	fflush(stdout);
	fgets(response, 50, stdin);
	return response;
}

int main (int argc, char ** argv) {
	char * name = getNameFromConsole();

	puts("\nHello ");
	puts(name);

	return 0;
}