// Author: Elin.Liu
// Date: 2022-09-12 12:34:32
// Last Modified by:   Elin.Liu
// Last Modified time: 2022-09-12 12:34:32

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*
        此时如果只使用gcc编译器编译此文件时，会抛出存在三字母词的异常
        如果想让字符串中的三字母词被编译器识别，
        可以使用 -trigraphs 选项进行编译
    */
    printf("Delete file (are you really sure??): \n");
    /*
        启用选项后，打印结果如下：
        Delete file (are you really sure]:
        可是这又并不是我们预期的打印结果，因此通常不会使用这个选项
    */
    return 0;
}