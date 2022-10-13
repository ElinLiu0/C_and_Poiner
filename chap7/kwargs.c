#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/*
	初始化average函数
	请注意，在需要可变参数列表的函数中，函数的第一个起始参数必定为int，且该值表达的是整个函数所允许的可变参数的个数
	
*/
float average(int n_values, ...)
{
	// 初始化可变参数列表
	va_list var_arg;
	// 初始化参数数量值
	int count = 0;
	// 初始化加法和
	float sum = 0;
	// 准备访问可变参数
	va_start(var_arg, n_values);
	// 累加取自可变参数列表的值
	for (count = 0; count < n_values; count++)
	{
		sum += va_arg(var_arg, int);
	}
	// 完成处理可变参数
	va_end(var_arg);
	return sum / n_values;
}

void main(void) {
	// %.0f也可以实现对float返回值函数，进行取整打印
	printf("The Avearage of 1,2 and 3 is = %.0f", average(3, 1, 2, 3));
}