#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	const int a = 0x001;
	const int b = 0x010;
	printf("�߼����Ľ��Ϊ��%d\n", a & b);
	printf("�߼����Ľ��Ϊ��%d\n", a | b);
	printf("�߼����Ľ��Ϊ��%d\n", a ^ b);
	return 0;
}