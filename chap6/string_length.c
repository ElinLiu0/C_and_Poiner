#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int string_length(const char* string)
{
	int length = 0;
	// 依次访问字符串内的内容，计算字符数，直到出现NULL终止符
	while (*string++ != '\0')
	{
		length += 1;
	}
	return length;
}

void main(void)
{
	const char* string = "Hello, world!";
	printf("The length of string \"%s\" is %d\n", string, string_length(string));
	printf("Calulate with intergrated function is %d\n", strlen(string));
}