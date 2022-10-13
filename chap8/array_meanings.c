#include <stdio.h>
#include <stdlib.h>
// 常见数组切边取值
int normal_slice(int pos, int array[])
{
	/*
		此时，对于数组array而言，pos是一个整数下标
		c编译器将从第0位索引，逐层向后遍历，直到pos
		另外，该数组只能到程序结束后释放该资源
	*/
	return array[pos];
}
// 指针切边取值
int pointer_slice(int pos, int array[])
{
	/*
		此时，对于array而言，此时array是一个指针常量
		因为在初始化时，它的长度以及类型都已经被初始完成，因此它是不可变的(const)
		与之相反，如果array是一个真正意义上的指针(int *)，此时array是一个指针变量，
		可以通过realloc()扩充，alloc()进行初始化，free()进行释放
	*/
	return *(array + (pos));
	/*
		在该返回值中：内层括号表明让下标值优先进行计算，
		经过指针计算，加法运算的是结果一个指向所需元素的指针。
		最后，通过间接访问，访问其元素的值
	*/
}

void main(void)
{
	int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("normal_slice array[5] = %d\n", normal_slice(5, array));
	printf("pointer_slice array[5] = %d\n", pointer_slice(5, array));
}