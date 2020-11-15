#define _CRE_SECURE_NO_WARNING 1

#include<stdio.h>
//int main(){
//	int n = 10;
//	char *pc = (char*)&n;
//	int *pi = &n;
//
//	printf("%p\n", &n);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	printf("%p\n", pi);
//	printf("%p\n", pi + 1);
//	return 0;
//
//}

////关于int型指针与short型指针，在进行指针加减整数时会发生什么
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5 };  //定义一个整型数组 
//	short *p = (short*)arr;         //将原本int型数组的指针，转换成short类型的指针，p记录了数组arr的地址
//	                                //                                      只是此时地址从int类型转换成了short类型
//	                                //short*类型，因此p每次只能所有两个字节
//	int i = 0;
//	for (i = 0; i < 4; i++){
//		*(p + i) = 0;
//	}
//	for (i = 0; i<5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

////指针与数组相关题目
//int main(){
//	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
//	unsigned long *pulPtr;
//	pulPtr = pulArray;           //将pulArray数组的第一个元素的地址赋给pulPtr
//	//*(pulPtr + 3) += 3;
//	*(pulPtr + 3) = *(pulPtr + 3) + 3;// pulptr+3访问的是数组中第三个元素(数组下标从0开始)，故将9改为9+3=12
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));// 打印第一个和第三个元素，因此：打印6和12
//}

////结构体相关题目
//struct stu{
//	int num;
//	char name[10];
//	int age;
//};
//
//void fun(struct stu *p){
//	printf("%s\n", (*p).name);
//	return;
//}
//int main(){
//	struct stu students[3] = { { 9801, "zhan", 20 },
//	                          { 9802, "wang", 19 }, 
//	                          { 9803, "zhao", 18 }
//	};
//	fun(students + 1);
//	return 0;
//}  //将会打印出wang
//

int main(){
	int a = 0x11223344;
	char *pc = (char*)&a;
	*pc = 0;
	printf("%x\n", a);
	return 0;
}

