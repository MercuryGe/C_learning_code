#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<assert.h>
#define ROW 3 





int MyStrlen(char *p)
{
	assert(p != NULL);
	if (p == NULL)
	{
		return 0;
	}
	int count = 0;
	while (*p != '\0')
	{
		count++;
		p++;
	}
	return count;
}

int MyStrlen2(const char *p)
{
	char *s = p;
	while (*s != '\0')
	{
		s++;
	}
	return s - p;
}
typedef struct Student
{
	int age;
	char name[10];
} STU ;
/*
数组和结构体 都属于聚合类型
也就是说：整体初始化 只有1次机会 就是在定义整个
变量的时候
*/

typedef  long int LON_INT;
//不加typedef  那么LON_INT就是一个变量
//加上之后：LON_INT会由变量提升为类型
typedef   int (*Pfun) [3] ;

void test(struct Student s)
{

}

void test2(struct Student * ps)
{

}

struct A
{
	int a;
	int *p;
};

struct B
{
	int b;
	int *pb;
	struct A aa;
	struct A *ppa;
};
int main()
{
	/*int const a = 10;
	a = 99;*/
	int a = 10;
	int b = 80;
	int  *  const p = &a;
	
	//int  const *p = &a;
	//const int  *p = &a;

	*p = 99;
	p = &b;
	 
	/*struct B BB;
	BB.b;
	BB.pb;
	BB.aa.a;
	BB.aa.p;
	BB.ppa->a;
	BB.ppa->p;
*/
	/*struct Student stu = {10,"bit"};
	test(stu);
	test2(&stu);*/

	//stu = { 20, "bit" };
	//stu.age = 99;
	//stu.name = "gaobo";
	/*strcpy(stu.name,"gaobo");
	printf("%d,%s\n",stu.age,stu.name);

	STU *ps = &stu;
	printf("%d,%s\n", ps->age, ps->name);*/


	//STU s = { 10, "bit" };
	//printf("%d,%s\n", s.age, s.name);


	//LON_INT a = 10;
	//printf("%d\n",a);


	//int arr[] = {1,2,3};

	////int (*p)[3] = &arr;

	//Pfun pp = &arr;
	

	//int a = 10;
	//// 指针数组  arr[3]-> 里面放了 int *  
	//int *arr[3] = {&a};

	//int arr2[3] = {1,2,3};
	////数组指针   (*pp) -> [3]
	//int (*pp) [3] =  &arr2;//int *


	//int a = 10;
	//int *p = &a;
	//
	//int **pp = &p;

	///*int n = 99;
	//*pp = &n;

	//printf("%d\n",*p);*/

	//**pp = 888;
	//printf("%d\n", a);
	//printf("%d\n", *p);

	//int ***ppp = &pp;
	//printf("%d\n", ***ppp);

	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	//int *p = arr;
	//for (int i = 0; i < 10; i++)
	//{
	//	//printf("%d\n",*(p+i));
	//	printf("%d\n", p[i]);
	//}

	//printf("%d\n", arr);//数组首元素的地址
	////printf("%d\n", &arr[0]);//数组首元素的地址
	////printf("%d\n", &arr);//整个数组的地址
	//printf("%d\n",arr+1);
	//printf("%d\n", &arr + 1);//加整个数组的字节


	/*char *p = "hello";
	int len = MyStrlen2(p);
	printf("%d\n", len);*/

	//*p = 'a'; error
	//printf("%s\n",p);//aello


	//char ch[] = "hello";//h e  l  l  o \0
	//ch[0] = 'a';
	//printf("%s\n", ch);//aello

	//int values[3];
	//int *vp;
	////指针+-整数；指针的关系运算
	//for (vp = &values[0]; vp < &values[3];)
	//{
	//	//*vp++ = 0;
	//	*vp = 0;
	//	vp++;
	//}




	//int arr[] = {1,2,3};
	//int *p = &arr[0];
	//int *p2 = &arr[2];
	//printf("%d\n", p - p2);


	//int *p;   指针在使用的时候 一定要初始化 哪怕是NULL
	//printf("%d\n",*p);

	/*int arr[3] = {0};
	int *p = arr;
	for (int i = 0; i <= 3;i++)
	{
		*p = i;
		p++;    指针一定不能越界访问
	}*/

	//int *p = malloc(10);
	
	//int n = 0x11223344;
	//char *pc = (char*)&n;
	////*pc = 0;
	//int *pi = &n;
	//*pi = 0;

	//int arr[] = {1,2,3,4};
	//int *p = arr;
	//printf("%d\n",p);
	//printf("%d\n", p+1);

	//char ch = 'a';
	//char *pc = &ch;
	//printf("%d\n", pc);//111
	//printf("%d\n", pc + 1);//


	//int a = 0;
	//int *p = NULL;//0   0地址
	//assert(p != NULL);
	////断言   -》 一般用户debug模式下  
	////一旦 断言失败 程序将不会继续执行
	////assert 是不是函数？？？

	//if (p != NULL)
	//{
	//	*p = 100;
	//	printf("%d\n", *p);//0号地址 是不可以进行访问的
	//}
	//else
	//{
	//	printf("指针为空\n");
	//}
	


	//char *pc = NULL;

	//char * p = 'a';
	//int a = 10;
	//printf("%d\n",sizeof(char *));//4
	//printf("%d\n", sizeof(short *));//4
	//printf("%d\n", sizeof(int *));//4
	//printf("%d\n", sizeof(long *));//4
	//printf("%d\n", sizeof(float *));//4
	//printf("%d\n", sizeof(double *));//4

	//int a = 10;
	//int *p = &a;
	//printf("%d\n",*p);//间接访问-》4个字节
	//char ch = 'a';
	//char *pc = &ch;
	//printf("%c\n",*pc);

	system("pause");
	return 0;
}





