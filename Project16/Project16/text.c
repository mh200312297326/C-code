#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void  myMove(int* p, int len)
//{
//	int k = 0;
//	for (int i = 0; i < len; i++)
//	{
//		if (*(p + i) != 0)
//		{
//			p[k++] = *(p + i);
//		}
//	}
//	for (int j = k; j < len; j++)
//	{
//		*(p + j) = 0;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int arr[1000] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	myMove(arr, n);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//void  mySum(int* p, int len, int* sumOdd, int* sumEven)
//{
//	int Odd = 0;
//	int Even = 0;
//	for (int i = 0; i < len; i++)
//	{
//		if (*(p + i) % 2)
//		{
//			Odd += *(p + i);
//		}
//		else
//		{
//			Even += *(p + i);
//		}
//	}
//	*sumOdd = Odd;
//	*sumEven = Even;
//}
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int arr[1000] = { 0 };
//	int* p = arr;
//	int sumOdd = 0;
//	int sumEven = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &p[i]);
//	}
//	mySum(p, n, &sumOdd, &sumEven);
//	printf("%d %d", sumOdd, sumEven);
//	return 0;
//}

//int find(int* p, int len, int num)
//{
//	for (int i = 0; i < len; i++)
//	{
//		if (p[i] == num)
//			return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	int p[1000] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &p[i]);
//	}
//	scanf("%d", &m);
//	if (find(p, n, m) == 1)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}