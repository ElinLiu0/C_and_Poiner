// Author: Elin.Liu
// Date: 2022-09-22 20:55:20
// Last Modified by:   Elin.Liu
// Last Modified time: 2022-09-22 20:55:20

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    enum coin
    {
        penny = 1,
        nickel = 5,
        dime = 10,
        quarter = 25
    };
    enum coin c = penny;
    printf("The value of penny is : %d\n", c);
    return 0;
}