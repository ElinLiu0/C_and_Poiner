// Author: Elin.Liu
// Date: 2022-09-12 14:13:52
// Last Modified by:   Elin.Liu
// Last Modified time: 2022-09-12 14:13:52

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int negate(int x)
{
    if (x < 0)
    {
        return abs(x);
    }
    else
    {
        return -abs(x);
    }
}