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
		// ���ʹ��gotoָ�������ת�����ʱ�����̽�������ִ��һ��hello_world�µĴ�����˳�
		goto hello_world;
		exit(EXIT_SUCCESS);
	}
	// �˴���hello_world���Ǵ���Σ�����һ��ʵ�������ϵı�ǩ
	hello_world:
		printf("Hello World!");
}