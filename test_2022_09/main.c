#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>
#include<time.h>
#include<stdlib.h>

/*
* ��ת����
* ����һ�����飬�������е�Ԫ�������ƶ�k��λ�ã�����k�ǷǸ���
*/

////�ռ临�Ӷ�O(1)
//void RotateArr1(int* destination, size_t number, size_t k)
//{
//	assert(destination && number);
//	int k1 = k % number;
//	int tmp = *destination;
//	int i = 0;
//
//	for (k = 1; k <= k1; k++)		//����k1���ƶ�
//	{
//		tmp = *destination;
//		for (i = 0; i < number - 1; i++)
//		{
//			//�����ƶ�1λ
//			destination[i] = destination[i + 1];
//		}
//		destination[i] = tmp;
//	}
//}

void exchange(int* number1, int* number2)
{
	assert(number1 && number2);
	int tmp = *number1;
	if (!(number1 == number2))
	{							//�����ַ��ͬһ����ַ���Ͳ�������
		*number1 = *number2;
		*number2 = tmp;
	}
}
//�ռ临�Ӷ�O(N)
// ԭ���㷨
void RotateArr2(int* destination, size_t number, size_t k)
{
	assert(destination && number);
	int k1 = k % number;
	int i = 0;
	int* beging = destination;
	int* end = destination + number - k1;
	for (i = 0; i < (number - k1) / 2; i++)
	{
		exchange(beging + i, end - i - 1);		//��תǰn����
	}
	for (i = 0; i < k1 / 2; i++)
	{
		exchange(end, beging + number - i - 1);	//��ת��n����
	}
	for (i = 0; i < number / 2; i++)
	{
		exchange(beging + i, beging + number - i - 1);	//���嵹ת�õ���ת
	}
}

int main()
{
	//int m;
	//float x;
	////x = (0.003 * 100 + 0.5) / 100.0;
	//m = 0.006 * 100 + 0.5;
	//x = m / 100.0;
	//
	//printf("%f", x);

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	RotateArr2(arr, 10, 100);

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}


/*
* ����nums������0��n������������������ȱ��һ��
* ���д�����ҳ�ȱʧ��������Ҫ��	O(N)
*/

//����[3 0 1]
//��� 2

//int NoNumberSearch1(int* sourse, size_t number)
//{
//	int i = 0;
//	int sum_number = 0;
//	int sum_sourse = 0;
//	for (i = 0; i < number; i++)
//	{
//		sum_number += i;
//		sum_sourse += sourse[i];
//	}
//	sum_number += i;
//	return sum_number - sum_sourse;
//}
////ȫ�Ӻ�ȫ���������Ա߽�ЧӦ
//
//int NoNumberSearch2(int* sourse, size_t number)
//{
//	assert(sourse && number);
//	int last = 0;
//	int i = 0;
//
//	for (i = 0; i < number; i++)
//	{
//		last ^= i;			//ȫ�������ٺ������е�ֵ���
//		last ^= sourse[i];
//	}
//
//	return last ^= i;		//���һ����
//}	//�����Ա߽�ЧӦ
//
//int main()
//{
//	//qsort()��������->ʱ�临�Ӷ� O(N * logN)
//	//Ѱ������(0,n)��ȱ�ٵ�һ������
//	int arr[5] = { 0,1,5,3,4 };
//	printf("%d\n", NoNumberSearch2(arr, 5));
//
//	return 0;
//}

//�ռ临�Ӷ�

////ð������ O(1)
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

//�׳˵ݹ�Ŀռ临�Ӷ�Ϊ O(N)
//�ݹ鿴���

//쳲��������еĿռ临�Ӷ�Ϊ O(N)
//�ռ��ǿ����ظ����ò��ۼƵģ�ʱ���ǲ����ظ����ã��ۼƵ�


////�ݹ�׳�
//long long Fib(size_t N)
//{
//	if (N < 3)
//	{
//		return 1;
//	}
//	return Fib(N - 1) + Fib(N-2);
//}
//
////�ݹ�׳�
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

//���ֲ��� O(logN)
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
////���ֲ��ҵ�ʱ�临�Ӷ�
////������O(1)
////����O(logN)
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
//	int l_pots = left;		//����һ��δ����Ԫ��
//	int r_pots = mid + 1;	//�Ұ��һ��δ����Ԫ��
//	int pots = left;		//��ʱ�м�Ԫ��
//
//	//�ϲ�
//	while (l_pots <= mid && r_pots <= right)
//	{
//		if (arr[l_pots] < arr[r_pots])
//		{
//			tmparr[pots++] = arr[l_pots++];		//����
//		}
//		else
//		{
//			tmparr[pots++] = arr[r_pots++];
//		}
//	}
//	while (l_pots <= mid)
//	{
//		tmparr[pots++] = arr[l_pots++];		//�ϲ������ʣ���Ԫ��
//	}
//	while (r_pots <= right)
//	{
//		tmparr[pots++] = arr[r_pots++];		//�ϲ��Ұ���ʣ���Ԫ��
//	}
//
//	while (left <= right)
//	{
//		arr[left] = tmparr[left];
//		left++;								//����ת��
//	}
//
//}
//
//void M_Sort(int* arr, int* tmparr, int left, int mid, int right)
//{
//	//���һ�����飬���������ָ����
//	int l_pots = left;
//	int r_pots = mid + 1;
//	int pots = left;
//
//	while (l_pots <= mid && r_pots <= right)
//	{
//		if (arr[l_pots] < arr[r_pots])
//		{
//			tmparr[pots++] = arr[l_pots++];		//����������
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
//	//ֻ��һ��Ԫ�ز�����
//	if (left < right)
//	{
//		int mid = (left + right) / 2;
//		merge(arr, tmparr, left, mid);		//�м��ݹ黮��
//		merge(arr, tmparr, mid+1, right);
//
//		M_Sort(arr, tmparr, left, mid, right);				//���򲢺ϲ�����
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

////����
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
////�������򡪡�ʼ�ձ�֤��������ռ���˳����ȷ
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
////ѡ�����򡪡�ѡ��ʣ��Ԫ������С��Ԫ�طŵ���һ��Ԫ��λ��
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

////ð������
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
////���ֲ���
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