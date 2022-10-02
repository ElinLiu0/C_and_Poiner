// Author: Elin.Liu
// Date: 2022-10-01 14:11:28
// Last Modified by:   Elin.Liu
// Last Modified time: 2022-10-01 14:11:28
#include <stdlib.h>
#include <stdio.h>

int is_leap_year(int year)
{
    const int result = year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ? 1 : 0;
    return result;
}

int main(void)
{
    const int year = 2020;
    const int result = is_leap_year(year);
    printf("%d %s\n", year, result == 1 ? "is a leap year" : "is not a leap year");
    return 0;
}