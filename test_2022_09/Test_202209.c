#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

void ExChange(int* x, int* y)
{
	int Tmp = *x;
	*x = *y;
	*y = Tmp;
}

//插入排序——始终保证已排序过空间内顺序正确
void InserdSort(int* arr, int n)
{
	int end = 1;
	int i = 0;
	while (end < n)
	{
		for (i = end; i; i--)
		{
			if (arr[i] < arr[i - 1])
			{
				ExChange((&arr[i]), &(arr[i - 1]));
			}
		}
		end++;
	}
}
//选择排序——选择剩余元素中最小的元素放到第一个元素位置
void SelectSort(int* begin, int n)
{
	int* select = begin;
	int i = 0;
	while (begin != begin + n)
	{

		for (i = 1; i < n; i++)
		{
			if (*select > begin[i])
			{
				select = begin + i;
			}
		}
		ExChange(select, begin);
		n--;
		select = ++begin;
	}
}

int main()
{
	int arr[10] = { 9,7,5,2,3,1,4,6,8,10 };
	int i = 0;

	SelectSort(arr, 10);

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}

////冒泡排序
//void BubbleSort(int* a, int n)
//{
//	assert(a);
//	size_t end = 0, i = 0;
//	for (end = n; end > 0; --end)
//	{
//		int exchange = 0;
//		for (i = 1; i < end; ++i)
//		{
//			if (a[i - 1] > a[i])
//			{
//				
//				int Tmp = a[i];
//				a[i] = a[i - 1];
//				a[i - 1] = Tmp;
//				exchange = 1;
//			}
//		}
//		if (!exchange)
//		{
//			break;
//		}
//	}
//}
//
////二分查找
//int BinarySearch(int* a, int n, int x)
//{
//	assert(a);
//	
//	int begin = 0;
//	int end = n - 1;
//	while (begin < end)
//	{
//		int mid = begin + ((end - begin) >> 1);
//		if (a[mid] < x)
//		{
//			begin = mid + 1;
//		}
//		else if (a[mid] > x)
//		{
//			end  = mid;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//}
//
//#define N 10
//
//int main()
//{
//	int arr[10] = { 5,6,7,8,9,10,11,12,13 ,14 };
//	printf("%d\n", BinarySearch(arr, 10, 9));
//
////	int arr[N] = { 1,2,5,3,1,7,2,4,8,9 };
////	int i = 0;
////	BubbleSort(&arr, N);
////
////	for (i = 0; i < N; i++)
////	{
////		printf("%d ", arr[i]);
////	}
////	printf("\n");
////	return 0;
//}