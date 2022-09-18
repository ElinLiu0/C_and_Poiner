// Author: Elin.Liu
// Date: 2022-09-12 14:15:35
// Last Modified by:   Elin.Liu
// Last Modified time: 2022-09-12 14:15:35

#include "increment.h"
#include "negate.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const int x = -5;
    printf("Original value of x: %d\n", x);
    printf("Increment of %d is %d\n", x, increment(x));
    printf("Negate of %d is %d\n", x, negate(x));
    return 0;
}
