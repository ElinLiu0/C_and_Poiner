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
	printf("������һ������ : ");
	scanf("%d", &user_input);
	// ������ע�⣬C��������switch����ڽ��б�������������������ı��������������switch���֮�⡣
	int division_result = user_input % 2;
	switch (user_input > 0 and user_input <= 10) {
	default:
		printf("���ڼ���...");
	case true:
		switch (division_result = 0)
		{
		case true:
			printf("����һ��ż��");
			exit(EXIT_SUCCESS);
			system("pause");
		case false:
			printf("����һ������");
			exit(EXIT_SUCCESS);
			system("pause");
		}
	case false:
		printf("���������1-10֮��");
		exit(EXIT_SUCCESS);
		system("pause");
	}
}