// Author: Elin.Liu
// Date: 2022-09-16 20:30:27
// Last Modified by:   Elin.Liu
// Last Modified time: 2022-09-16 20:30:27
#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main(void)
{
    printf("Min of float is %f\n", FLT_MIN);
    printf("Max of float is %f\n", FLT_MAX);
    printf("Min of double is %f\n", DBL_MIN);
    printf("Max of double is %f\n", DBL_MAX);
    printf("Min of long double is %Lf\n", LDBL_MIN);
    // 太大了，还是别打印了
    // printf("Max of long double is %Lf\n", LDBL_MAX);
    return 0;
}