#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define uint32 unsigned int

void moving_bits(uint32 number) {
	char *buffer;
	const int length = strlen(itoa(number, buffer, 2));
	printf("Before change is : %s\n", itoa(number, buffer, 2));
	number = number << (32 - length);
	printf("After change is : %s\n", itoa(number, buffer, 2));
}

int main(void) {
	const uint32 number = 25;
	moving_bits(number);
	return 0;
}