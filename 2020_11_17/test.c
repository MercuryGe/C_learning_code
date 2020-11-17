#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void func1(char *p)
{

}
void Show1(int arr[][5],int row,int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
void Show(int (*p)[5], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			//printf("%d ", p[i][j]); p[i]  ->  *(p+i)
			printf("%d ", *(*(p+i)+j));
		}
		printf("\n");
	}
}
void func2(int **p)
{

}
void test(int a)
{
	printf("hello\n");
}
//void * func2()
//{
//
//}
//int* func3()
//{
//
//}
int add(int a,int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a * b;
}
int dev(int a, int b)
{
	return a / b;
}
void menu()
{
	printf("***************************\n");
	printf("******1.add********2.sub**\n");
	printf("******3.mul********4.dev**\n");
	printf("***************************\n");
}

/**
函数名：函数的地址，函数指针

*/
void function()
{
}
//void qsort(void *base, int len, int width,	int ( *comp)( void *elem1,  void *elem2));
int cmp_int(const void *elem1, const void *elem2)
{
	return *((int *)elem1) - *((int *)elem2);
}


void Swap(void *elem1, void *elem2, int size)
{
	//一定要加i
	for (int i = 0; i < size; i++)
	{
		char tmp = *((char *)elem1+i);
		*((char *)elem1 + i) = *((char *)elem2 + i);
		*((char *)elem2 + i) = tmp;
	}
	/*int tmp = *((int *)elem1);
	*((int *)elem1) = *((int *)elem2);
	*((int *)elem2) = tmp;*/
}
void MyQsort(void *base, int len, int size,
	int ( *cmp)( void *elem1,  void *elem2))
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			//if (base[j] >  base[j + 1])
			if (cmp((char *)base + j*size, (char *)base + (j+1)*size) > 0)
			{
				Swap((char *)base + j*size, (char *)base + (j + 1)*size,size);
			}
		}
	}
}


int main()
{
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	int len = sizeof(arr) / sizeof(arr[0]);

	MyQsort(arr, len, sizeof(int), cmp_int);


	//MyQsort(arr, len, sizeof(int), cmp_short);


	for (int i = 0; i < len; i++)
	{
		printf("%d ",arr[i]);
	}

	/*int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;
	int(*func[5]) (int x, int y) = { NULL, add, sub, mul, dev };
	do
	{
		menu();
		printf("请输入你的操作:\n");
		scanf("%d", &input);
		printf("请输入两个操作数：\n");
		scanf("%d%d",&x,&y);
		if (input >= 1 && input <= 4)
		{
			ret = func[input] (x, y);
			printf("%d\n",ret);
		}
	} while (input);*/
	return 0;
}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请输入你的操作:\n");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数：\n");
//			scanf("%d%d",&x,&y);
//			ret = add(x, y);
//			printf("%d\n",ret);
//			break;
//		case 2:
//			printf("请输入两个操作数：\n");
//			scanf("%d%d", &x, &y);
//			ret = sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个操作数：\n");
//			scanf("%d%d", &x, &y);
//			ret = mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个操作数：\n");
//			scanf("%d%d", &x, &y);
//			ret = dev(x, y);
//			printf("%d\n", ret);
//			break;
//		default:
//			break;
//		}
//	} while (input);
//

	//void(*arr[2])(int,int);
	//int *parr2[10]();
	//int(*)() parr3[10];
	//printf("%d\n", test);
	//printf("%d\n", &test);
	////函数指针
	//void (*pfunc) (int) = test;
	//(*pfunc) (10);
	//pfunc(10);
	//test(10);
	//0();
	


	//int arr[3][5] = { 0 };
	//func2(arr);

	//int (*p)[5] = {0};
	////存放数组指针的数组
	//int(*parr3[10])[5] = {p};


	//int arr[3][5] = {0};
	//Show(arr,3,5);

	//int (*p)[5] = arr;


	//int arr[10] = {1,2,3,4,5,6,7,8,9,0};
	//printf("%d\n",arr);//数组首元素的地址
	//printf("%d\n", &arr[0]);//数组首元素的地址
	//printf("%d\n", &arr);//整个数组的地址
	//int *p = arr;
	//printf("%d\n" ,  * (p+1)  );//p[1]
	//int *p2 = &arr[0];

	//int (*p3)[10]= &arr;
	////如何通过p3来访问数组当中的元素？
	////p3 + 1;
	////&arr + 1;
	//printf("%d\n",  *(*p3+1) );//    


	/*int* arr[5];
	int(*p)[5];*/

	//char c = 'a';
	//func1(&c);
	//char *str3 = "hello bit.";
	//func1(str3);
	//char str1[] = "hello bit.";
	//func1(str1);

	/*char str1[] = "hello bit.";
	char str2[] = "hello bit.";
	char *str3 = "hello bit.";
	char *str4 = "hello bit.";
	if (str1 == str2)
		printf("str1 and str2 are same\n");
	else
		printf("str1 and str2 are not same\n");
	if (str3 == str4)
		printf("str3 and str4 are same\n");
	else
		printf("str3 and str4 are not same\n");
*/

//	return 0;
//}



//int main()
//{
//	int a = 10;
//	void *p = &a;
//	printf("%d\n",p+1);
//	printf("%d\n", *p);
//	return 0;
//}
