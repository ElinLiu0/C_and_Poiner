// Author: Elin.Liu
// Date: 2022-09-23 14:29:10
// Last Modified by:   Elin.Liu
// Last Modified time: 2022-09-23 14:29:10

#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char word[20];
    do
    {
        printf("Just input something : ");
        scanf("%s", &word);
        printf("What your input is : %s\n", word);
    } while (1);
}