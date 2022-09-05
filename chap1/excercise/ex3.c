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