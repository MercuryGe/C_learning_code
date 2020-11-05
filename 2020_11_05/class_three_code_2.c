#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
static int global = 10;

static void func()
{
	printf("%d\n", global);
}
/*int  main()
{
	return 0;
}*/