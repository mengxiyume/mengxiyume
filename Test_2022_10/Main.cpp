#define _CRT_SECURE_NO_WARNINGS 1

#include<graphics.h>
#include<Windows.h>
#include<stdio.h>

#include<iostream>

int main()
{
	//bool b = 32;

	//int a = b;

	//��cpp�У�boolֻ��0ֵ�ͷ�0ֵ
	//std::cout << a << ' ' << b << std::endl;

	//signed char c1 = 256;
	//signed char c2 = 257;	//��λ��̱
	//unsigned char c3 = -1;

	//std::cout << (int)c1 << ' ' << (int)c2 << ' ' << (int)c3 << std::endl;

	//float f = 0xFFFFFFFF;

	//std::cout << f << std::endl;


	//bool��ֻ��0ֵ�����ֵ(����ֵ)����
	//bool b = 32;

	//switch (b)
	//{
	//case 32:
	//	std::cout << "Out" << std::endl;
	//	break;
	//default:
	//	std::cout << "ouT" << std::endl;
	//}

	//unsigned u = 10;
	//int i = -42;

	////���ｫiת��Ϊ���޷��ż���
	//std::cout << i + u << std::endl;
	//std::cout << i + i << std::endl;

	//unsigned u1 = 42, u2 = 10;

	//std::cout << u1 - u2 << std::endl;			//32
	//std::cout << u2 - u1 << std::endl;			//����ֵ
	//std::cout <<(int)( u2 - u1 )<< std::endl;		//-32

	//for (unsigned i = 10; i >= 0; --i)
	//	std::cout << i << ' ';			//iΪ�޷�����������С��0��ѭ������Զ������ȥ
	//std::cout << std::endl;
	//unsigned n = 11;
	//while (n>0)
	//{
	//	--n;
	//	std::cout << n << ' ';
	//}
	//std::cout << std::endl;

	//unsigned u = 10, u2 = 42;
	//
	//std::cout << u2 - u << std::endl;	//32
	//std::cout << u - u2 << std::endl;	//(unsigned)-32
	//std::cout << (unsigned)-32 << std::endl;

	//int i = 10, i2 = 42;

	//std::cout << i2 - i << std::endl;	//32
	//std::cout << i - i2 << std::endl;	//-32
	//std::cout << i - u << std::endl;	//0
	//std::cout << u - i << std::endl;	//0

	//����ֵ����
	//  20 /* ʮ���� */
	// 024 /* �˽��� */
	//0x14 /* ʮ������ */
	// "-" ȡ����������ֵ����ת��Ϊ������ʽ

	//Ĭ�ϸ���������ֵ��һ��double
	//ָ��
	//3.14159	-		3.14159E0
	//0.		-		0e0
	//.001		-		1e-3

	//�ַ����ַ�������ֵ
	//std::cout << "a really, really long string literal "
	//	" that spans two lines" << std::endl;
	//ת������
	//���з�		\n		�����Ʊ��	\t		������			\a
	//�����Ʊ��	\v		�˸��		\b		˫����			\"
	//��б��		\\		�ʺ�		\?		������			\'
	//�س���		\r		��ֽ��		\f

	//std::cout << "AAA";
	//Sleep(1000);
	//std::cout << "\a\a" << std::endl;

	//std::cout << "Hi \x4dO\115\n";
	//std::cout << '\115' << '\n';

	

	return 0;
/*	int a, b;
	scanf("%d%d", &a, &b);
	printf("\n a+b=%d\n", a + b);
	return 0*/;
}

//int main()
//{
//	initgraph(1000, 1000);
//	MOUSEMSG msg = { 0 };
//	bool MouseStateL = false;
//	bool Selece = false;
//	setbkcolor(0xffffff);
//	cleardevice();
//	BeginBatchDraw();
//	while (1)
//	{
//		FlushBatchDraw();
//		cleardevice();
//		if (MouseHit())
//		{
//			msg = GetMouseMsg();
//		}
//		if (Selece)
//		{
//			setfillcolor(0xff00);
//			fillrectangle(0, 0, msg.x, msg.y);
//		}
//		setfillcolor(0x000000);
//		fillrectangle(msg.x, msg.y, msg.x + 300, msg.y + 300);
//		Sleep(10);
//	}
//	EndBatchDraw();
//
//	return 0;
//}