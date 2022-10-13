#include <stdio.h>
#include <stdlib.h>
void main(void)
{
	int a = 12;
	// 此时b指向的值为：12，因为它直接调用了a的地址
	int* b = &a;
	// 此时c指向的值为：12，因为它间接调用了b的地址
	int** c = &b;
	printf("b = %d\n",*b);
	printf("c = %d\n",**c);
}