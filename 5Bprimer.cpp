#include <stdio.h>
#include <stdlib.h>
int main() {
	char z = *(const char*)0;
	printf("I read from location zero");
	exit(EXIT_SUCCESS);
}