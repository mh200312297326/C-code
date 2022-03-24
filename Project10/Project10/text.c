#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<stdbool.h>

//bool prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return false;
//	}
//	if (j > sqrt(n))
//		return true;
//}
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 2; i <= n; i++)
//	{
//		if ((prime(i) == 1) && (prime(i + 2) == 1))
//		{
//			printf("%d %d\n", i, i + 2);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 100; i < 1000; i++)
//	{
//		int n = 1;
//		int j = i;
//		int sum = 0;
//		while (j /= 10)
//		{
//			n++;
//		}
//		j = i;
//		while (j)
//		{
//			sum += pow(j % 10, n);
//			j /= 10;
//		}
//		if (sum == i)
//			printf("%d\n", i);
//	}
//	return 0;
//}

//int Gcd(int a, int b)
//{
//	int tmp = 0;
//	int max = (a > b) ? a : b;
//	int min = (a < b) ? a : b;
//	while (min)
//	{
//		tmp = max % min;
//		max = min;
//		min = tmp;
//	}
//	return max;
//}
//
//int main()
//{
//	int n = 0;
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d\n", Gcd(a, b));
//	return 0;
//}

//int reverse(int num)
//{
//	int flag = -1;
//	int sum = 0;
//	if (num < 0)
//		num *= flag;
//	do
//	{
//		sum = sum * 10 + (num % 10);
//		num /= 10;
//	} while (num);
//	return sum;
//}
//
//
//
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int num = 0;
//	int j = 1;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		num = 0;
//		scanf("%d", &num);
//		printf("%d ", reverse(num));
//	}
//	return 0;
//}