#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	// ��ʱnumber�Ķ�������ʽΪ��010
	const int number = 2;
	// ������λ�Ľ��Ϊ��010000
	int leftMoving = number << 3;
	const int number_2 = 0x10010110;
	// ������λ�Ľ��Ϊ��000010
	int rightMoving = number_2 >> 3;
	printf("���ƺ�Ľ��Ϊ��%d\n", leftMoving);
	printf("���ƺ�Ľ��Ϊ��%d\n", rightMoving);
	return 0;
}