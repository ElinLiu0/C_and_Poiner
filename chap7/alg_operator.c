#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	static int a = 10;
	printf("a的前++值为：%d\n", ++a);
	printf("a的后++值为：%d\n", a++);
	/*
		虽然这两个结果中：a++和++a的值均为11
		但是a++属于先调用a的地址，获取值后再+1，
		而++a属于是先+1，后调用a的地址和值
	*/
}