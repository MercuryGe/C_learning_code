#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
typedef int INT;
typedef long long longl;
#define  PI  3.14159
#define  SUM(X,Y)  (  (X) + (Y) )
#define  MUL(X,Y)  (  (X)  * (Y) )

//相当于给int 起了个别名   INT
extern int global;
extern void func();

int Add(int a,int b)
{
	return a + b;
}

void test()
{
	//静态局部变量
	static int i = 0;
	i++;
	printf("%d\n",i);
}

struct stu
{
	char name[30];//数组名代表 数组的首地址
	int age;//属性
	char sex[10];
};

int main()
{

	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (n)
		{//switch允许嵌套使用
		case 1:
			n++;
		case 2:
			m++;
			n++;
			break;
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("m = %d, n = %d\n", m, n);
	//// char short int long   longlong   float   double 
	//float a = 1.4;
	//switch (a)
	//{
	//case 1.1:
	//	printf("1\n");
	//	break;
	//case 2.1:
	//	printf("2\n");
	//	break;
	//default :
	//	printf("输入错误\n");
	//	break;
	//}

	//int i = 1;
	//for (; i <= 100; i++)
	//{
	//	if (i % 2 != 0)
	//	{
	//		printf("%d ", i);
	//	}
	//}
	//
	/*int a = 0;
	scanf("%d",&a);
	if (a % 2 != 0)
	{
		printf("%d\n", a);
	}
	else
	{
		printf("不是奇数\n");
	}*/
	/*int a = 0;
	int b = 2;
	if (a == 1)
	{
		if (b == 2)
		{
			printf("hehe\n");
		}
		else
		{
			printf("haha\n");
		}
	}*/
		


	//struct stu s1 = {"bit",10,"男"};
	//struct stu s2 = { "bit2", 120, "男" };
	//printf("%s,%d,%s\n",s1.name,s1.age,s1.sex);

	//struct stu*  ps = &s1;
	//printf("%s,%d,%s\n",ps->name, ps->age,ps->sex);
	////指向符  自带解引用的
	//printf("%s,%d,%s\n", (*ps).name, (*ps).age, (*ps).sex);

	//int a = 10;
	//int *p = &a;
	//printf("%d\n",*p);
	
	//struct stu s3;
	////s3.name = "hell";//s3.name 地址
	//s3.age = 99;
	//s3.sex = "男";
	//int a = 10;
	//int *p = &a;
	//int **pp = &p;
	//**pp = 9999;
	//printf("%d\n", **pp);
	//int ***ppp = &pp;
	//printf("%d\n", ***ppp);

	//printf("%d\n", sizeof(char **));
	//printf("%d\n", sizeof(short **));
	//printf("%d\n", sizeof(int **));
	//printf("%d\n", sizeof(double **));

	/*int a = 0x12345678;
	int *p = &a;
	printf("%x\n",*p);

	char *pc = (char *)&a;
	printf("%x\n",*pc);
*/
	

	//int a = 8;
	//int b = 19;
	//int ret = 8 * MUL(a+2, b+1);
	//printf("%d\n", ret);


	//double d = PI;
	//printf("%f\n", d);

	//pi * r ^ 2
	//double d = 3.14 * 2 ^ 2;
	//double d = PI * pow(2,2);
	//PI = 99;

	//func();

	//printf("%d\n", global);


	/*int i = 0;
	for (; i < 10; i++)
	{
		test();
	}*/


	//int auto = 10;
	/*longl a = 10;
	printf("%d\n", a);*/
	//int ret = Add(10,20);//调用
	//printf("%d\n",ret);
	//int arr[5] = {1,2,3,4,5};
	//arr[0] = 99;

	//int a = 10;
	//int b = 20;
	///*int c = a, b;
	//printf("%d\n",c);*/
	//int d = (10, 20,30,40,50,60,70,80,90);
	//printf("%d\n", d);


	/*int a = 1;
	int b = 0;
	int c = 1;
	int d = a ? (b == 1 ? c : a) : c;
	printf("%d\n",d);*/
	//int a = 0;
	//int b = 0;
	//int c = 2;
	//if (a++ || b++ || c++)
	//{
	//	printf("一：%d,%d,%d\n",a,b,c);
	//}
	//else
	//{
	//	printf("二：%d,%d,%d\n", a, b, c);//2 1 3   1 0 2
	//}
	/*int a = 10;
	int b = 9;
	if (a == 1 && b == 9)
	{
		printf("%s\n","hello");
	}
	else
	{
		printf("%s\n", "hello2");
	}*/
	return 0;
}