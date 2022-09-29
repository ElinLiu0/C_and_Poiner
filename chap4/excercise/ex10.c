#include <stdint.h>
#include <stdio.h>

void main(void)
{
	int user_input;
	scanf("%d", &user_input);
	for (int i = 1; i <= user_input; i++) {
		printf("i");
	}
	printf("\nTotal Print %d '' characters.", user_input);
	return 0;
}