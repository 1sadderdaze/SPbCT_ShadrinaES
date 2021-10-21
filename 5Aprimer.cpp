#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int main() {
	char* some_memory = (char*)0;
	printf("A read from null %s", some_memory);
	sprintf(some_memory, "A write to null");
	exit(EXIT_SUCCESS);
}