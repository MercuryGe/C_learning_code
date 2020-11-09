#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<string.h>

int fac(int n)
{
	if (n == 1)
	{
		return 1;
	}
	int tmp = n * fac(n-1);
	return tmp;
}
//123
void printNum1(int n)
{
	/*if (n > 9)
	{
		printNum(n/10);
	}
	printf("%d\n",n%10);*/
}
//123
void printNum(int n)
{
	if (n < 10)
	{
		printf("%d\n", n % 10);
	}
	else
	{
		printNum(n / 10);
		printf("%d\n", n % 10);
	}
}
int myStrlen(char *str)
{
	if (*str == '\0')
	{
		return 0;
	}
	int tmp = 1 + myStrlen(str + 1);
	return tmp;
}

int Fib1(int n)
{
	if (n == 1 || n == 2) 
	{
		return 1;
	}
	int tmp = Fib1(n - 1) + Fib1(n-2);
	return tmp;
}

int Fib(int n)
{
	if (n <= 0)
	{
		return -1;
	}
	int f1 = 1;
	int f2 = 1;
	int f3 = 1;
	for (int i = 3; i <= n; i++)
	{
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	return f3;
}
/*
1:  A -> C                               1
2:  A->B   A -> C  B->C         3
3:  A -> C   A->B    C->B    A->C  B->A  B->C  A -> C    7
4:        2^4-1     15
64 :     2^64   -1   
*/

void Move(char pos1,char pos2)
{
	printf("%c -> %c ",pos1,pos2);
}

//pos1:起始位置   pos2:过度位置    pso3:目标位置
void HanoTa(int n,char pos1,char pos2,char pos3)
{
	if (n == 1) 
	{
		Move(pos1, pos3);
		return;
	}
	HanoTa(n - 1, pos1, pos3, pos2);
	Move(pos1, pos3);
	HanoTa(n - 1, pos2, pos1, pos3);
}

//int arr2[10];//默认值是0
//sizeof(arr)：整个数组的字节大写  /  每个数据的字节
void Show(int arr[], int len)
//void Show(int *arr, int len)
{
	//int len = sizeof(arr1) / sizeof(arr1[0]);
	//               sizeof(arr1) :  4
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{

	int a = 10;//  栈
	int b = 20;
	printf("%d,%d\n",&a,&b);
	int arr[3] = {1,2,3};
	printf("%d,%d,%d\n", &arr[0], &arr[1], &arr[2]);

	printf("================\n");
	arr[3] = 88888;
	printf("%d\n", arr[3]);

	//int arr1[10] = {1,2,3,4};//定义了一个数组  2012  随机值
	///*int len = sizeof(arr1) / sizeof(arr1[0]);
	//for (int i = 0; i < len; i++)
	//{
	//	printf("%d  ",arr1[i]);
	//}*/
	////sizeof(arr1) : 整个数组的大小：
	//int len = sizeof(arr1) / sizeof(arr1[0]);//
	//Show(arr1,len);
	//int arr2[10] = { 1, 2, 3, 4 };


	/*printf("%d\n", arr1[10]);
	float arr2[10] = {1.3,2.5};*/


	//int arr2[] = { 1, 2, 3, 4 };
	//const int a = 10;//常变量   C++  常量
	////a = 99;
	//int arr3[10];//在定义数组的时候[]当中一定要是一个常量

	//int a;//默认随机值
	//printf("%d\n",a);












	//HanoTa(1,'A','B','C');
	//printf("\n");
	//HanoTa(2, 'A', 'B', 'C');
	//printf("\n");
	//HanoTa(3, 'A', 'B', 'C');
	//printf("\n");



	//printf("%d\n",Fib(1));
	//printf("%d\n", Fib(2));
	//printf("%d\n", Fib(3));
	//printf("%d\n", Fib(4));
	//printf("%d\n", Fib(5));
	//printf("%d\n", Fib(6));

	//char *p = "abc";
	////printf("%c\n",*p);//a
	////p++;
	////printf("%c\n", *p);//b
	//int len = myStrlen(p);
	//printf("%d\n", len);

	/*char *p = "abcde";
	int len = strlen(p);
	printf("%d\n",len);
	printf("%d\n", sizeof(p));

	char str[] = "abcde";
	printf("%d\n", sizeof(str));*/
	//printNum(123);
	system("pause");
	return 0;
}