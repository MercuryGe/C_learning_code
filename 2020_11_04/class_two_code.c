#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<windows.h>
#include<string.h>
//void Add(int a, int b)
//{
//	int sum = a + b;
//	printf("%d\n", sum);
//}




int Add(int x, int y)
{
	int sum = x + y;
	return sum;
}

int Add3(int x,int y,int z) 
{
	//return x + y + z;
	int ret1 = Add(x,y);
	int ret2 = Add(ret1,z);
	return ret2;
}

int main()
{
	//int a = 10;
	//int *p = &a;
	//*p = 99;
	//printf("%d\n",*p);
	//int c = 10 * 20;


	/*int a = 10;
	int b = a++;
	printf("%d\n",b);*/

	char str[] = "bit";//char[] 
	printf("%d\n", strlen(str));//3
	printf("%d\n",sizeof(str));//
	
	
	//printf("%d\n", sizeof(int));//
	//int a = 10;
	//printf("%d\n", sizeof(a));//

	//int a = 10;
	//a += 9;//a = a+9

	/*int b = -10;
	printf("%d\n",!!b);
*/

	//printf("%d\n",10%3);//1
	//printf("%d\n", -10 % 3);//-1   1  
	//printf("%d\n", 10 % -3);// 1   
	//printf("%d\n", -10 % -3);//-1   

	//printf("%d\n",5/2);//2
	//printf("%f\n", (float)5 / 2);//2.5
	//printf("%f\n", (float)5 / (float)2);//  2.5 
	//printf("%f\n", (float)  (5 / 2)  );//2.0  

	//int arr1[] = {1,2,3,4,5,6,7,8,9,10};
	//int i = 0;//Linux 

	//for ( ; i < 10; i++)
	//{
	//	printf("%d\n", arr1[i]);
	//}


	//printf("%d\n",arr1[1]);



	//int arr2[10] = {1,2,3,4,5,6};//剩余的默认值是0
	//int arr3[5];//默认值是随机值



	/*int a = 10;
	int b = 20;
	int ret = Add(a, b);
	printf("%d\n", ret);
*/
	/*int sum = a + b;
	printf("%d\n", sum);
	int a = 10;*/

	/*while (0)
	{
		printf("%s","abcd");
	}*/

	//int coding = 0;

	//while (coding <= 3)
	//{
	//	coding++;
	//	printf("%s\n","hello");
	//}
	////coding
	//if (coding > 3)
	//{
	//	printf("厉害！\n");
	//}


/*
	int a = 0;
	scanf("%d",&a);
	switch (a)
	{
	case 2:
		printf("2\n");
		break;
	case 1:
		printf("1\n");
		break;
	default :
		printf("输入有误\n");
		break;
	}
*/

	/*int coding = 0;
	if (coding = 20000)
	{
		printf("%s\n","走上人生巅峰\n");
	}
	else if (coding == 10)
	{
		printf("%s\n", "回家卖红薯\n");
	}
	else
	{
		printf("%s\n", "没救了\n");
	}*/
	return 0;
}



//int main()
//{
//	/*char *p = "abcdef";
//	strlen(p);*/
//
//	int len = strlen("abcdef");//求字符串的长度的
//	printf("%d\n",len);//6
//	printf("%d\n", strlen("c:\test\328\test.c"));
//
//
//
//
//
//
//
//
//	//printf("%d\n", strlen("abcdef"));
//	//// \32被解析成一个转义字符
//	//printf("%d\n", strlen("c:\test\328\test.c"));
//
//	//"D:\上课代码\C\	74班\20201026"
//	//printf("%s\n","D:\\test\\C\\74\\20201026");
//	//"hellobit"
//	/*printf("%s\n","\'hellobit\'");
//*/
//	//char arr1[] = "bit";
//	//char arr2[] = { 'b', 'i', 't','u' };
//	//char arr3[] = { 'b', 'i', 't', '\0' };
//	//printf("%s\n", arr1);
//	////printf("%s\n", arr2);
//	//printf("%s\n", arr3);
//
//	/*char *p = "abcde";
//	printf("%s\n",p);*/
//	//int a = 10;
//	//system("pause");
//	return 0;
//}


