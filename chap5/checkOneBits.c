#include <stdio.h>
#include <stdlib.h>
/*��ʼ�����������ڼ������ֵ�е�1�ĸ���*/
int count_one_bits(unsigned value)
{
	int ones;
	// ����Щֵ�л���Ϊ1��λʱ
	for (ones = 0; value != 0; value = value >> 1) {
		// ������λΪ1ʱ���������+1
		if (value % 2 != 0)
			ones = ones + 1;
	}
	return ones;
}
void main(void)
{
	const int value = 32312;
	printf("��Value�й����ڣ�%d��1λ\n", count_one_bits(value));
	return 0;
}