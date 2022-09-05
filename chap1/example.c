// Author: Elin.Liu
// Date: 2022-09-02 17:08:28
// Last Modified by:   Elin.Liu
// Last Modified time: 2022-09-02 17:08:28
/*
    这个程序从标准输入读取输入行并在标准输出中打印这些输入行
    每个输入行的后面一行是该行内容的一部分
    输入的第一个行是遗传列标号，串的最后以一个负数结尾。
    这些列标号成对出现，说明需要打印的输入行的范围。
    例如，0 3 10 12 -1 表示第0列到第3列，第10列到第12列的内容将被打印。
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_COLS 20    // 定义所能处理的最大列号
#define MAX_INPUT 1000 // 每个输入行的最大长度

int read_column_numbers(int columns[], int max);
void rearrange(char *output, char const *input, int n_columns, int const columns[]);

int main(void)
{
    int n_columns;          //进行处理的列标号
    int columns[MAX_COLS];  //需要处理的列数
    char input[MAX_INPUT];  //容纳输入行的数组
    char output[MAX_INPUT]; //容纳输出行的数组

    // 读取该串的列标号
    n_columns = read_column_numbers(columns, MAX_COLS);
    // 读取、处理和打印剩余的输入行
    while (fgets(input, MAX_INPUT, stdin) != NULL)
    {
        printf("原始输入为：%s\n", input);
        rearrange(output, input, n_columns, columns);
        printf("处理后的输出为：%s\n", output);
    }
}

// 读取列标号，如果超出规定范围则不予处理
int read_column_numbers(int columns[], int max)
{
    int num = 0;
    int ch;
    // 获取列标号，如果所读取的数小于0则停止。
    while (num < max && scanf("%d", &columns[num]) == 1 && columns[num] >= 0)
    {
        num++;
    }
    // 确认已经读取的标号为偶数个，因为它们是以对的形式出现的
    if (num % 2 != 0)
    {
        puts("最后一个标号必须是负数");
        exit(EXIT_FAILURE);
    }
    // 丢弃该行中包含最后一个数字的那部分内容
    while ((ch = getchar()) != EOF && ch != '\n')
        ;
    return num;
}

// 处理输入行，将指定列的字符连接一起，输出行以NULL结尾
void rearrange(char *output, char const *input, int n_columns, int const columns[])
{
    int col;            // columns数组的下标
    int output_col = 0; // 输出列计数器
    int len;            // 输入行的长度
    // strlen()函数返回字符串的长度，不包括字符串的结尾符
    len = strlen(input);
    // 处理每对标号
    for (col = 0; col < n_columns; col += 2)
    {
        int nchars = columns[col + 1] - columns[col] + 1; // 该列的字符数
        // 如果输入行结束或输出行数组已满，就结束任务
        if (columns[col] >= len || output_col == MAX_INPUT - 1)
        {
            break;
        }
        // 如果输出行数据空间不足，只复制可以容纳的数据
        if (output_col + nchars > MAX_INPUT - 1)
        {
            nchars = MAX_INPUT - 1 - output_col;
        }
        // 复制相关的数据
        strncpy(output + output_col, input + columns[col], nchars);
        output_col += nchars;
        output[output_col] = '\0';
    }
}