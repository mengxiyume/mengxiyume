#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

void m_sort(int* arr, int* tmparr, int left, int mid, int right)
{
	int l_pots = left;		//����һ��δ����Ԫ��
	int r_pots = mid + 1;	//�Ұ��һ��δ����Ԫ��
	int pots = left;		//��ʱ�м�Ԫ��

	//�ϲ�
	while (l_pots <= mid && r_pots <= right)
	{
		if (arr[l_pots] < arr[r_pots])
		{
			tmparr[pots++] = arr[l_pots++];		//����
		}
		else
		{
			tmparr[pots++] = arr[r_pots++];
		}
	}
	while (l_pots <= mid)
	{
		tmparr[pots++] = arr[l_pots++];		//�ϲ������ʣ���Ԫ��
	}
	while (r_pots <= right)
	{
		tmparr[pots++] = arr[r_pots++];		//�ϲ��Ұ���ʣ���Ԫ��
	}

	while (left <= right)
	{
		arr[left] = tmparr[left];
		left++;								//����ת��
	}

}

void M_Sort(int* arr, int* tmparr, int left, int mid, int right)
{
	//���һ�����飬���������ָ����
	int l_pots = left;
	int r_pots = mid + 1;
	int pots = left;

	while (l_pots <= mid && r_pots <= right)
	{
		if (arr[l_pots] < arr[r_pots])
		{
			tmparr[pots++] = arr[l_pots++];		//����������
		}
		else
		{
			tmparr[pots++] = arr[r_pots++];
		}
	}
	while (l_pots <= mid)
	{
		tmparr[pots++] = arr[l_pots++];
	}
	while (r_pots <= right)
	{
		tmparr[pots++] = arr[r_pots++];
	}
	while (left <= right)
	{
		arr[left] = tmparr[left++];
	}
}

void merge(int* arr, int* tmparr, int left, int right)
{
	//ֻ��һ��Ԫ�ز�����
	if (left < right)
	{
		int mid = (left + right) / 2;
		merge(arr, tmparr, left, mid);		//�м��ݹ黮��
		merge(arr, tmparr, mid+1, right);

		M_Sort(arr, tmparr, left, mid, right);				//���򲢺ϲ�����
	}
}

void MegreSort(int* arr, size_t n)
{
	int* tmparr = (int*)calloc(1, n * sizeof(int));
	if (tmparr)
	{
		merge(arr, tmparr, 0, n - 1);
		free(tmparr);
		tmparr = NULL;
	}
	else
	{
		perror("");
	}
}

int main()
{
	int i = 0;
	int arr[10] = { 9,7,5,2,3,1,4,6,8,10 };
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	MegreSort(arr, 10);

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}

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