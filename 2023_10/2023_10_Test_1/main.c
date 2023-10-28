#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
#include <assert.h>
#include <time.h>
#include <Windows.h>

//����һ���������飬��ɶ�����Ĳ���
//
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��

void init(int arr[], size_t sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

void print(int arr[], size_t sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	putchar('\n');
}

void reverse(int arr[], size_t sz)
{
	int i = 0;

	//�۰룬����
	for (i = 0; i < (sz + 1) / 2; i++)
	{
		int temp = arr[i];
		arr[i] = arr[sz - i - 1];
		arr[sz - i - 1] = temp;
	}
}

void Test_15()
{
	printf("TEST_15_OUT\n");

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	print(arr, _countof(arr));

	reverse(arr, _countof(arr));
	print(arr, _countof(arr));

	init(arr, _countof(arr));
	print(arr, _countof(arr));
}

unsigned char is_prime(int x)
{

	//i�Ŀ�������a*b�����м�ֵ
	int n = (int)sqrt(x);

	int i = 0;
	//3���м�ֵΪֹ�����ܱ�������Ϊ����
	for (i = 3; i <= n; i += 2)
	{
		if (x % i == 0)
		{
			//�ܱ�3���м�ֵ�е�����һ����������Ϊ����
			return 0;
		}
	}
	return 1;
}

unsigned char IsLeapYear(int year)
{
	//���귵��1���������귵��0
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void PutMulTable(int x, int y)
{
	//��ӡ�˷��ھ���x��yȷ����Χ
	int i = 0;
	for (i = 1; i <= x; i++)
	{
		int j = 0;
		for (j = i; j <= y || j <= x; j++)
		{
			printf("%d x %d = %d ", j, i, i * j);
		}
		putchar('\n');
		//��ӡ��һ�л���
	}
}

void Test_14()
{
	printf("TEST_14_OUT\n");

	//int year = 0;
	////PutMulTable(12, 10);
	//while (EOF != scanf("%d", &year))
	//{
	//	if (IsLeapYear(year))
	//	{
	//		printf("%d ������\n", year);
	//	}
	//	else
	//	{
	//		printf("%d ��������\n", year);
	//	}
	//}

	int i = 0;
	for (i = 101; i < 200; i += 2)
	{
		if (is_prime(i))
		{
			printf("%d ", i);
		}
	}

}

//������ʱ��Ԫ�صĵ�ַ������arr������Ϊ int [] ������ֱ�ӷ���ԭ��������ݲ�����
void swap(int arr[])
{
	int temp = arr[0];
	arr[0] = arr[1];
	arr[1] = temp;
}

void Test_13()
{
	printf("TEST_13_OUT\n");

	int arr[] = { 1, 2 };

	swap(arr);

	printf("%d %d", arr[0], arr[1]);

}

void PutArr(int arr[], size_t sz)
{
	int i = 0;

	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//���������������ݣ����������С��ͬ
void Test_12()
{
	printf("TEST_12_OUT\n");

	int i = 0;

	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };

	printf("arr1:");
	PutArr(arr1, _countof(arr1));
	printf("arr2:");
	PutArr(arr2, _countof(arr2));
	printf("\n\n");

	for (i = 0; i < _countof(arr1); i++)
	{
		int temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}

	printf("arr1:");
	PutArr(arr1, _countof(arr1));
	printf("arr2:");
	PutArr(arr2, _countof(arr2));
}

void Test_11()
{
	printf("TEST_11_OUT\n");

	//����ʮ����ֵ�����ƽ��ֵ

	int arr[10] = { 0 };

	int sum = 0;

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < 10; i++)
	{
		sum += arr[i];
	}

	printf("%f\n", sum / 10.0);
}

void Test_10()
{
	printf("TEST_10_OUT\n");
	int a = 0, b = 0;
	int temp = 0;

	scanf("%d%d", &a, &b);

	//ȷ����ʼʱa�е���ֵ��b��
	if (a < b)
	{
		temp = a;
		a = b;
		b = temp;
	}

	//շת�������b����ʱa��ֵ��Ϊ�������
	while (b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}

	printf("%d\n", a);
}

void Test_09()
{
	printf("TEST_09_OUT\n");

	//��ӡ1~100֮�����������
	int i = 0;

	//����2�����Ķ���������������ÿ�����ӵ���ֵΪ2

	for (i = 3; i < 100; i += 2)
	{
		//i�Ŀ�������a*b�����м�ֵ
		int n = (int)sqrt(i);
		int j = 0;

		//�ӵ�һ��������ʼ�����������м�ֵ
		for (j = 3; j < n; j += 2)
		{
			if (i % j == 0)
			{
				continue;
			}
		}
		printf("%d ", i);
	}

}

#define SETUP_COUNT 5

void GuessNumber()
{
	srand((unsigned int)time(NULL) + (unsigned int)GetTickCount64());

	const int nGuessNumber = rand() % 100;
	int nSetup = 0;

	printf("������һ�� 0~100 ֮�����ֵ\n���ǽ�������ʾ,����ֻ�� %d �λ���:>", SETUP_COUNT);

	while (nSetup < SETUP_COUNT)
	{
		int nUserNumber = 0;
		scanf("%d", &nUserNumber);

		if (nUserNumber < 0 || nUserNumber > 100)
		{
			printf("���벻�Ϸ�\n");
			continue;
		}
		else if (nGuessNumber < nUserNumber)
		{
			printf("��µ����ִ���\n");
		}
		else if (nGuessNumber > nUserNumber)
		{
			printf("��µ�����С��\n");
		}
		else
		{
			printf("You are Win !!!\nSteup is %d\n", nSetup);
			break;
		}

		printf(":>");
		nSetup++;
	}
	
	if (nSetup == SETUP_COUNT)
	{
		printf("\n��\n����%d\n", nGuessNumber);
	}
}

void PutTest_08_Menu()
{
	printf("����������������������������������\n");
	printf("��1.Play������0.Quit��\n");
	printf("����������������������������������\n");
}

void Test_08()
{
	printf("TEST_08_OUT\n");

	int input = 0;
	do {
		PutTest_08_Menu();
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			GuessNumber();
			break;
		default:
			break;
		}
	} while (input);

}

//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9

signed long long FindValueUnsignedNumbersStaringFromZero	//���0��ʼ��end���������nFindValue��ÿһλ���ֵĴ�����������ΪnBaseValue
(	const unsigned int end,										//��Χ�����޶�ֵ
	const unsigned int nFindValue,								//��ҪѰ�ҵ���ֵ
	const unsigned int nBaseValue								//���ƣ�����С��2
){
	assert(nBaseValue >= 2);			//���Ʋ���С��2�������������

	signed int nTempDigit = 1;
	signed int nCurNumberEnd = abs(end);

	signed int nDigitNextNumber = 0;
	signed int nDigitPrevNumber = 0;
	signed int nCurrentDigitNumber = 0; 

	signed long long sum = 0;

	//��ѭ������ÿһλ - �õ�֮ǰλ��ʣ��λ���м���
	while (nCurNumberEnd)
	{
		signed long long nPrevSum = sum;	//����ж�������

		nCurrentDigitNumber = nCurNumberEnd % nBaseValue;			//�õ���ǰλ����ֵ

		//������ֵ % ��ǰλλ�� = ֮��λ��ֵ
		//9 999 % 1000 = 999
		//99 99 % 100 = 99
		//999 9 % 10 = 9
		//9999  % 0 = 0
		nDigitNextNumber = (nTempDigit >= nBaseValue) ? (end % nTempDigit) : 0;							//�õ�֮��λ����ֵ

		//������ֵ / (��ǰλ��ǰһλ��λ��) = ֮ǰλ��ֵ
		//999 9  / 10 = 999
		//99 9 9 / 100 = 99
		//9 9 99 / 1000 = 9
		// 9 999 / 1000 = 0
		nDigitPrevNumber = end / (nBaseValue * nTempDigit);		//�õ�֮ǰλ����ֵ

		//����
		{

			//ÿһλ��Ҫͳ�Ƴ��ִ�������ֵ���ֵĴ�����Ϊ���������
			//֮ǰλ�ͣ��Ե�ǰλ��λ��Ϊ֮ǰλ���λ��λ�ף�2999����ǰλΪʮλ��֮ǰλ��Ϊ290
			//��ǰλ�ͣ������ǰλ��ֵ�������ѯ����ֵ����Ϊһ�����ƻ���ֵ����ʮ����Ϊ10��2999����ǰλΪʮλ9�����ѯ��ֵΪ3������Ϊ10����ǰλ��λΪ10
			//֮��λ�ͣ������ǰλ��ֵ�������ѯ����ֵ����Ϊ֮��λ�͵���ֵ��2999����ǰλΪ��λ9�����ѯ��ֵΪ9��֮��λΪ99

			sum += ((signed long long)nDigitPrevNumber * nTempDigit);						//֮ǰλ��
			sum == (nCurrentDigitNumber > nFindValue) ? nBaseValue : 0;					//��ǰλ��
			sum += (nCurrentDigitNumber == nFindValue) ? nDigitNextNumber + 1 : 0;		//ʣ��λ��
		}

		nTempDigit *= nBaseValue;		//����λ������
		nCurNumberEnd /= nBaseValue;		//��ֵλָ����ֵ�������ƶ�
		// 1   9  >5<  6 ָ����ֵ��Ϊ5
		// 1  >9<  5   6 ָ����ֵ��Ϊ9

		//�������/�쳣����
		if (nPrevSum > sum)
		{
			//printf("�����ܺ��������\n");
			return (signed long long)EOF;
		}
	}

	return sum;
}

signed long long FindValueNumbers(signed int begin, signed int end, const unsigned int nFindValue, const unsigned int nBaseValue)
{
	//�������ؽ��ֵ
	//����longlong�����ֵ����EOF

	//��������Ч��ȷ��
	assert(nBaseValue >= 2);

	signed long long nBigSum = 0;
	signed long long nSmallSum = 0;
	signed long long nRetSum = 0;

	//ͳ��begin - 0֮��nFindValue���ֵĴ���
	//ͳ��end - 0֮��nFindValue���ֵĴ���
	//�����ţ��������ֵ�������ֵΪ0����ͳ��ֵ��ȥ1������ʼ������������ֵ��Ϊ0ʱ��ֱ�ӷ���1

	//��ʼ�������Ϊͬһ��ֵ�����������������һ����ֵ��ʡ����
	if (begin == end)
	{
		if (nFindValue == begin)
		{
			//����ֵ������ʼֵ���ڽ���ֵ����ֻ�ܲ��ҵ�1�������ֵ
			return 1;
		}
		//��ʼ�������Ϊͬһ��ֵʱ��ͳ�����ֵ��nFindValue���ֵĴ���
		signed int temp = begin;
		while (temp > 0)
		{
			if (temp % nBaseValue == nFindValue)
			{
				//ͳ��ÿһλ�ϳ���9�Ĵ���
				nRetSum++;
			}
			temp /= nBaseValue;
		}
		return nRetSum;
	}

	if (begin < 0 && end >= 0 || begin >= 0 && end < 0)	//nSum1��nSum2��ţ���sum��Ϊ����ֵ�ĺ�
	{
		begin = abs(begin);
		end = abs(end);

		//�õ�0�����˵�sum
		nBigSum = FindValueUnsignedNumbersStaringFromZero(begin, nFindValue, nBaseValue);
		nSmallSum = FindValueUnsignedNumbersStaringFromZero(end, nFindValue, nBaseValue);

		if ((signed long long)EOF == nBigSum || (signed long long)EOF == nSmallSum)
		{		//�����������EOF
			return (signed long long)EOF;
		}

		nRetSum = nBigSum + nSmallSum;

		if (nRetSum < nBigSum || nRetSum < nSmallSum)
		{
			//�����������EOF
			return (signed long long)EOF;
		}

		if (0 == nFindValue)
		{
			//������ҵ���ֵ����0����ô���ҵķ�Χ�������ʱ���ظ�����1��0����ȥ��
			nRetSum -= 1;
		}
	}
	else		//ͬ��Ϊ����ֵ���ֵ��ȥ����ֵ�ٵ�ֵ
	{
		//����һ��
		begin = abs(begin);
		end = abs(end);

		//����һ����С������
		if (begin > end)
		{
			int temp = begin;
			begin = end;
			end = temp;
		}

		//ͳ��begin~end֮��9������ 0~end - 0~(begin - 1)
		if (begin > 0)
		{
			begin -= 1;
		}

		//��ȡ����ͷ����ֵ������
		nBigSum = FindValueUnsignedNumbersStaringFromZero(begin, nFindValue, nBaseValue);
		nSmallSum = FindValueUnsignedNumbersStaringFromZero(end, nFindValue, nBaseValue);

		if ((signed long long)EOF == nBigSum|| (signed long long)EOF == nSmallSum)
		{		//�����������EOF
			return (signed long long)EOF;
		}

		nRetSum = nSmallSum - nBigSum;		//�õ�����ֵ��������ֵС��sum���ô�ļ�ȥС�ĵõ������ڵĺ�
	}

	return nRetSum;	//����ֵΪ��ֵ��ȥСֵ
}

signed long long FindValueNumbers_Test(signed int begin, signed int end, const unsigned int nFindValue, const unsigned int nBaseValue)
{
	signed int i = 0;
	signed long long sum = 0;

	//�ȶ����������ٽ��м���
	signed int temp = begin;
	if (begin > end)
	{
		begin = end;
		end = temp;
	}

	//��ٷ�
	for (i = begin; i <= end; i++)
	{
		signed int tempI = abs(i);
		while (tempI > 0)
		{
			if (tempI % nBaseValue == nFindValue)
			{
				sum++;
			}
			tempI /= nBaseValue;
		}
	}

	return sum;
}

void Test_07()
{

	printf("TEST_07_OUT\n");

	const unsigned int nFindValue = 9;
	const unsigned int nBaseValue = 10;

	signed int begin = 0;
	signed int end = 0;

	char szBegin[] = "���";
	char szEnd[] = "����";

	begin = -(*((signed int*)szBegin));
	end = *((signed int*)szEnd);


	printf("�������� %d ~ %d ֮�� %d ���ֵĴ����� %lld\n", begin, end, nFindValue, FindValueNumbers(begin, end, nFindValue, nBaseValue));
	printf("��ٷ��� %d ~ %d ֮�� %d ���ֵĴ����� %lld\n", begin, end, nFindValue, FindValueNumbers_Test(begin, end, nFindValue, nBaseValue));

}

void Test_06()
{

	printf("TEST_06_OUT\n");

	const unsigned int nFindValue = 9;
	const unsigned int nBaseValue = 10;

	signed int begin = 0;
	signed int end = 0;

	while (1)
	{
		printf("���������� begin �� end\n");
		if (EOF == scanf("%d%*c%d", &begin, &end))
		{
			return;
		}

		printf("�������� %d ~ %d ֮�� %d ���ֵĴ����� %lld\n", begin, end, nFindValue, FindValueNumbers(begin, end, nFindValue, nBaseValue));
		printf("��ٷ��� %d ~ %d ֮�� %d ���ֵĴ����� %lld\n", begin, end, nFindValue, FindValueNumbers_Test(begin, end, nFindValue, nBaseValue));
	}

}

void Test_05()
{
	printf("TEST_05_OUT\n");

	int i = 0;

	const int begin = 1;
	const int end = 100;
	int nFindNumber = 9;
	const int nBaseNumber = 10;

	long long sum = 0;

	int b = begin;
	int e = end;

	//1 - 100 9�ĸ���
	//��λ0��
	//ʮλ - 90 91 ... 98 99 10��9
	//��λ - 9 19 ... 89 99 10��9
	
	//1 - 1000 9�ĸ���Ϊ
	//ǧλ0��
	//��λ - 900 901 ... 998 999 100��9
	//ʮλ - 90 91 ... 98 99 191 192 ... 998 999 (10 * 10) = 100��9
	//��λ - 9 19 ... 89 99 ... 189 199 ... 989 999 (10 * 10) = 100��9

	//1 - 10000 9�ĸ���
	//��λ 0��
	//ǧλ 9000 9001 ... 9998  9999 (10 * 10 * 10) = 1000��9
	//��λ 900 901 ... 998 999  1900 1901 ... 9998 (10 * 10 * 10) = 1000��9
	//ʮλ 90 91 ... 99 190 ... 999 1090 ... 9989 9999 (10 * 10 * 10) = 1000��9
	//��λ 9 19 ... 99 109 ... 999  1009 ... 9989 9999 (10 * 10 * 10) = 1000��9
	
	//1 - 1999 9�ĸ���
	//ǧλ 0��
	//��λ - 900 901 ... 999 1900 ... 1998 1999 (10 * 10 * 2) = 200��9
	//ʮλ - 90 91 ... 99 190 ... 999 1090 ... 1998 1999 (10 * 10 * 2) = 200��9
	//��λ - 9 19 ... 99 109 ... 999 1009 ... 1989 1999 (10 * 10 * 2) = 200��9

	//6789 = 6000 + 700 + 80 + 9

	//sum = /*��λ -> ��λ*/ /*6000*/ 6 * 300 + /*700*/ 7 * 20 + /*80*/ 8 * 1 + /*9*/ 1 * 1;

	//100 = ��λ9�ĸ��� 0�� + ʮλ9�ĸ��� 10�� + ��λ9�ĸ��� 10��
	//200 = ��λ9�ĸ��� 0�� + ʮλ9�ĸ��� 10 * 2�� + ��λ9�ĸ��� 10 * 2��
	//...
	//900 = ��λ9�ĸ��� 1�� + ʮλ9�ĸ��� 10 * 9�� + ��λ9�ĸ��� 10 * 9��

	//99 = ʮλ10��9 + ��λ10��9
	//95 = ʮλ6��9 + ��λ9��9
	//90 = ʮλ1��9 + ��λ9��9

	//999 = ��λ100��9 + ʮλ100��9 + ��λ100��9
	//899 = ��λ0��9 + ʮλ80 + 10 = 90��9 + ��λ80 + 10 = 90��9
	//793 = ��λ0��9 + ʮλ70 + 4 = 74��9 + ��λ70 + 9 = 79��9
	//7395 = ǧλ0��9 + ��λ700��9 + ʮλ730 + 6 = 736��9 + ��λ739 = 739��9
	//7935 = ǧλ0��9 + ��λ700 + 36 = 736��9 + ʮλ790��9 + ��λ793 = 793��9

	//�����λ��Ϊ9����λ��9�ĸ���Ϊ֮ǰ��λ��
	//�����λΪ9����λ��9�ĸ���Ϊ֮ǰλ*��ǰλȨ�ؼ���ʣ��λ�ټ�1,�����λ��Ϊ9���򲻼�ʣ��λ��1//
	//9999 = ǧλ0 * 1000 + (999 + 1) ��λ9 * 100 + (99 + 1) ʮλ99 * 10 + (9 + 1) ��λ999 * 1 + (0 + 1)	//4000
	//9998 = ǧλ0 * 1000 + (998 + 1) ��λ9 * 100 + (98 + 1) ʮλ99 * 10 + (8 + 1) ��λ999 * 1 + (0)			//3996
	//9997 = ǧλ0 * 1000 + (997 + 1) ��λ9 * 100 + (97 + 1) ʮλ99 * 10 + (7 + 1) ��λ999 * 1 + (0)			//3993
	//100 = ��λ0 * 100 + (0) ʮλ1 * 10 + (0) ��λ10 * 1 + (0)
	//200 = ��λ0 * 100 + (0) ʮλ2 * 10 + (0) ��λ20 * 1 + (0)
	//280 = ��λ0 * 100 + (0) ʮλ2 * 10 + (0) ��λ28 * 1 + (0)
	//283 = ��λ0 * 100 + (0) ʮλ2 * 10 + (0) ��λ28 * 1 + (0)
	//290 = ��λ0 * 100 + (0) ʮλ2 * 10 + (0 + 1) ��λ29 * 1 + (0)
	//395 = ��λ0 * 100 + (0) ʮλ3 * 10 + (5 + 1) ��λ29 * 1 + (0)

	e = 100;

	//char arr[4] = "�Բ�";
	//e = (unsigned int)(*((int*)arr)) & INT_MAX;

	b = e = 99;
	nFindNumber = 9;

	sum = FindValueNumbers(b, e, nFindNumber, nBaseNumber);
	if ((signed long long)EOF == sum)
	{
		printf("�������\n");
		exit(0);
	}

	printf("������\n");
	printf("%d - %d ֮������� %d ���ֵĴ���Ϊ %llu\n", b, e, nFindNumber, sum);

	sum = 0;

	//��ٷ�
	for (i = 1; i <= e ;i++)
	{
		int tempI = i;
		while (tempI > 0)
		{
			if (tempI % 10 == 9)
			{
				sum++;
			}
			tempI /= 10;
		}
	}

	printf("��ٷ�\n");
	printf("%d - %d ֮������� %d ���ֵĴ���Ϊ %llu\n", b, e, nFindNumber, sum);
}

//��ӡ1000~2000��֮�������
void Test_04()
{
	
	printf("TEST_04_OUT\n");

	int year = 0;

	for (year = 1000; year <= 2000; year++)
	{
		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		{
			//���year�����꣬�ͽ�����ӡ����Ļ��
			printf("%d ", year);
		}
	}
}

//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
void Test_03()
{
	printf("TEST_03_OUT\n");

	//��һ�εĽ���Ǽ��Ϸ������������Ǽ�ȥ����˽������
	int flag = 1;
	int i = 0;
	//��������洢�����Ϊ�˽������׼ȷ��������ʹ����double
	double sum = 0;

	for (i = 1; i <= 100; i++)
	{
		//������ϻ��ȥ����
		sum += (1 / (double)i * flag);
		//�üӼ��������
		flag *= -1;
	}
	printf("1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 = %.16lf", sum);
}

//��ʮ�����е����ֵ
void Test_02()
{
	printf("TEST_02_OUT\n");

	int i = 0;
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int max = arr[0];

	for (i = 1; i < 10; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("The numbers's Max-Number is %d\n", max);
}


//��ӡ�˷��ھ���
void Test_01()
{
	printf("TEST_01_OUT\n");

	int i = 0;
	for (i = 9; i >= 1; i--)
	{
		int j = 0;
		for (j = i; j <= 9; j++)
		{
			printf("%d * %d = %-2d  ", i, j, i * j);
		}
		printf("\n");
	}

}

int main()
{
	//Test_01();
	//Test_02();
	//Test_03();
	//Test_04();
	//Test_05();
	//Test_06();
	//Test_07();
	//Test_08();
	//Test_09();
	//Test_10();
	//Test_11();
	//Test_12();
	//Test_13();
	//Test_14();
	Test_15();


	return 0;
}