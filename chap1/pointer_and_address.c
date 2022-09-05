#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
/*
    创建一个函数用于打印传入的char类型指针
*/
void printWords(char *word)
{
    printf("%s", word);
}

int main(void)
{
    /* 初始化char类型数组字符串 */
    char Hello[] = "HelloWorld\n";
    /* 调用printWords函数，在这里我们传入Hello给函数，
    虽然函数原型中形参的类型是char类型的指针，但是在这时
    Hello传入时，被看做是一个描述了char数组的内存地址
    因此，这也是函数在编译时不会抛出异常的原因 */
    printWords(Hello);
    exit(EXIT_SUCCESS);
}