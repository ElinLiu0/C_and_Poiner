// Author: Elin.Liu
// Date: 2022-10-01 18:13:25
// Last Modified by:   Elin.Liu
// Last Modified time: 2022-10-01 18:13:25

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define uint32 unsigned int
#define uint8 unsigned char

void get_binary_string(int number)
{
	char *origin = (char*)malloc(33);
	char *buffer = (char*)malloc(33);
	char* after = (char*)malloc(33);
	itoa(number, buffer, 2);
	for (int z = 0; z <= 33 - strlen(buffer); z++) {
		origin[z] = '0';
	}
	for (int i = 33 - strlen(buffer), j = 0; i <= 32; i++, j++) {
		origin[i] = buffer[j];
	}
	printf("Before Change is : %s\n", origin);
	for (int x = 0,p = 0; x <= strlen(buffer); x++,p++) {
		after[x] = buffer[p];
	}
	for (int r = strlen(buffer); r <= 32; r++) {
		after[r] = '0';
	}
	printf("After Change is : %s\n", after);
}

int main(void)
{
	const int number = 25;
	get_binary_string(number);
	return 0;
}