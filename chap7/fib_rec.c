#include <stdio.h>
#include <stdlib.h>

long fibonaci(int n)
{
	if (n <= 2) {
		return 1;
	}
	return fibonaci(n - 1) + fibonaci(n - 2);
}

void main(void) {
	{
		int n;
		printf("Enter a number: ");
		scanf("%d", &n);
		printf("Fibonaci(%d) = %ld", n, fibonaci(n));
	}
}