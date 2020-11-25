#define _CRT_SECURE_NO_WARNING 1
//#include<stdio.h>
//int main(){
//	int a = 0x11223344;  
//	   //   44 33 22 11
//	//为了取出一个字节，我们知道char*类型是可以取出1个字节的
//	char *p = (char *)&a;  //要将&a的int*类型转换为 char* 类型
//	if (*p == 0x44){
//		printf("小端");
//	}
//	else{
//		printf("大端");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main(){
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d, b=%d, c=%d", a, b, c);
//	return 0;
//}
//杨辉三角
//#include<stdio.h>
//void yangHuiTriangle(int n){
//	int data[30][30] = { 1 }; //填入第一行的数字
//	int i, j;
//	for (i = 1; i < n; i++){
//		data[i][0] = 1; //每行的第一列都是1
//		for (j = 1; j <= i; j++) //从第二行开始填入数据
//		{
//			data[i][j] = data[i - 1][j] + data[i - 1][j - 1]; //递推公式
//		}
//	}
//	for (i = 0; i < n; i++){
//		for (j = 0; j <= i; j++){
//			printf("%d ", data[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main(){
//	int n = 10;
//	yangHuiTriangle(n);
//}
