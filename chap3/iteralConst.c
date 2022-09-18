// Author: Elin.Liu
// Date: 2022-09-15 14:15:39
// Last Modified by:   Elin.Liu
// Last Modified time: 2022-09-15 14:15:39
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // 常规创建字面值
    const int x = 5;
    /*
        变更缺省规则，通过在值后面加上L或者l，
        来变更该字面值在移植时的缺省策略
    */
    const int y = 5l;
    /*
        添加u或者U后缀，来指定该字面值为无符号整数
        缺省策略
    */
    const int z = 5u;
    /*
        添加ul或者UL后缀，来指定该字面值为无符号长整数
        缺省策略
    */
    const int w = 5ul;
    printf("x = %d, y = %d, z = %d, w = %d\n", x, y, z, w);
    return 0;
}