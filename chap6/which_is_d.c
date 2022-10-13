#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#define true 1;
#define false 0;
void main(void)
{
	int a = 4;
	int *d = &a;
	// 此时d的指向值为：10-4=6
	*d = 10 - *d;
	printf("间接访问指针的左右值后，指针d指向的值6，该逻辑的布尔值为%d\n", (*d == 6 ? 1 : 0));
	// 此时d的指向值为：10-6=4
	int e = 10 - *d;
	printf("间接访问指针为右值，并赋值给可直接访问的左值后，e的值为4，该逻辑的布尔值为%d\n", (e == 4 ? 1 : 0));
}