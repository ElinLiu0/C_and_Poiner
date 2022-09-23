// Author: Elin.Liu
// Date: 2022-09-22 20:35:48
// Last Modified by:   Elin.Liu
// Last Modified time: 2022-09-22 20:35:48

#include <stdlib.h>

int NumberConvert(int mode, int number)
{
    switch (mode)
    {
    case 16:
        return number;
    case 32:
        long changeResult = (int)number;
        return changeResult;
    case 64:
        unsigned long changeResult = (int)number;
        return changeResult;
    }