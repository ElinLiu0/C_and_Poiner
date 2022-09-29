#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
void main(void)
{
	int x, y, a, b;
	x, y, a, b = 1, 4, 6, 2;
	int is_x_small = x < y;
	int is_a_big_or_equal = a >= b;
	switch (is_x_small)
	{
	case 1:
		printf("WRONG!\n");
		exit(EXIT_FAILURE);
	case 0:
		printf("RIGHT!\n");
		exit(EXIT_SUCCESS);
	} 
	switch (is_a_big_or_equal)
	{
		case 1:
			printf("WRONG!\n");
			exit(EXIT_FAILURE);
		case 0:
			printf("RIGHT!\n");
			exit(EXIT_SUCCESS);
	}
}