#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	const int a = 0x001;
	const int b = 0x010;
	printf("逻辑与后的结果为：%d\n", a & b);
	printf("逻辑或后的结果为：%d\n", a | b);
	printf("逻辑亦或的结果为：%d\n", a ^ b);
	return 0;
}