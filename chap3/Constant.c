//Author: Elin.Liu
//Date: 2022-09-18 14:09:27
//Last Modified by:   Elin.Liu
//Last Modified time: 2022-09-18 14:09:27

#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

int main(void)
{
    // 此时pi是一个普通的指向整形的指针
    int *pi;
    // 此时pci是一个指向整型常量的指针，可以修改指针的值，但不能修改它所指向的值
    int const *pci;
    // 则声明pci为一个指向整型的常量指针。此时指针是常量，它的值无法修改，但它可以修改它所指向的整形的值
    int *const cpi;
    // 此时cpci这个例子里，无论是指针本身还是它所指向的值都是常量，不允许修改
    int const * const cpci;
    int value = 10;
    // 修改pi的值
    pi = &value;
    // 修改pci的值
    pci = &value;
    // 修改cpi的值，此时会报错，因为它是一个常量指针
    // cpi = 10;
    // 但此时可以修改cpi所指向的值
    // cpi = &value;
    // 修改cpci的值，此时会报错，因为它是一个常量指针
    // cpci = pi;
    // *cpci = 10;
    printf("pi = %d\n",*pi);
    printf("pci = %d\n",*pci);
    printf("cpi = %p\n",cpi);
    printf("cpci = %p\n",cpci);
    return 0;
}