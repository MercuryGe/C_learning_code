#define _CRT_SECURE_NO_WARNING 1
//#include<stdio.h>
//int main(){
//	int a = 0x11223344;  
//	   //   44 33 22 11
//	//Ϊ��ȡ��һ���ֽڣ�����֪��char*�����ǿ���ȡ��1���ֽڵ�
//	char *p = (char *)&a;  //Ҫ��&a��int*����ת��Ϊ char* ����
//	if (*p == 0x44){
//		printf("С��");
//	}
//	else{
//		printf("���");
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
//�������
//#include<stdio.h>
//void yangHuiTriangle(int n){
//	int data[30][30] = { 1 }; //�����һ�е�����
//	int i, j;
//	for (i = 1; i < n; i++){
//		data[i][0] = 1; //ÿ�еĵ�һ�ж���1
//		for (j = 1; j <= i; j++) //�ӵڶ��п�ʼ��������
//		{
//			data[i][j] = data[i - 1][j] + data[i - 1][j - 1]; //���ƹ�ʽ
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
