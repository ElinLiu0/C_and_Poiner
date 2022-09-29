#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int number = 2;
	// 此时result为2：后++的窎远顺序是先将number赋值给result，然后再执行++自增
	int result = number++;
	printf("Number前++的结果为：%d\n",result);
	printf("Number后++的结果为：%d\n",number);
	return 0;
}