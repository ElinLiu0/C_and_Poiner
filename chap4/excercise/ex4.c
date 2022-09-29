#include <stdio.h>
#include <stdlib.h>


void main(void)
{
	int ch, checksum;
	while ((ch = getchar()) != EOF) {
		checksum += ch;
		putchar(ch);
	}
	printf("Checksum %d\n", checksum);
}