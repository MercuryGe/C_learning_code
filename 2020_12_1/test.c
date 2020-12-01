#define _CRE_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <string.h>

//int compare(char str1[], char str2[]){
//	int i = 0;
//	int j = 0;
//	int length = strlen(str1);
//	for (j = 1; j <= length; j++){
//		int tmp = str1[0];
//		for (i = 0; i < length - 1; i++){
//			str1[i] = str1[i + 1];
//		}
//		str1[i] = str1[i + 1];
//		if (0 == strcmp(str1, str2)){
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	char s1[10] = "ABCDEFGH";
//	char s2[10] = "EFGHABCD";
//	printf("s1 = %s\n", s1);
//	printf("s2 = %s\n", s2);
//	if (1 == compare(s1, s2))
//	{
//		printf("s1为s2旋转后的字符串!\n");
//	}
//	else
//	{
//		printf("s1不是s2旋转后的字符串!\n");
//	}
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#define ROW 3
//#define COL 4
//int Find(int arr[ROW][COL], int *row, int *col, int n){ //输入为矩阵，横坐标的位置的地址，和纵坐标的位置的地址，需要查找的数
//	*row = 0;
//	*col = COL - 1;
//	while ((*row < ROW) && (*col >= 0)){
//		if (arr[*row][*col] > n){
//			(*col)--;
//		}
//		else if (arr[*row][*col] < n)
//		{
//			(*row)++;
//		}
//		else
//			return 1;
//		}
//	return 0;
//	}
//
//
//int main(){
//	int arr[ROW][COL] = { (1, 2, 3, 4), (5, 6, 7, 8), (21, 37, 46, 98) };
//	int input = 0;
//	int row = 0;
//	int col = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &input);
//	int ret = Find(arr, &row, &col, input);
//	if (ret == 1){
//		printf("row = %d, col = %d", row, col);
//	}
//	else{
//		printf("Not found\n");
//	}
//	return 0;
//}
