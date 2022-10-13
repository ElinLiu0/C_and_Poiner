#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int* p;
	// 此时p的初始化内存地址为0x00AF2A20
	p = (int*)malloc(sizeof(int));
	printf("Initailze p at 0x%p\n", p);
	// 使用realloc()函数对其进行扩展
	p = realloc(p, sizeof(int) * 3);
	// 重新扩展后，因为p的物理定义发生了变化，因此p的内存地址变更为Ox00AF1E20
	printf("Realloc p at Ox%p\n", p);
	free(p);
	return 0;
}