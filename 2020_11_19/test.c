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
}*p;//20���ֽ�
int main()
{
	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *ptr1 = (int *)(&aa + 1);
	int *ptr2 =  (*(aa + 1));
	//*(aa + 1) : ��2����Ԫ�صĵ�ַ
	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
	return 0;
}



///*
//int main()
//{
//	int a = 10;
//	printf("%d\n",sizeof(++a));
//	printf("%d\n",a);//sizeof(ֻ���ڱ����ڼ�ȷ������������Ǽ����ֽ�)
//	//�������������
//
//	//int a[3][4] = { 0 };
//	//printf("%d\n", sizeof(a));//��������Ĵ�С
//	//printf("%d\n", sizeof(a[0][0]));//
//	//printf("%d\n", sizeof(a[0]));//��һ�е�������
//	//printf("%d\n", sizeof(a[0] + 1));//��һ�еĵ�2����Ԫ�ص�ַ
//	//printf("%d\n", sizeof(*(a[0] + 1)));//��һ�еĵ�2����Ԫ��ֵa[0][1]
//	//printf("%d\n", sizeof(a + 1));//��2�еĵ�ַ 4
//	////a+1:  &a[1]               a[1] : ��2�е�������       *(a+1)
//	//printf("%d\n", sizeof(*(a + 1)));//16
//	//printf("%d\n", sizeof(&a[0] + 1));//4
//	//printf("%d\n", sizeof(*(&a[0] + 1)));//��2������ĵ�ַ
//	////printf("%d\n", sizeof(*(&a[0][1])));
//	////&a[0][1]                   int *            4
//	////&a[0]--> int (*p)[4]       &a[0] + 1 : -->   int (*p)[4]  
//	//printf("%d\n", sizeof(*a));//16
//	////a ����������Ԫ�صĵ�ַ  ��ʱ��Ϊa�Ƕ�ά���� ������Ԫ���Ǹ�
//	////һά����      a    &a[0]  -->  *&a[0]
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
//	//printf("%d\n", sizeof(&p + 1));//4    ��p+1 ��������
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
//	//printf("%d\n", sizeof(*arr));//1    -�� 'a'
//	//printf("%d\n", sizeof(arr[1]));//1 ->  'b'
//	//printf("%d\n", sizeof(&arr));//4  
//	//printf("%d\n", sizeof(&arr + 1));//4    ���������Ǹ���ַ
//	//printf("%d\n", sizeof(&arr[0] + 1));//4   &arr[1]
//	return 0;
//}


//int main()
//{
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	printf("%d\n", strlen(arr));//X
//	printf("%d\n", strlen(arr + 0));//X
//	//printf("%d\n", strlen(*arr));//����
//	//printf("%d\n", strlen(arr[1]));//����
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
//	printf("%d\n", sizeof(*a));//4    *a->1 ���� 4
//	printf("%d\n", sizeof(a + 1));//4
//	printf("%d\n", sizeof(a[1]));//*(a+1)  4
//	printf("%d\n", sizeof(&a));//4
//	printf("%d\n", sizeof(*&a));//16 *&a-->��������
//	printf("%d\n", sizeof(&a + 1));//4
//	printf("%d\n", sizeof(&a[0]));//4
//	printf("%d\n", sizeof(&a[0] + 1));//&a[1]  4
//	return 0;
//}