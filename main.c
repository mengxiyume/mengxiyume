#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<windows.h>

void geme()
{
	printf("geme...\n");
	system("pause");
}

void test()
{
	int input = 1;
	do {
		system("cls");
		printf("	 ²Ëµ¥	\n");
		printf("1.play		0.quilt\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			geme();
			break;
		case 0:
			input = 0;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}