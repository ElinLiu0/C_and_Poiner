// Author : Elin
// Last Modified : 2022-09-25 19:13
// File Name : gotoSentence.c
#include <stdlib.h>
#include <stdio.h>



void main(void)
{
	const int number = 1;
	if (number == 1)
	{
		// 如果使用goto指令进行跳转，则此时主进程将完整的执行一遍hello_world下的代码后退出
		goto hello_world;
		exit(EXIT_SUCCESS);
	}
	// 此处的hello_world并非代码段，而是一个实际意义上的标签
	hello_world:
		printf("Hello World!");
}