// 接受一个整形值（无符号），把它转换为字符串并打印它。前导0被忽略。
#include <stdio.h>
#include <stdlib.h>

void binary_to_ascii(unsigned int value)
{
	unsigned int quotient;
	quotient = value / 10;
	if (quotient != 0)
		binary_to_ascii(quotient);
	putchar(value % 10 + '0');
}

void main(void) {
	{
		unsigned int number;
		printf("Enter a number between 0 and 65535: ");
		scanf("%u", &number);
		binary_to_ascii(number);
	}
}