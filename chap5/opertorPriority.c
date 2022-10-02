// Author: Elin.Liu
// Date: 2022-10-01 13:16:50
// Last Modified by:   Elin.Liu
// Last Modified time: 2022-10-01 13:16:50
#include <stdio.h>
#include <stdlib.h>

/*
    一个证明表达式的求值顺序只是部分由操作符的优先级决定的程序
*/
void main(void)
{
    int i = 10;

    i = i-- - --i * (i = -3) * i++ + ++i;
    printf("After Resulting is : %d\n", i);
    return 0;
}