#include <stdio.h>
#include <stdlib.h>

long factorial(int n)
{
	int result = 1;
	while (n > 1) {
		result *= n;
		n--;
	}
	return result;
}

void main(void) {
	{
		int n;
		printf("Enter a number: ");
		scanf("%d", &n);
		printf("%d! = %ld\n", n,factorial(n));
	}
}