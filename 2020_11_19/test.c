#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
struct Test
{
	int Num;
	char *pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;//20个字节
int main()
{
	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *ptr1 = (int *)(&aa + 1);
	int *ptr2 =  (*(aa + 1));
	//*(aa + 1) : 第2行首元素的地址
	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
	return 0;
}



///*
//int main()
//{
//	int a = 10;
//	printf("%d\n",sizeof(++a));
//	printf("%d\n",a);//sizeof(只是在编译期间确定里面的类型是几个字节)
//	//并不会参与运算
//
//	//int a[3][4] = { 0 };
//	//printf("%d\n", sizeof(a));//整个数组的大小
//	//printf("%d\n", sizeof(a[0][0]));//
//	//printf("%d\n", sizeof(a[0]));//第一行的数组名
//	//printf("%d\n", sizeof(a[0] + 1));//第一行的第2个有元素地址
//	//printf("%d\n", sizeof(*(a[0] + 1)));//第一行的第2个有元素值a[0][1]
//	//printf("%d\n", sizeof(a + 1));//第2行的地址 4
//	////a+1:  &a[1]               a[1] : 第2行的数组名       *(a+1)
//	//printf("%d\n", sizeof(*(a + 1)));//16
//	//printf("%d\n", sizeof(&a[0] + 1));//4
//	//printf("%d\n", sizeof(*(&a[0] + 1)));//第2行数组的地址
//	////printf("%d\n", sizeof(*(&a[0][1])));
//	////&a[0][1]                   int *            4
//	////&a[0]--> int (*p)[4]       &a[0] + 1 : -->   int (*p)[4]  
//	//printf("%d\n", sizeof(*a));//16
//	////a 代表数组首元素的地址  此时以为a是二维数组 他的首元素是个
//	////一维数组      a    &a[0]  -->  *&a[0]
//	//printf("%d\n", sizeof(a[3]));   /*16 */
//
//
//
//
//	//char *p = "abcdef";
//	//printf("%d\n", strlen(p));//6
//	//printf("%d\n", strlen(p + 1));//5
//	////printf("%d\n", strlen(*p));//
//	////printf("%d\n", strlen(p[0]));
//	//printf("%d\n", strlen(&p));//X   char **
//	//printf("%d\n", strlen(&p + 1));//X char **
//	//printf("%d\n", strlen(&p[0] + 1));//5
//	//printf("%d\n", sizeof(p));//4
//	//printf("%d\n", sizeof(p + 1));//4  'b'
//	//printf("%d\n", sizeof(*p));//1
//	//printf("%d\n", sizeof(p[0]));//1 *(p+0)
//	//printf("%d\n", sizeof(&p));//4
//	//printf("%d\n", sizeof(&p + 1));//4    和p+1 两码事情
//	//printf("%d\n", sizeof(&p[0] + 1));//4  'b'
//
//
//	//char str1[] = "abcde";
//	//printf("%d\n",strlen(str1));//5  
//	//char str2[] = "abcde\0";
//	//printf("%d\n", strlen(str2));//5 
//	//char str3[] = "abcde\0abcdef";
//	//printf("%d\n", strlen(str3));// 5
//	//char str4[] = "abcde\n\0abcdef";
//	//printf("%d\n", strlen(str4));//6
//
//	//char arr[] = "abcdef";//7  &arr -> char (*p)[7] = &arr
//	//printf("%d\n", strlen(arr));//6
//	//printf("%d\n", strlen(arr + 0));//6   &arr[0]
//	////printf("%d\n", strlen(*arr));//'a'
//	////printf("%d\n", strlen(arr[1]));//'b'
//	////printf("%d\n", strlen(&arr));//6 
//	////printf("%d\n", strlen(&arr + 1));//X
//	//printf("%d\n", strlen(&arr[0] + 1));//5
//
//	//printf("%d\n", sizeof(arr));//7
//	//printf("%d\n", sizeof(arr + 0));//4  &arr[0]
//	//printf("%d\n", sizeof(*arr));//1    -》 'a'
//	//printf("%d\n", sizeof(arr[1]));//1 ->  'b'
//	//printf("%d\n", sizeof(&arr));//4  
//	//printf("%d\n", sizeof(&arr + 1));//4    数组最后的那个地址
//	//printf("%d\n", sizeof(&arr[0] + 1));//4   &arr[1]
//	return 0;
//}


//int main()
//{
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	printf("%d\n", strlen(arr));//X
//	printf("%d\n", strlen(arr + 0));//X
//	//printf("%d\n", strlen(*arr));//崩溃
//	//printf("%d\n", strlen(arr[1]));//崩溃
//	printf("%d\n", strlen(&arr));//X
//	printf("%d\n", strlen(&arr + 1));//X-6
//	printf("%d\n", strlen(&arr[0] + 1));//X-1
//
//	//printf("%d\n", sizeof(arr));//6  
//	//printf("%d\n", sizeof(arr + 0));//4 &arr[0]
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4
//	//printf("%d\n", sizeof(&arr + 1));//4
//	//printf("%d\n", sizeof(&arr[0] + 1));//4 &arr[1]
//
//	return 0;
//}
//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	printf("%d\n", sizeof(a));//16
//	printf("%d\n", sizeof(a + 0));//4   &a[0]
//	//printf("%d\n", sizeof(a + 1));//4  &a[1]
//	printf("%d\n", sizeof(*a));//4    *a->1 整型 4
//	printf("%d\n", sizeof(a + 1));//4
//	printf("%d\n", sizeof(a[1]));//*(a+1)  4
//	printf("%d\n", sizeof(&a));//4
//	printf("%d\n", sizeof(*&a));//16 *&a-->整个数组
//	printf("%d\n", sizeof(&a + 1));//4
//	printf("%d\n", sizeof(&a[0]));//4
//	printf("%d\n", sizeof(&a[0] + 1));//&a[1]  4
//	return 0;
//}