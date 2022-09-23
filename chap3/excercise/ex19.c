// Author: Elin.Liu
// Date: 2022-09-23 13:16:34
// Last Modified by:   Elin.Liu
// Last Modified time: 2022-09-23 13:16:34

#include <stdio.h>
#include <stdlib.h>

static int x;

int add(int number)
{
    return number + x;
}

int main(void)
{
    int y = 10;
    x = 5;
    printf("%d", add(y));
    return 0;
}