#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<limits.h>
void test2(char ch[])
{
	printf("%d\n", sizeof(ch));//(4)
}
void func()
{

}
//聚合类型   
struct Stu
{
	char name[10];//成员属性
	int age;
	char sex[5];
	double score;
};

int main()
{
	char c = 1;
	printf("%d\n", sizeof(c));
	printf("%d\n", sizeof(+c));
	printf("%d\n", sizeof(!c));
	printf("%d\n", sizeof(-c));
	func();

	/*char a = 0xb6;
	short b = 0xb600;
	int c = 0xb6000000;
	if (a == 0xffffffb6)
	{
		printf("a");
	}
	if (b == 0xffffb600)
	{
		printf("b");
	}
	if (c == 0xb6000000)
	{
		printf("c");
	}*/
	//struct Stu stu = {"gaobo",18,"wome",59.9};
	//printf("%s,%d,%s,%f\n",stu.name,stu.age,stu.sex,stu.score);

	//struct Stu *pstu = &stu;
	//printf("%s,%d,%s,%f\n", (*pstu).name, 
	//	(*pstu).age, (*pstu).sex, (*pstu).score);

	//printf("%s,%d,%s,%f\n", pstu->name,
	//	pstu->age, pstu->sex, pstu->score);

	////结论：-> 自带解引用   

	//int arr[5] = {1,2,3,4,5};

	//int *p = arr;
	//printf("%d\n",*(p + 1));//2
	////p[1] == *(p + 1)    [] ->自带解引用
	//printf("%d\n", p[1]);//2


	/*int a = 10;
	int *p = &a;*/

	//func();
	//float f = 12.5f;//4
	//int a = (int)f;//4   C语言 是一种弱类型语言
	//int b = (2 + 4) * 5;
	//printf("%d\n",a);
	//int a = (10,2,3,4,4,5);
	//printf("%d\n", a);
	//int arr[10] = {0};
	//arr[0];
	//int i = 0, a = 0, b = 2, c = 3, d = 4;
	////i = a++ && ++b && d++;
	//i = a++||++b||d++;
	//printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
	//printf("%d\n",i);
	//int x = ++a;
	////printf("%d\n", a);//11
	//int y = --a;
	//printf("%d\n", y);
	//int a = 10;
	//a = ++a;//a = a+1
	//printf("%d\n",a);//10


	/*printf("%d\n",sizeof(a));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a);*/
	//printf("%d\n", sizeof  int );  error

	//int n = -1;
	//n += 10;// n = n+10;
	//int count = 0;
	//while (n != 0)
	//{
	//	count++;  //1->2->3
	//	n = n & (n - 1);
	//}
	//printf("%d\n", count);
	/*int n = 1;
	int count = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((n & 1) != 0)
		{
			count++;
		}
		n = n >> 1;
	}
	printf("%d\n",count);*/




	//int n = -1;
	//int count = 0;
	//while (n != 0)
	//{
	//	if (n % 2 != 0)//-1
	//	{
	//		count++;//1
	//	}
	//	n = n / 2;//n = -1/2 = 0
	//}
	//printf("%d\n",count);



	/*int a = 3;
	int b = 2;*/

	/*int tmp = a;
	a = b;
	b = tmp;*/
	//a = a + b;//a = 30
	//b = a - b ;//30-20 = 10
	//a = a - b;//30-10=20

	//a = a^b;//0011 ^ 0010 = 0001
	//b = a^b;//0001 ^ 0010 = 0011  3 
	//a = a^b;//0001 ^ 0011 = 0010 2

	//printf("%d,%d\n",a,b);

	system("pause");
	return 0;
}