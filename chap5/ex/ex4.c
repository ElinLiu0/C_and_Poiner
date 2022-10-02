// Author: Elin.Liu
// Date: 2022-10-01 13:55:00
// Last Modified by:   Elin.Liu
// Last Modified time: 2022-10-01 13:55:00
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define true 1;
#define false 0;

int if_func(int num)
{
    if (num > 3)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int logic_func(int num)
{
    // The Simple,the Speed
    const int result = num > 3 ? 0 : 1;
    return result;
}

void main(void)
{
    const int num = 10;
    clock_t if_start, if_end, log_start, log_end;
    if_start = clock();
    int if_result = if_func(num);
    if_end = clock();
    printf("Using If Expression Executed in : %.4f milliseconds.\n", difftime(if_end, if_start));
    log_start = clock();
    int log_result = logic_func(num);
    log_end = clock();
    printf("Using logic Expression Exectued in : %.4f milliseconds.\n", difftime(log_end, log_start));
    return 0;
}