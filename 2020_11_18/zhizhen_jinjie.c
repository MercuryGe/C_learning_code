#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main(){
//	int a = 10;
//	void *p = &a;
//	printf("%d\n", p+1);
//	printf("%d\n", *p);
//	return 0;
//
////一、字符指针
//int main(){
//	char ch = 'w';
//	char *pc = &ch;
//	*pc = 'w';
//	return 0;
//}
//int main(){
//	char *ps = "hellp"; 此时ps还是一种字符指针，
//		指针是用来存放地址的，此处存放的是字符串"hello"在内存当中的地址，存放的是h的地址
//		而对于这个字符串而言，它是用""双引号来定义的，即它将被存放在常量区（只读区）
//}
//int main(){
//	char str1[] = "hello bit.";//数组中存放的是 h e l l o  b i t . \0
//	char str2[] = "hello bit.";
//	char *str3 = "hello bit."; //指针存放的是h的地址
//	char *str4 = "hello bit.";
//	if (str1 == str2){ //数组名表示的是数组存放的地址
//		               //两个数组存放的地址不一样
//		printf("str1 and str2 are same\n");
//	}
//	else{
//		printf("str1 and str2 are not same\n");//会输出这一句
//	}
//	if (str3 == str4){//双引号引起来的将存放在只读区
//		              //则"hello"在只读区就只有一份
//		              //两个指针都会指向这一个区域
//		              //即->str3和str4都保存的是h的地址
//		printf("str3 and str4 are same\n");//会输出这一句
//	}
//	else{
//		printf("str3 and str4 are not same\n");
//	}
//}
//在传参的过程中
//void  func1(char *p){ //如果这里是char *p
//
//}
//int main(){
//	
//	//那么在调用func1时，有以下几种传法
//	//第一种
//	char c = 'a';
//	func1(&c); //传过去的是一个字符地址
//
//	//第二种
//	char *str3 = "hello bit.";//当我们这样定义了str3
//	func1(str3); //这里str3存放的就是h的地址
//	func1(&str3);//是不能这样传的，这里取地址，相当于是取了指针的地址，此时在函数的形参部分就要拿二级指针接受(char **p )
//
//	//第三种  传一个数组
//	char str1[] = "hello bit";
//	func1(str1); //调用func1时，可用数组名作为实参，因为数组名就代表了数组首元素的地址
//}

////二、指针数组
//int main(){
//	int* arr[5]; //一个长度为5，里面存放的是int*的数组
//}

////三、数组指针
//int main(){
//	int(*p)[5];
//
//&数组名vs数组名

//int main(){
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	printf("%d\n", arr);     //代表数组首元素的地址
//	printf("%d\n", &arr[0]); //代表数组首元素的地址
//	printf("%d\n", &arr);    //整个数组的地址
//
//}
//数组的使用

//void Show(int arr[][5], int row, int col){//为了打印这个二维数组中的每一个元素
//	for (int i = 0; i < row; i++){
//		for (int j = 0; j < col; j++){
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main(){
//	int arr[3][5] = { 0 }; //我们有一个三行五列的二维数组
//	Show(arr,3,5);
//}

//一维数组传参

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
//	int arr[10] = { 0 };    //整形数组
//	int *arr2[20] = { 20 }; //数组里面放的int*类型
//	test(arr);  //数组名代表数组首元素的地址
//	test2(arr2);
//}

////二维数组传参
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
////一级指针传参
//#include<stdio.h>
//void print(int *p, int size){  //int *p 这里传过来的一定是一个int类型的地址
//	int i = 0;
//	for (i = 0; i < size; i++){
//		printf("%d\n", *(p + i));
//	}
//}
//int main(){
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int *p = arr;  //数组名，表示数组首元素的地址，首元素为1，是一个整形，所以这里可以用int*来接收
//	int size = sizeof(arr) / sizeof(arr[0]);
//	//一级指针p，传给函数
//	print(p, size);
//	return 0;
//}
//二级指针传参
//#include<stdio.h>
//void test(int **ptr){ //此处 *ptr代表ptr是指针，int**ptr表示传过来的类型为int*, int*表示的就是一个指针，所以这里传过来的就是指针的地址
//	printf("num = %d\n", **ptr);
//}
//int main(){
//	int n = 10;    //普通变量是10
//	int *p = &n;   //p是一个指针，可以接收n的地址
//	int **pp = &p; //pp是一个二级指针，接收p的地址，p本身是一个int*类型的
//	test(pp);      //这里的实参pp,与函数中的形参ptr都是int**,都是存放p的地址
//	test(&p);
//	return 0;
//}

//当函数的参数为二级指针时，可以接受什么参数？
//void test(char **p){ //p接收的一定是char*类型的
//}
//int main(){
//	char c = 'b';
//	char *pc = &c;
//	char **ppc = &pc;
//	char *arr[10];  //指针数组，长度为10，每个元素是char*的
//	test(&pc);
//	test(ppc);
//	test(arr);
//	return 0;
//}

////函数指针
//
//#include<stdio.h>
//void test(){
//	printf("hello\n");
//}
//int main(){
//	printf("%d\n", test);
//	printf("%d\n", &test);
//	void(*pfunc)() = test;  //*pfunc是一个指针，指向一个函数()，这个函数的返回值是void类型
//	                        //指针要保存地址，函数名就代表函数的地址
//	//通过函数的指针来调用这个函数
//	(*pfunc)(); //先解引用，再利用()来调用函数
//
////用函数指针数组实现一个计算器
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
// 函数名代表函数的地址，那么将函数名放到数组当中，数组应该是一个函数指针数组
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
//		printf("请输入你的操作：\n");
//		scanf("%d", &input);
//		switch (input){
//		case 1:
//			printf("请输入两个操作数：\n");
//			scanf("%d%d", &x, &y);
//			ret = add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个操作数：\n");
//			scanf("%d%d", &x, &y);
//			ret = sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个操作数：\n");
//			scanf("%d%d", &x, &y);
//			ret = mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个操作数：\n");
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

//strlen实现

int MyStrlen(char *str){
	int count = 0;
	assert(str != NULL);
	while (*str != 0){  //当不为\0时
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