#include <stdio.h>
#include <stdlib.h>
/*初始化函数，用于计算参数值中的1的个数*/
int count_one_bits(unsigned value)
{
	int ones;
	// 当这些值中还有为1的位时
	for (ones = 0; value != 0; value = value >> 1) {
		// 如果最低位为1时，则计数器+1
		if (value % 2 != 0)
			ones = ones + 1;
	}
	return ones;
}
void main(void)
{
	const int value = 32312;
	printf("在Value中共存在：%d个1位\n", count_one_bits(value));
	return 0;
}