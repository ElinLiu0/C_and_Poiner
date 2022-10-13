#include <stdio.h>
#include <stdlib.h>
// 该函数不会进行两个整数的交换
void swap(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}
// 此时该函数可以进行整数交换，此时函数参数为x和y的地址
void swap_2(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void main(void)
{
	int a = 10, b = 20;
	swap(a, b);
	printf("a = %d, b = %d\n", a, b);
	swap_2(&a, &b);
	printf("a = %d, b = %d\n", a, b);
}