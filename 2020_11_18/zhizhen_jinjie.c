#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main(){
//	int a = 10;
//	void *p = &a;
//	printf("%d\n", p+1);
//	printf("%d\n", *p);
//	return 0;
//
////һ���ַ�ָ��
//int main(){
//	char ch = 'w';
//	char *pc = &ch;
//	*pc = 'w';
//	return 0;
//}
//int main(){
//	char *ps = "hellp"; ��ʱps����һ���ַ�ָ�룬
//		ָ����������ŵ�ַ�ģ��˴���ŵ����ַ���"hello"���ڴ浱�еĵ�ַ����ŵ���h�ĵ�ַ
//		����������ַ������ԣ�������""˫����������ģ�������������ڳ�������ֻ������
//}
//int main(){
//	char str1[] = "hello bit.";//�����д�ŵ��� h e l l o  b i t . \0
//	char str2[] = "hello bit.";
//	char *str3 = "hello bit."; //ָ���ŵ���h�ĵ�ַ
//	char *str4 = "hello bit.";
//	if (str1 == str2){ //��������ʾ���������ŵĵ�ַ
//		               //���������ŵĵ�ַ��һ��
//		printf("str1 and str2 are same\n");
//	}
//	else{
//		printf("str1 and str2 are not same\n");//�������һ��
//	}
//	if (str3 == str4){//˫�����������Ľ������ֻ����
//		              //��"hello"��ֻ������ֻ��һ��
//		              //����ָ�붼��ָ����һ������
//		              //��->str3��str4���������h�ĵ�ַ
//		printf("str3 and str4 are same\n");//�������һ��
//	}
//	else{
//		printf("str3 and str4 are not same\n");
//	}
//}
//�ڴ��εĹ�����
//void  func1(char *p){ //���������char *p
//
//}
//int main(){
//	
//	//��ô�ڵ���func1ʱ�������¼��ִ���
//	//��һ��
//	char c = 'a';
//	func1(&c); //����ȥ����һ���ַ���ַ
//
//	//�ڶ���
//	char *str3 = "hello bit.";//����������������str3
//	func1(str3); //����str3��ŵľ���h�ĵ�ַ
//	func1(&str3);//�ǲ����������ģ�����ȡ��ַ���൱����ȡ��ָ��ĵ�ַ����ʱ�ں������ββ��־�Ҫ�ö���ָ�����(char **p )
//
//	//������  ��һ������
//	char str1[] = "hello bit";
//	func1(str1); //����func1ʱ��������������Ϊʵ�Σ���Ϊ�������ʹ�����������Ԫ�صĵ�ַ
//}

////����ָ������
//int main(){
//	int* arr[5]; //һ������Ϊ5�������ŵ���int*������
//}

////��������ָ��
//int main(){
//	int(*p)[5];
//
//&������vs������

//int main(){
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	printf("%d\n", arr);     //����������Ԫ�صĵ�ַ
//	printf("%d\n", &arr[0]); //����������Ԫ�صĵ�ַ
//	printf("%d\n", &arr);    //��������ĵ�ַ
//
//}
//�����ʹ��

//void Show(int arr[][5], int row, int col){//Ϊ�˴�ӡ�����ά�����е�ÿһ��Ԫ��
//	for (int i = 0; i < row; i++){
//		for (int j = 0; j < col; j++){
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main(){
//	int arr[3][5] = { 0 }; //������һ���������еĶ�ά����
//	Show(arr,3,5);
//}

//һά���鴫��

//void test(int arr[]){
//}
//void test(int arr[10]){
//}
//void test(int *arr){
//}
//
//void test2(int *arr[20]){
//}
//void test2(int **arr){
//}
//
//int main(){
//	int arr[10] = { 0 };    //��������
//	int *arr2[20] = { 20 }; //��������ŵ�int*����
//	test(arr);  //����������������Ԫ�صĵ�ַ
//	test2(arr2);
//}

////��ά���鴫��
//void test(int arr[3][5]){
//}
//void test(int arr[][]){
//}
//void test(int arr[][5]){
//}
//void test(int *arr){
//}
//void test(int* arr[5]){
//}
//void test(int(*arr)[5]){
//}
//void test(int **arr){
//}
//int main(){
//	int arr[3][5] = { 0 };
//	test(arr);
//}
////һ��ָ�봫��
//#include<stdio.h>
//void print(int *p, int size){  //int *p ���ﴫ������һ����һ��int���͵ĵ�ַ
//	int i = 0;
//	for (i = 0; i < size; i++){
//		printf("%d\n", *(p + i));
//	}
//}
//int main(){
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int *p = arr;  //����������ʾ������Ԫ�صĵ�ַ����Ԫ��Ϊ1����һ�����Σ��������������int*������
//	int size = sizeof(arr) / sizeof(arr[0]);
//	//һ��ָ��p����������
//	print(p, size);
//	return 0;
//}
//����ָ�봫��
//#include<stdio.h>
//void test(int **ptr){ //�˴� *ptr����ptr��ָ�룬int**ptr��ʾ������������Ϊint*, int*��ʾ�ľ���һ��ָ�룬�������ﴫ�����ľ���ָ��ĵ�ַ
//	printf("num = %d\n", **ptr);
//}
//int main(){
//	int n = 10;    //��ͨ������10
//	int *p = &n;   //p��һ��ָ�룬���Խ���n�ĵ�ַ
//	int **pp = &p; //pp��һ������ָ�룬����p�ĵ�ַ��p������һ��int*���͵�
//	test(pp);      //�����ʵ��pp,�뺯���е��β�ptr����int**,���Ǵ��p�ĵ�ַ
//	test(&p);
//	return 0;
//}

//�������Ĳ���Ϊ����ָ��ʱ�����Խ���ʲô������
//void test(char **p){ //p���յ�һ����char*���͵�
//}
//int main(){
//	char c = 'b';
//	char *pc = &c;
//	char **ppc = &pc;
//	char *arr[10];  //ָ�����飬����Ϊ10��ÿ��Ԫ����char*��
//	test(&pc);
//	test(ppc);
//	test(arr);
//	return 0;
//}

////����ָ��
//
//#include<stdio.h>
//void test(){
//	printf("hello\n");
//}
//int main(){
//	printf("%d\n", test);
//	printf("%d\n", &test);
//	void(*pfunc)() = test;  //*pfunc��һ��ָ�룬ָ��һ������()����������ķ���ֵ��void����
//	                        //ָ��Ҫ�����ַ���������ʹ������ĵ�ַ
//	//ͨ��������ָ���������������
//	(*pfunc)(); //�Ƚ����ã�������()�����ú���
//
////�ú���ָ������ʵ��һ��������
//int add(int a, int b){
//	return a + b;
//}
//int sub(int a, int b){
//	return a - b;
//}
//int mul(int a, int b){
//	return a * b;
//}
//int dev(int a, int b){
//	return a / b;
//}/*
// �������������ĵ�ַ����ô���������ŵ����鵱�У�����Ӧ����һ������ָ������
// */
//void menu(){
//	printf("********************\n");
//	printf("*****1.add****2.sub*\n");
//	printf("*****3.mul****4.dev*\n");
//	printf("********************\n");
//}
//int main(){
//	int input = 1;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do{
//		menu();
//		printf("��������Ĳ�����\n");
//		scanf("%d", &input);
//		switch (input){
//		case 1:
//			printf("������������������\n");
//			scanf("%d%d", &x, &y);
//			ret = add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("������������������\n");
//			scanf("%d%d", &x, &y);
//			ret = sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("������������������\n");
//			scanf("%d%d", &x, &y);
//			ret = mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("������������������\n");
//			scanf("%d%d", &x, &y);
//			ret = dev(x, y);
//			printf("%d\n", ret);
//			break;
//		default:
//			break;
//		}
//	} while (input);
//
//}

//strlenʵ��

int MyStrlen(char *str){
	int count = 0;
	assert(str != NULL);
	while (*str != 0){  //����Ϊ\0ʱ
		count++;
		str++;
	}
	return count;
}
int main(){
	char str[] = "hello bit";
	int ret = MyStrlen(str);
	printf("%d", ret);
}