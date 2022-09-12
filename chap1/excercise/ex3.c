// Author: Elin.Liu
// Date: 2022-09-12 12:33:55
// Last Modified by:   Elin.Liu
// Last Modified time: 2022-09-12 12:33:55

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX_INPUT_LENGTH 100
int main(void)
{
    unsigned char checksum = -1;
    char input[MAX_INPUT_LENGTH];
    fgets(input, MAX_INPUT_LENGTH, stdin);
    for (int i = 0; i < strlen(input); i++)
    {
        checksum += input[i];
    }
    printf("%s", input);
    printf("%d\n", checksum);
    exit(EXIT_SUCCESS);
}