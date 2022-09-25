// Author by : Elin
// Last Modified : 2022-09-25 18:43
// File Name : Multiple_In_Case_Switch.c
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int user_number;
	printf("Enter the number between 1 and 5: ");
	scanf("%d", &user_number);
	switch (user_number) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 0:
		printf("Invalid Input number,excepted 1-5!");
	}
	// 请注意：case 关键字技能实现对值的判断。并不能对一个抽象的逻辑进行判断
}