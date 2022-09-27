#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>
#include<time.h>
#include<stdlib.h>

//空间复杂度

////冒泡排序 O(1)
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

//阶乘递归的空间复杂度为 O(N)
//递归看深度

//斐波那契数列的空间复杂度为 O(N)
//空间是可以重复利用不累计的，时间是不能重复利用，累计的

int main()
{


	return 0;
}

////递归阶乘
//long long Fib(size_t N)
//{
//	if (N < 3)
//	{
//		return 1;
//	}
//	return Fib(N - 1) + Fib(N-2);
//}
//
////递归阶乘
//long long Fac(size_t N)
//{
//	if (!N)
//	{
//		return 1;
//	}
//	return Fac(N - 1) * N;
//}
//
//int main()
//{
//	printf("%ld\n", Fib(10));
//	return 0;
//}

//size_t BitPut(size_t n)
//{
//	if (n)
//	{
//		BitPut(n / 2);
//		printf("%d", n % 2);
//	}
//	return n;
//}
//
//void BitPut1(size_t n)
//{
//	if (!n)
//	{
//		printf("0");
//	}
//	BitPut(n);
//}
//
//void BitPut2(size_t number)
//{
//#define INT_SIZE 32
//	int arr[INT_SIZE] = { 0 };
//	int i = 0, j = 0;
//	int symbol = ((int)number >= 0) ? 0 : 1;
//	if (symbol)
//	{
//		number++;
//	}
//	for (i = 0;i < INT_SIZE; i++)
//	{
//		if (number)
//		{
//			arr[i] = number % 2;
//			number /= 2;
//		}
//		else
//		{
//			arr[i] = symbol;
//		}
//	}
//	while (--i)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("%d", arr[0]);
//}
//
//int main()
//{
//	BitPut1(-0);
//
//	return 0;
//}

//二分查找 O(logN)
//int BinarySearch(int* const arr, size_t count, int destination)
//{
//	assert(arr && count);
//
//	int begin = 0;
//	int end = count;
//	int mid = (count - 1) >> 1;
//
//	while (begin < end)
//	{
//		mid = begin + ((end - begin) >> 1);
//		if (arr[mid] < destination)
//		{
//			begin = mid + 1;
//		}
//		else if (arr[mid] > destination)
//		{
//			end = mid;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return EOF;
//}
//
//#define MAX 500
//#define INIT(X,Y) for (i = 0; i < (X); i++)arr[i] = (Y) + (i);
//
//
//int main()
//{
//	int i = 0;
//	int arr[MAX] = { 0 };
//
//	INIT(MAX,100);
//
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//#include<stdlib.h>
//
////二分查找的时间复杂度
////最好情况O(1)
////最坏情况O(logN)
//
//int BinarySearch(int* arr, size_t count, int destination)
//{
//	assert(arr && count);
//
//	int begin = 0;
//	int end = count - 1;
//
//	while (begin < end)
//	{
//		int mid = begin + ((end - begin) >> 1);
//		if (arr[mid] < destination)
//		{
//			begin = mid + 1;
//		}
//		else if (arr[mid] > destination)
//		{
//			end = mid;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return EOF;
//}
//
//#define INIT(X) for (i = 0; i < X; i++)arr[i] = 100 + i;
//
//int main()
//{
//	int i = 0;
//	int arr[100] = { 0 };
//
//	INIT(100);
//
//	printf("%d\n", arr[BinarySearch(arr, 100, 125)]);
//
//	return 0;
//}

//void m_sort(int* arr, int* tmparr, int left, int mid, int right)
//{
//	int l_pots = left;		//左半第一个未排序元素
//	int r_pots = mid + 1;	//右半第一个未排序元素
//	int pots = left;		//临时中间元素
//
//	//合并
//	while (l_pots <= mid && r_pots <= right)
//	{
//		if (arr[l_pots] < arr[r_pots])
//		{
//			tmparr[pots++] = arr[l_pots++];		//排序
//		}
//		else
//		{
//			tmparr[pots++] = arr[r_pots++];
//		}
//	}
//	while (l_pots <= mid)
//	{
//		tmparr[pots++] = arr[l_pots++];		//合并左半区剩余的元素
//	}
//	while (r_pots <= right)
//	{
//		tmparr[pots++] = arr[r_pots++];		//合并右半区剩余的元素
//	}
//
//	while (left <= right)
//	{
//		arr[left] = tmparr[left];
//		left++;								//数据转移
//	}
//
//}
//
//void M_Sort(int* arr, int* tmparr, int left, int mid, int right)
//{
//	//获得一个数组，排序该数组指定段
//	int l_pots = left;
//	int r_pots = mid + 1;
//	int pots = left;
//
//	while (l_pots <= mid && r_pots <= right)
//	{
//		if (arr[l_pots] < arr[r_pots])
//		{
//			tmparr[pots++] = arr[l_pots++];		//排序获得数组
//		}
//		else
//		{
//			tmparr[pots++] = arr[r_pots++];
//		}
//	}
//	while (l_pots <= mid)
//	{
//		tmparr[pots++] = arr[l_pots++];
//	}
//	while (r_pots <= right)
//	{
//		tmparr[pots++] = arr[r_pots++];
//	}
//	while (left <= right)
//	{
//		arr[left] = tmparr[left++];
//	}
//}
//
//void merge(int* arr, int* tmparr, int left, int right)
//{
//	//只有一个元素不划分
//	if (left < right)
//	{
//		int mid = (left + right) / 2;
//		merge(arr, tmparr, left, mid);		//中间点递归划分
//		merge(arr, tmparr, mid+1, right);
//
//		M_Sort(arr, tmparr, left, mid, right);				//排序并合并数组
//	}
//}
//
//void MegreSort(int* arr, size_t n)
//{
//	int* tmparr = (int*)calloc(1, n * sizeof(int));
//	if (tmparr)
//	{
//		merge(arr, tmparr, 0, n - 1);
//		free(tmparr);
//		tmparr = NULL;
//	}
//	else
//	{
//		perror("");
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 9,7,5,2,3,1,4,6,8,10 };
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	MegreSort(arr, 10);
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	return 0;
//}

////丑数
//_Bool IsUgly(int number)
//{
//	if (number <= 5)
//	{
//		return NULL;
//	}
//	while (!(number % 2))
//		number /= 2;
//	while (!(number % 3))
//		number /= 3;
//	while (!(number % 5))
//		number /= 5;
//	return (number == 1) ? 1 : 0;
//}
//
//int main()
//{
//	long long int i = 0;
//	int n = 0;
//	while (n < 1500)
//	{
//		if (IsUgly(i))
//		{
//			if (n == 1500 - 1)
//			{
//				printf("%lld\n", i);
//			}
//			n++;
//		}
//		i++;
//	}
//
//	return 0;
//}

//void ExChange(int* x, int* y)
//{
//	int Tmp = *x;
//	*x = *y;
//	*y = Tmp;
//}
//
////插入排序——始终保证已排序过空间内顺序正确
//void InserdSort(int* arr, int n)
//{
//	int end = 1;
//	int i = 0;
//	while (end < n)
//	{
//		for (i = end; i; i--)
//		{
//			if (arr[i] < arr[i - 1])
//			{
//				ExChange((&arr[i]), &(arr[i - 1]));
//			}
//		}
//		end++;
//	}
//}
////选择排序——选择剩余元素中最小的元素放到第一个元素位置
//void SelectSort(int* begin, int n)
//{
//	int* select = begin;
//	int i = 0;
//	while (begin != begin + n)
//	{
//
//		for (i = 1; i < n; i++)
//		{
//			if (*select > begin[i])
//			{
//				select = begin + i;
//			}
//		}
//		ExChange(select, begin);
//		n--;
//		select = ++begin;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 9,7,5,2,3,1,4,6,8,10 };
//	int i = 0;
//
//	SelectSort(arr, 10);
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

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