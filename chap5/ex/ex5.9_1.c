// Author: Elin.Liu
// Date: 2022-10-01 17:50:54
// Last Modified by:   Elin.Liu
// Last Modified time: 2022-10-01 17:50:54

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// 创建Lower函数来实现对字符串中大写的转换为小写
void lower(char *s)
{
    // 创建一个循环来实现对指针所有字符的遍历
    for (int i = 0; i < strlen(s); i++)
    {
        // 如果该值的ASCII码值在65-90之间，即为大写字母
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            // 因为大写字母的ASCII码值比小写字母的ASCII码值大32，所以可以通过加32来实现转换
            s[i] += 'a' - 'A';
        }
    }
}

int main(void)
{
    char s[] = "Hello World!";

    printf("Before Change : %s\n", s);
    lower(s);
    printf("After Change : %s\n", s);
    return 0;
}