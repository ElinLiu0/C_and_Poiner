//Author: Elin.Liu
//Date: 2022-09-18 00:07:07
//Last Modified by:   Elin.Liu
//Last Modified time: 2022-09-18 00:07:07

#include <stdio.h>
#include <stdlib.h>

// 使用typedef关键字，将char类型指针重定向成ptr_to_char
typedef char *ptr_to_char;

int main(void)
{
    const ptr_to_char p = "Hello, world!";
    printf("%s\n", p);
    return EXIT_SUCCESS;
}