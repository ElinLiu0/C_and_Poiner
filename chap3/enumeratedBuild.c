// Author: Elin.Liu
// Date: 2022-09-15 15:11:11
// Last Modified by:   Elin.Liu
// Last Modified time: 2022-09-15 15:11:11
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    // 使用enum关键字定义枚举类型数据
    enum Jar_Type
    {
        CUP,
        PINT,
        QUART,
        HALF_GALLON,
        GALLON
    };
    // 这种类型的变量按照下列方式声明
    enum Jar_Type milh_jug, gas_can, medicine_bottle;
    // 如果某种特别的枚举类型的变量只使用一个声明。就可以把上面两条语句进行合并
    enum Jar_Type
    {
        CUP,
        PINT,
        QUART,
        HALF_GALLON,
        GALLON
    } milh_jug,
        gas_can, medicine_bottle;
    // 适当的时候，可以为这些符号民指定的整形值
    enum Jar_Type
    {
        CUP = 8,
        PINT = 16,
        QUART = 32,
        HALF_GALLON = 64,
        GALLON = 128
    };
}
