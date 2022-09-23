// Author: Elin.Liu
// Date: 2022-09-22 20:45:28
// Last Modified by:   Elin.Liu
// Last Modified time: 2022-09-22 20:45:28

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    const long int i = 100;
    const short int s = i;
    printf("After convert is : %d\n", s);
    const double d = 100.0;
    const float f = d;
    printf("After convert is : %f\n", f);
    return 0;
}