#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	float x = 0.0;
//	scanf("%d%d%d", &a, &b, &c);
//	x = (a + b + c) / 3.0;
//	printf("%.2f\n", x);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int k = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= 3; i++)
//	{
//		k = n % 10;
//		sum += k;
//		n = (n - k)/10;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	float p = 0;
//	float s = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if ((a + b > c) && (b + c > a) && (a + c > b))
//	{
//		p = (a + b + c) / 2.0;
//		s = p * (p - a) * (p - b) * (p - c);
//		s = pow(s, 0.5);
//		printf("%.2f\n", s);
//	}
//	else
//		printf("Can't\n");
//	return 0;
//}

//int main()
//{
//	float a = 0;
//	float w = 0;
//	scanf("%f", &a);
//	if (a <= 20)
//	{
//		printf("%.2f\n", 1.68 * a);
//	}
//	else
//		printf("%.2f\n", 1.98 * a);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int w = 0;
//	scanf("%d", &a);
//	if (a <= 100)
//	{
//		printf("%d\n", 2 * a);
//	}
//	else
//		printf("%d\n", a + 100);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int sum = 0;
//	scanf("%d%d", &a, &b);
//	for (i = a; i <= b; i += 2)
//	{
//		sum += i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0; 
//	int m = 0;
//	int a = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d%d", &n, &m);
//	for (i = 1; i <= n; i++)
//	{
//		scanf("%d", &a);
//		if (a < m)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int flag = 1;
//	double s = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		s += flag * (1.0 / i);
//		flag = -flag;
//	}
//	printf("%.10lf\n", s);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		if (n % i == 0)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//ÎÊÌâ´úÂë
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int a = 0;
//	int b = 0;
//	int m = 0;
//	int count = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		a = i * i;
//		count = 0;
//		do
//		{
//			count++;
//			i /= 10;
//		} while (i > 0);
//		for (m = 1; m <= count; m++)
//		{
//			b *= 10;
//		}
//		if (a % b == i)
//			printf("%d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		while (i / pow(10, j) >= 1)
//			j++;
//		if ((int)pow(i, 2) % (int)pow(10, j) == i)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int fact(int n)
//{
//	int i = 0;
//	int s = 1;
//	for (i = 1; i <= n; i++)
//	{
//		s *= i;
//	}
//	return s;
//}

//int main()
//{
//	int n = 0;
//	int sum = fact(5) + fact(7) + fact(9) + fact(11);
//	printf("%d\n", sum);
//	return 0;
//}

//float fact(int n)
//{
//	int i = 0;
//	float t = 1;
//	for (i = 1; i <= n; i++)
//	{
//		t *= i;
//	}
//	return t;
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	int s = 0;
//	scanf("%d%d", &m, &n);
//	s = fact(m) / (fact(n) * fact(m - n));
//	printf("%d\n", s);
//	return 0;
//}
