
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//正整数A和正整数B 的最小公倍数是指 能被A和B整除的最小的正整数值，设计一个算法，求输入A和B的最小公倍数.
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	scanf("%d%d", &a, &b);
//		for (i = 1;; i++)
//		{
//			if (a * i % b == 0)
//				break;
//		}
//		printf("%d", a * i);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int m = a > b ? a : b;
//	while (1)
//	{
//			if (m % a == 0 && m % b == 0)
//			{
//				printf("%d", m);
//				break;
//			}
//			m++;
//	}
//	return 0;
//}

//依次输出倒置之后的字符串，以空格分割

//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	printf("%s\n", arr);
//	int len = strlen(arr);
//	reverse(arr, arr + len - 1);
//	printf("%s\n", arr);
//	char* start = arr;
//	while (*start)
//	{
//		char* end = start;
//		while(*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//			reverse(start, end - 1);
//			if (*end != '\0')
//				start = end + 1;
//			else
//				start = end;
//	}
//	printf("%s\n", arr);
//	return 0;
//}
