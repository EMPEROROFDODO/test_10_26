
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//������A��������B ����С��������ָ �ܱ�A��B��������С��������ֵ�����һ���㷨��������A��B����С������.
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

//�����������֮����ַ������Կո�ָ�

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
