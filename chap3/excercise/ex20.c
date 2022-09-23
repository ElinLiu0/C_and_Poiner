// Author: Elin.Liu
// Date: 2022-09-23 13:38:18
// Last Modified by:   Elin.Liu
// Last Modified time: 2022-09-23 13:38:18
#include <stdio.h>
#include <stdlib.h>
char b = 2;
int x(void)
{
    static int a = 1;
    int c = 3;
    static float d = 4.0;
}

int y(int num)
{
    return num + b;
}
