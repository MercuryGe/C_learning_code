#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
/*
break
1、循环内部，switch
2、遇到break，直接结束所有的循环
continue：
遇到continue，直接结束本趟的循环
*/


/*
int main()
{

	int a = 10;
gaobo:
	if (a == 10)
	{
		printf("hehe\n");
	}
	goto gaobo;
	*/



	//int count = 3;
	//char pass[10];
	//while (count != 0)
	//{
	//	printf("请输入你的密码：\n");
	//	scanf("%s",pass);//"123"
	//	if (  strcmp(pass, "1234") == 0  )
	//	{
	//		printf("%s\n","密码相同");
	//	}
	//	count--;
	//	printf("你还有 %d 次机会\n",count);
	//}



	//char arr1[] = "abcdefg";
	//char arr2[] = "*******";
	////int len = sizeof(arr1) / sizeof(arr1[0]);
	//int len = strlen(arr1);
	//int left = 0;
	//int right = len - 1;
	//printf("%s\n",arr1);
	//while (left <= right)
	//{
	//	Sleep(1000);
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	left++;
	//	right--;
	//	printf("%s\n",arr2);
	//}
	/*int arr[] = {1,2,3,4,5,6,7,8,9};
	int key = 8;
	int len = sizeof(arr) / sizeof(arr[0]);

	int left = 0;
	int right = len - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else
		{
			printf("%d\n", mid);
			break;
		}
	}
	if (left <= right)
	{
		printf("找到了！\n");
	}
	else
	{
		printf("没找到！\n");
	}
*/




	/*int i = 0;
	for (; i < len; i++)
	{
		if (arr[i] == key)
		{
			printf("%d\n",i);
			break;
		}
	}
	if (i == len)
	{
		printf("没有找到\n");
	}*/
	//1!+2!+3!+4!+5!
	//1+2+6+24+120 = 153
	/*int i = 1;
	int ret = 1;
	int j = 1;
	int sum = 0;
	while (j <= 5)
	{
		while (i <= j)
		{
			ret *= i;
			i++;
		}
		sum += ret;
		j++;
	}
	printf("%d\n",sum);*/
	/*int i = 1;
	do
	{
		printf("%d\n",i);
		i++;
	} while (i <= 0);
*/

	//for (;;)
	//{
	//	printf("hehe\n");
	//}

	/*for (int i = 1; i <= 10; i++)
		for (int j = 1; j <= i;j++)
			if (i == 2)
			printf("%d ", i);
			if (i == 5)
			printf("%d ", i);*/

	//if (i == 0)
	//{
	//	break;
	//}

	//for ( i=1 ; i <= 10	 ; i++)
	//{
	//	printf("hehe\n");
	//}

/*
	//CTR+Z   --> -1   输入的内容 被放到了缓冲区当中
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9')
		{
			continue;
		}
		putchar(ch);
	}
*/
	////找到1-100之间 既能被3整除  也能被5整除的数字
	//int i = 0;
	//while (i <= 99)
	//{
	//	i++;
	//	if (i % 15 != 0)
	//	{
	//		continue;
	//	}
	//	printf("%d\n",i);
	//}


	/*int i = 1;
	while (i <= 10)
	{
		if (i == 2)
		{
			continue;
		}
		printf("%d\n",i);
		i++;
	}*/



//	//1、求1-10的和
//	//2、求1-10之间偶数的和
//	//3、求1-10之间奇数的和
//	int sum = 0;//1-10 的和
//	int sumEve = 0;//偶数的和
//	int sumOdd = 0;//奇数的和
//	int i = 1;
//
//	while (i <= 10)
//	{
//		sum += i;
//		i++;
//	}
//	printf("%d\n",sum);
//	//证明i > 10
//	i = 2;
//	while (i <= 10)
//	{
//		sumEve += i;
//		i += 2;
//	}
//	printf("sumEve=%d\n", sumEve);
//	i = 1;
//	while (i <= 10)
//	{
//		sumOdd += i;
//		i += 2;
//	}
//	printf("sumOdd=%d\n", sumOdd);
//
	return 0;
}
