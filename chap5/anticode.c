#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	const int number = 9;
	// 此时number的反码为：-10，来源于公示：~n = -(n+1)
	printf("%d的按位反码是：%d\n",number ,~number);
	system("PAUSE");
	return 0;
}