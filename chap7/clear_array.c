#include <stdint.h>
#include <stdio.h>
#define uint32 unsigned int
void clear_array(uint32* array,uint32 size)
{
	while (size > 0) {
		array[--size] = 0;
	}
}

void main(void)
{
	uint32 array[10];
	uint32 i;
	for (i = 0; i < 10; i++)
		array[i] = i;
	clear_array(array, 10);
	for (i = 0; i < 10; i++)
		printf("%d ", array[i]);
}