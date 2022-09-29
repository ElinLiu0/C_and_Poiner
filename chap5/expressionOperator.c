#include <stdio.h>
#include <stdlib.h>
inline int iMax(int a, int b) { return a >= b ? a : b; }
void main(void)
{
	const int result = iMax(2, 3);
	printf("%d\n", result);
	return 0;
}