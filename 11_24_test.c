#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (int j = 0; j < 10; j++)
	{
		arr[j] = j + 1;
	}
	for (i = 0; i <= 12; i++)
	{
		printf("haiya!\n");
		arr[i] = 0;
	}
	system("pause");
	return 0;
}