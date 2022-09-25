// Author : Elin
// Date : 2022-09-25 18:43
// File Name : Nested_Swith.c
#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0
#define and &&
int main(void)
{
	int user_input;
	printf("请输入一个整数 : ");
	scanf("%d", &user_input);
	// 另外请注意，C不允许在switch语句内进行变量的声明，所以这里的变量声明必须放在switch语句之外。
	int division_result = user_input % 2;
	switch (user_input > 0 and user_input <= 10) {
	default:
		printf("正在计算...");
	case true:
		switch (division_result = 0)
		{
		case true:
			printf("这是一个偶数");
			exit(EXIT_SUCCESS);
			system("pause");
		case false:
			printf("这是一个奇数");
			exit(EXIT_SUCCESS);
			system("pause");
		}
	case false:
		printf("这个数不在1-10之间");
		exit(EXIT_SUCCESS);
		system("pause");
	}
}