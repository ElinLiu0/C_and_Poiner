#include <stdio.h>
#include <stdlib.h>
#include <netioapi.h>
int clear_bits(unsigned value)
{
	const int bit_number = 0;
	for (bit_number; value != 0; value = value & -(1 << bit_number)) {
		value & 1 << bit_number;
	}
	return value;
}

int main(void)
{
	const int number = 0x2;
	printf("清空位后的结果：%d\n", number);
	return 0;
}