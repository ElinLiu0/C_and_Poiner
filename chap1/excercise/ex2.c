// Author: Elin.Liu
// Date: 2022-09-05 14:54:11
// Last Modified by:   Elin.Liu
// Last Modified time: 2022-09-05 14:54:11

#include <stdlib.h>
#include <stdio.h>
#define true 1
#define MAX_INPUT_LENGTH 100
int main(void)
{
    int cols = 1;
    char input[MAX_INPUT_LENGTH];
    while (true)
    {
        fgets(input, MAX_INPUT_LENGTH, stdin);
        if (input == "quit" || input == "exit" || input == "q")
        {
            printf("%s", "程序结束");
            exit(EXIT_SUCCESS);
        }
        else
        {
            printf("%d: %s", cols, input);
            cols++;
            continue;
        }
    }
}