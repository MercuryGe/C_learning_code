#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<limits.h>
unsigned char i = 0;
int main()
{
	float f = 0;
	
	for (int i = 0; i < 10; i++)
	{
		f += 0.1;
	}

	for (int i = 0; i < 10; i++)
	{
		f -= 0.1;
	}
	//if (f == 0.000000)
	if (f >= -0.000001 && f <= 0.000001)
	{
		printf("fsafas\n");
	}

	//int n = 9;
	//float *pFloat = (float *)&n;
	//printf("n��ֵΪ��%d\n", n);//9
	////�Ը����͵�����ȥȡ����
	////0  000 0000 0  000 0000 0000 0000 0000 1001
	//printf("*pFloat��ֵΪ��%f\n", *pFloat);

	//*pFloat = 9.0;//��9.0  ����������ʽȥ������
	////1001.0     1.0010*2^3
	////0 1000 0010  0010 0000 0000 0000 0000 000
	//printf("num��ֵΪ��%d\n", n);//

	//printf("*pFloat��ֵΪ��%f\n", *pFloat);//9.0

	/*float *p = &f;
	int a = *p;
	printf("%f\n", a);*/

	/*float f = 12.5f;
	printf("%f\n",f);*/
	/*for (i = 0; i <= 255; i++)
	{
		printf("hello world\n");
	}*/

	//char a[1000];
	//int i;
	//for (i = 0; i<1000; i++)
	//{
	//	a[i] = -1 - i;
	//	//i = 127  a[i] = -128;   
	//	// i = 128    a[i] = -129  ������Ϊchar a[1000]    127
	//	printf("%d ", a[i]);
	//	//-1 -2 -3 -4 .....-128 127 126......1 0  -1
	//}
	//printf("%d", strlen(a));//0 \0 NULL        '0'->48
	return 0;
}
//int main()
//{
//	//char i = 0;//-128 -127
//	////0....127 -128
//	//for (; i < 130; i++)
//	//{
//	//	printf("%d ",i);
//	//}
//
//	/*unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}*/
//	return 0;
//}
//int main()
//{
//	int i = -20;
//	//1000 0000 0000 0000 0000 0000 0001 0100
//	//1111 1111 1111 1111 1111 1111 1110 1011
//	//1111 1111 1111 1111 1111 1111 1110 1100
//
//	unsigned int j = 10;
//	//0000 0000 0000 0000 0000 0000 0000 1010
//	//1111 1111 1111 1111 1111 1111 1110 1100
//	//1111 1111 1111 1111 1111 1111 1111 0110   
//
//	//0000 0000 0000 0000 0000 0000 0000 0001
//	//1111 1111 1111 1111 1111 1111 1111 0101
//	//1000 0000 0000 0000 0000 0000 0000 1010
//
//	printf("%d\n", i + j);//-10
//	return 0;
//}


//int main()
//{
//	char a = 128;
//	//0000 0000 0000 0000 0000 0000 1000 0000
//	//1000 0000
//	//1111 1111 1111 1111 1111 1111 1000 0000
//	printf("%u\n", a);
//	return 0;
//}
//int main()
//{
//	char a = -128;
//	//1000 0000 0000 0000 0000 0000 1000 0000
//	//1111 1111 1111 1111 1111 1111 0111 1111
//	//1111 1111 1111 1111 1111 1111 1000 0000
//	//1000 0000
//	//%u:���ͽ��д�ӡ  ���͵�������ԭ��������
//	//1111 1111 1111 1111 1111 1111 1000 0000
//	//%u��ӡ ����Ҫ����
//	printf("%u\n", a);
//	return 0;
//}


//int main()
//{
//	char a = -1;
//	//1000 0000 0000 0000 0000 0000 0000 0001
//	//1111 1111 1111 1111 1111 1111 1111 1110
//	//1111 1111 1111 1111 1111 1111 1111 1111
//	//��Ϊ��Ҫ��ֵ��char a  ��ʱ�ͻᷢ���ض�  
//	//1111 1111
//	//��Ϊ��%d���д�ӡ ��ô���� ��Ϊa��char�� ���в�����λ1
//	//1111 1111 1111 1111 1111 1111 1111 1111
//	//��Ϊ��%d���д�ӡ  ����Ϊ��������ǲ���
//	//1111 1111 1111 1111 1111 1111 1111 1110
//	//1000 0000 0000 0000 0000 0000 0000 0001
//	printf("%d\n",a);
//
//	signed char b = -1;
//	printf("%d\n", b);
//
//	unsigned char c = -1;
//	//1000 0000 0000 0000 0000 0000 0000 0001
//	//1111 1111 1111 1111 1111 1111 1111 1110
//	//1111 1111 1111 1111 1111 1111 1111 1111
//	//��Ϊ��Ҫ��ֵ��char a  ��ʱ�ͻᷢ���ض�  
//	//1111 1111
//	//��Ϊ��%d���д�ӡ     ���͵�����    ��˭��ԭ��������
//	//0000 0000 0000 0000 0000 0000 1111 1111
//	printf("%d\n", c);//255
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	//44  33  22  11
//	char *p = (char *)&a;//&a-> int *
//	if (*p == 0x44)
//	{
//		printf("xiaoduan\n");
//	}
//	else
//	{
//		printf("daduan\n");
//	}
//	return 0;
//}