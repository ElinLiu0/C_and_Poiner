#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	// 此时number的二进制形式为：010
	const int number = 2;
	// 左移三位的结果为：010000
	int leftMoving = number << 3;
	const int number_2 = 0x10010110;
	// 右移三位的结果为：000010
	int rightMoving = number_2 >> 3;
	printf("左移后的结果为：%d\n", leftMoving);
	printf("右移后的结果为：%d\n", rightMoving);
	return 0;
}