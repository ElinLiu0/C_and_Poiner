#include <stdio.h>
#include <stdlib.h>

__global__ void kernel()
{
	
}

int main(void)
{
	const int M = 100000;
	const int space = sizeof(char) * M;
	char *h_m = (char*)malloc(space);
	h_m = "Hello World!";

}