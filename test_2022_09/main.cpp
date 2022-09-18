#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

int main()
{
	int sum = 0, val = 0;
	int n = 0;
	std::cout << "Enter a Val" << std::endl;
	std::cin >> n;

	for (val = 1; val <= n; val++)
	{
		sum += val;
		std::cout << sum << " ";
	}

	std::cout << "\nThe sum is " << sum << std::endl;

	return 0;
}

//int main()
//{
//	std::cout << "Enter Two Numbers" << std::endl;
//	int v1 = 0, v2 = 0;
//	std::cin >> v1 >> v2;
//	std::cout << "The Sum Of " << v1 << " And " << v2 << " Is " << v1 + v2 << std::endl;
//
//	return 0;
//}