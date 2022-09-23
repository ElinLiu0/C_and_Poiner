// Author: Elin.Liu
// Date: 2022-09-22 20:41:04
// Last Modified by:   Elin.Liu
// Last Modified time: 2022-09-22 20:41:04

#include <stdio.h>
#include <stdlib.h>
#include "TypeChange.h"

int main(void)
{
    int i = 100;
    int mode = 64;
    const int result = TypeChnage(i, mode);
    printf("After convert is : %d", result);
    return 0;
}