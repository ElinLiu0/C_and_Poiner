#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	const int number = 9;
	// ��ʱnumber�ķ���Ϊ��-10����Դ�ڹ�ʾ��~n = -(n+1)
	printf("%d�İ�λ�����ǣ�%d\n",number ,~number);
	system("PAUSE");
	return 0;
}