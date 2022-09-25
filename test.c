#include <stdio.h>

void main(void)
{
	char words[100];
	do {
		printf("Just input something : ");
		scanf("%s", &words);
		printf("%s", words);
	} while (1);
}