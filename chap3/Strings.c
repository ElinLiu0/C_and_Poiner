// Author: Elin.Liu
// Date: 2022-09-16 21:03:43
// Last Modified by:   Elin.Liu
// Last Modified time: 2022-09-16 21:03:43

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // 在ASCII C中，字符串是以空字符结尾的字符数组
    // 用\0 表示 NUL字节
    // 请注意，由于此时的\n换行符在\0之后，因此我们在打印时该字符就会被截断
    const char *str = "Hello, World!\0\n";
    printf("%s", str);
    return 0;
}