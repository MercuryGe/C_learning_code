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

////����int��ָ����short��ָ�룬�ڽ���ָ��Ӽ�����ʱ�ᷢ��ʲô
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5 };  //����һ���������� 
//	short *p = (short*)arr;         //��ԭ��int�������ָ�룬ת����short���͵�ָ�룬p��¼������arr�ĵ�ַ
//	                                //                                      ֻ�Ǵ�ʱ��ַ��int����ת������short����
//	                                //short*���ͣ����pÿ��ֻ�����������ֽ�
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

////ָ�������������Ŀ
//int main(){
//	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
//	unsigned long *pulPtr;
//	pulPtr = pulArray;           //��pulArray����ĵ�һ��Ԫ�صĵ�ַ����pulPtr
//	//*(pulPtr + 3) += 3;
//	*(pulPtr + 3) = *(pulPtr + 3) + 3;// pulptr+3���ʵ��������е�����Ԫ��(�����±��0��ʼ)���ʽ�9��Ϊ9+3=12
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));// ��ӡ��һ���͵�����Ԫ�أ���ˣ���ӡ6��12
//}

////�ṹ�������Ŀ
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
//}  //�����ӡ��wang
//

int main(){
	int a = 0x11223344;
	char *pc = (char*)&a;
	*pc = 0;
	printf("%x\n", a);
	return 0;
}

