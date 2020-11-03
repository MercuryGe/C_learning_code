//将三个数从大到小输出
#define CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//作业一
//int main(){
//	int a = 0; int b = 0; int c = 0;
//	printf("%s", "请输入三个数字\n");
//	scanf_s("%d %d %d", &a, &b, &c);
//	if (a > b && a > c)
//	{
//		if (b > c)
//		{
//			printf("%d %d %d", a, b, c);
//		}
//		else //(c > b)
//		{
//			printf("%d %d %d", a, c, b);
//		}
//	}
//	else if (b > a && b > c)
//	{
//		if (a > c)
//		{
//			printf("%d %d %d", b, a, c);
//		}
//		else
//		{
//			printf("%d %d %d", b, c, a);
//		}
//	}
//	else if (c > a && c > b)
//	{
//		if (a > b)
//		{
//			printf("%d %d %d", c, a, b);
//		}
//		else
//		{
//			printf("%d %d %d", c, b, a);
//		}
//	}
//}
//作业二
//打印出1~100之间3的倍数
int main(){
	int i = 1;
	for (; i < 100; i++){
		if (i % 3 == 0)
		{
			printf("%d ", i);
		}
	}

}