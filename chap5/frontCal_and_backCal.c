#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int number = 2;
	// ��ʱresultΪ2����++�ķ�Զ˳�����Ƚ�number��ֵ��result��Ȼ����ִ��++����
	int result = number++;
	printf("Numberǰ++�Ľ��Ϊ��%d\n",result);
	printf("Number��++�Ľ��Ϊ��%d\n",number);
	return 0;
}