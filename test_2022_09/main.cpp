#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

int main()
{

	//打印输入范围内所有整数
	int A, B;
	std::cin >> A >> B;
	int Tmp = 0;
	if (A > B)
	{
		while (B <= A)
		{
			std::cout << B++ << ' ';
		}
		std::cout << std::endl;
	}
	else if (A < B)
	{
		while (A <= B)
		{
			std::cout << A++ << ' ';
		}
		std::cout << std::endl;
	}
	else
	{
		std::cout << A << std::endl;
	}

	//用--打印10到0之间的所有整数
	//int i = 10;
	//while (i)
	//{
	//	std::cout << i-- << ' ';
	//}
	//std::cout << i << std::endl;

	//打印50加到100的和
	//int i = 50;
	//int sum = 0;
	//while (i++ <= 100)
	//{
	//	sum += i;
	//	std::cout << sum << ' ';
	//}
	//std::cout << std::endl;

	//std::cout << "The sum of 50 to 100 is " << sum << std::endl;

	return 0;
}

//int main()
//{
//	int sum = 0, val = 0;
//	int n = 0;
//	std::cout << "Enter a Val" << std::endl;
//	std::cin >> n;
//
//	for (val = 1; val <= n; val++)
//	{
//		sum += val;
//		std::cout << sum << " ";
//	}
//
//	std::cout << "\nThe sum is " << sum << std::endl;
//
//	return 0;
//}

//int main()
//{
//	std::cout << "Enter Two Numbers" << std::endl;
//	int v1 = 0, v2 = 0;
//	std::cin >> v1 >> v2;
//	std::cout << "The Sum Of " << v1 << " And " << v2 << " Is " << v1 + v2 << std::endl;
//
//	return 0;
//}