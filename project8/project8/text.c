#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>

//int main()
//{
//	int n = 0;
//	double sum = 0;
//	scanf("%d", &n);
//	sum = pow(2, n) - 1;
//	printf("%.0f\n", sum);
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	int sum = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum += (11 * i);
//	}
//	printf("%d\n", sum);
//	return 0;
//}

// 问题代码（题中'.'为字符串结束，此代码为'\n'）
//int main()
//{
//	char s[256];
//	int i = 0;
//	int sz = 0;
//	scanf("%[^\n]", s);  // \n 为字符串结束标志，strlen 才不会栈溢出
//	for (i = 0; i < strlen(s); i++)
//	{
//		if (s[i] == ' ')
//		{
//			printf("*");
//		}
//		else if ((int)s[i] >= 65 && (int)s[i] <= 90)
//		{
//			printf("%d", (int)s[i] - 64);
//		}
//		else if ((int)s[i] >= 97 && (int)s[i] <= 122)
//		{
//			printf("%d", (int)s[i] - 96);
//		}
//	}
//	printf("\n");
//	return 0;
//}


//int main()
//{
//	char s;
//	int i = 0;
//	while((s = getchar()) != '.')
//	{
//		if (s == ' ')
//		{
//			printf("*");
//		}
//		else if ((int)s >= 65 && (int)s <= 90)
//		{
//			printf("%d", (int)s - 64);
//		}
//		else if ((int)s >= 97 && (int)s <= 122)
//		{
//			printf("%d", (int)s - 96);
//		}
//	}
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	double length = 100;
//	double high = 100;
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	high /= 2;
//	for (i = 2; i <= n; i++)
//	{
//		length += (2 * high);
//		high /= 2;
//	}
//	printf("length=%.4f\nhigh=%.4f\n", length, high);
//	return 0;
//}