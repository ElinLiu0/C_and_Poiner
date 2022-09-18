// Author: Elin.Liu
// Date: 2022-09-17 20:53:00
// Last Modified by:   Elin.Liu
// Last Modified time: 2022-09-17 20:53:00
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*
        此时，虽然该语法在C语言中是合法的，但是此时指针变量仅作用做a上了
        而b和c则被初始化为了整形数据，值为0
        如果此时使用%d打印a，则会抛出数据类型异常
    */
    int* a, b, c = 0;
    printf("a = %p, b = %d, c = %d\n", a, b, c);
    /*
        所以，想要完整的声明三个指针类型变量，我们需要对每个
        变量名上添加星号
    */
    const int *a1, *b1, *c1;
    printf("a1 = %p, b1 = %p, c1 = %p\n", a1, b1, c1);
    return 0;
}