#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
int MyStrlen1(const char *pstr)
{
	assert(pstr != NULL);
	//assert(pstr);
	int count = 0;
	while (*pstr)//\0 -> 0
	{
		count++;
		pstr++;
	}
	return count;
}
int MyStrlen(const char *pstr)
{
	assert(pstr != NULL);
	char *pc = pstr;
	while (*pc != '\0')
	{
		pc++;
	}
	//*pc == \0
	return pc - pstr;
}
char * Mystrcpy1( char *dest, const char *src)
{
	//dest  长度问题  是否可以容纳src
	assert(dest != NULL && src != NULL);
	char *p = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	//代码执行到了这里 说明src == \0
	*dest = '\0';
	return p;
}
char * Mystrcpy(char *dest, const char *src)
{
	//dest  长度问题  是否可以容纳src
	assert(dest != NULL && src != NULL);
	char *p = dest;
	while (*dest++ = *src++);
	return p;
}
//OJ  online   Judge 
//网页后台 会有很多测试用例
char *Mystrcat1(char *dest,const char *src)
{
	assert(dest);
	if (src == NULL)
	{
		return dest;
	}
	char *p = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	//dest == \0
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	//src == \0
	*dest = '\0';
	return p;
}
char *Mystrcat(char *dest, const char *src)
{
	assert(dest);
	if (src == NULL) return dest;
	char *p = dest;
	//while (*dest != '\0')
	//{
	//	dest++;
	//}
	while (*dest++ != '\0');//dest多加了1步   跳过\0
	dest--;
	while (*dest++ = *src++);//两个指针也是多加了1步
	return p;
}
//str1  和 str2
int MyStrcmp(char *str1,char *str2)
{
	assert(str1 && str2 );
	if (str1 == NULL) return -1;
	if (str2 == NULL) return 1;
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	//比较
	if (*str1 > *str2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}

char *MyStrStr(char *str1,char *str2)
{
	char *start = str1;
	while (*start != '\0')
	{
		char *s1 = start;
		char *s2 = str2;
		while ( *s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return start;
		}
		start++;
	}
	return NULL;
}

void *Mymemecpy(void *dest,void *src,int count)
{
	void *ret = dest;
	while (count != 0)
	{
		*(char*)dest = *(char*)src;
		((char*)dest)  ++;
		((char*)src)  ++;
		count--;
	}
	return ret;
}
//memmove  内存重叠
void* Mymemove(void *dest, void *src, int count)
{
	//2
	void *ret = dest;
	if (src > dest)
	{
		while (count != 0)
		{
			*(char*)dest = *(char*)src;
			((char*)dest)++;
			((char*)src)++;
			count--;
		}
	}
	else
	{
		count--;//15
		while (count >= 0)
		{
			*((char*)dest + count) = *((char*)src + count);
			count--;//-1
		}
	}
	return ret;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	//                 dest         src
	Mymemove(arr + 2, arr, 16);
	//Mymemove(arr, arr + 2, 16);

	for (int i = 0; i < 8; i++)
	{
		printf("%d ", arr[i]);
	}



	//int arr[] = {1,2,3,4,5,6,7,8};
	//int arr2[8] = {0};
	//memcpy(arr2, arr,16);
	//for (int i = 0; i < 8; i++)
	//{
	//	printf("%d ",arr2[i]);
	//}


	//int count = 0;
	//char str[] = "abcd0123456";
	//int len = strlen(str);
	//for (int i = 0; i < len; i++)
	//{
	//	//isdigit判断当前字符是不是数字字符 返回非0
	//	if (isdigit(str[i]))
	//	{
	//		count++;
	//	}
	//}
	//printf("%d\n",count);

	//FILE * pFile;
	//pFile = fopen("test.txt", "r");
	////
	//if (pFile == NULL)
	//	printf("xxxxxx %s\n", strerror(errno));
	////errno: Last error number


	//char str[] = "192.168.1.0*gaobo";

	//char *p = strtok(str,".*");
	//while (p != NULL)
	//{
	//	printf("%s\n", p);
	//	p = strtok(NULL, ".*");
	//}

	//char *str1 = "ababcabcdabcde";//主串
	//char *str2 = "ababcabcdabcde";//子串
	//char *p = MyStrStr(str1, str2);
	//printf("%s\n", p);

	/*char dest[20] = "bit";
	char *src = "helloabc";
	strncpy(dest+1,src+3,2);
	printf("%s\n", dest);*/

	//=======strcmp=====
	//char *str1 = "abfd";
	//char *str2 = "abhd";
	//int ret = MyStrcmp(str1, str2); //str1和str2进行比较
	/*
	返回值  
	> 0      str1>str2
	= 0      str1=str2
	< 0      str1< str2
	*/
	//printf("%d\n",ret);
	////========strcpy和strcat=======
	//char dest[20] = "bit";
	//char *src = "helloabc";
	//Mystrcat(dest, src);
	//printf("%s\n",dest);//检查机制：完成之后 进行返回检查的结果
	//strcpy这个函数有返回值  那么这个返回值的作用是什么？
	//为了支持链式表达式
	//int len = strlen(strcpy(dest, src));
	//printf("%d\n",len);
	//========strlen============
	//char str[] = "abcdef";//a b c d e f \0
	//char *pstr = "abcde\0f";//  \0
	//printf("%d\n", MyStrlen(pstr));//char *     const char *
	//printf("%d\n", MyStrlen(pstr));//
	return 0;
}