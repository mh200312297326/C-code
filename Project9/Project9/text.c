#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//int fact(int i)
//{
//	int s = 1;
//	int j = 0;
//	for (j = 1; j <= i; j++)
//	{
//		s *= j;
//	}
//	return s;
//}
//
//int main()
//{
//	double s = 0;
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		s += 1.0 / fact(i);
//	}
//	printf("%.5f\n", s);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 2; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//			printf("%d\n", i);
//	}
//	return 0;
//}

//int prime(int n)
//{
//    int j = 0;
//	int flag = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			break;
//	}
//	if (j > sqrt(n))
//		flag = 1;
//	return flag;
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d", &n);
//	for (k = n; k >= 2; k--)
//	{
//		if ((prime(k) && prime(k - 2)) == 1)
//		{
//			printf("%d %d", k - 2, k);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int count = 0;
//	for (a = 1; a <= 6; a++)
//	{
//		for (b = 1; b <= 15; b++)
//		{
//			for (c = 1; c <= 40; c++)
//			{
//				for (d = 1; d <= 40; d++)
//				{
//					if (10 * a + 5 * b + 2 * c + d == 100 && a + b + c + d == 40) 
//					{
//						count++;
//					}
//				}
//			}
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


#include<stdbool.h>
/*一种高效的方法*/
bool isPrime_3(int num) 
{
	int i = 0;
	//两个较小数另外处理
	if (num == 2 || num == 3)
		return true;
	//不在6的倍数两侧的一定不是质数
	if (num % 6 != 1 && num % 6 != 5)
		return false;
	//在6的倍数两侧的也可能不是质数 
	//for (i = 2; i <= sqrt(num); i += 6)
	//{
	//	if (num % i == 0 || num % (i + 2) == 0)
	//		return false;
	//}
	for (i = 3; i <= sqrt(num); i += 2)
	{
		if (num % i == 0)
			return false;
	}

	//排除所有，剩余的是质数
	return true;
}