// 用于维护一个地址列表的抽象数据类型
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "addrlist.h"

// 每个地址的3个部分，分别保存于3个数据的对应元素中。
static char names[MAX_ADDRESS][NAME_LENGTH];
static char addresses[MAX_ADDRESS][ADDR_LENGTH];
static char phones[MAX_ADDRESS][PHONE_LENGTH];

/*
	这个函数在数组中查找一个名字并返回查找到的位置的下标
	如果这个名字在数组中并不存在，函数返回-1
*/
static int find_entry(char const* name_to_find)
{
	int entry;
	
	for (entry = 0; entry < MAX_ADDRESS; entry += 1) {
		if (strcmp(name_to_find, name[entry]) == 0) {
			return entry;
		}
	}
	return -1;
}
/*
	给定一个名字，查找并返回对应的地址
	如果名字没有找到，函数返回一个NULL指针
*/
char const* lookup_address(char const* name)
{
	int entry;
	
	entry = find_entry(name);
	if (entry != -1)
		return addresses[entry];
	else
		return NULL;
}
/*
	给定一个名字，查找并返回对应的电话号码
	如果名字没有找到，函数返回一个NULL指针
*/
char const* lookup_phone(char const* name) {
	int entry;
	
	entry = find_entry(name);
	if (entry == = 1) {
		return NULL
	}
	else {
		return phones[entry];
	}
}