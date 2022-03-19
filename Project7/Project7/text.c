#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	n = n / 5;
//	switch (n)
//	{
//	case 20: case 19: case 18: case 17:
//		printf("A\n");
//		break;
//	case 16: case 15: case 14:
//		printf("B\n");
//		break;
//	case 13: case 12:
//		printf("C\n");
//		break;
//	default:
//		printf("D\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	switch (n)
//	{
//	case(1):
//		printf("January\n");
//		break;
//	case(2):
//		printf("February\n");
//		break;
//	case(3):
//		printf("March\n");
//		break;
//	case(4):
//		printf("April\n");
//		break;
//	case(5):
//		printf("May\n");
//		break;
//	case(6):
//		printf("June\n");
//		break;
//	case(7):
//		printf("July\n");
//		break;
//	case(8):
//		printf("August\n");
//		break;
//	case(9):
//		printf("September\n");
//		break;
//	case(10):
//		printf("October\n");
//		break;
//	case(11):
//		printf("November\n");
//		break;
//	case(12):
//		printf("December\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%d%d", &year, &month);
//	switch (month)
//	{
//	case(1): case(3): case(5): case(7): case(8): case(10): case(12):
//		day = 31;
//		break;
//	case(4): case(6): case(9): case(11):
//		day = 30;
//		break;
//	case(2):
//		day = 28;
//		break;
//	}
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		if (month == 2)
//			day++;
//	printf("%d\n", day);
//	return 0;
//}

//int main()
//{
//	double a = 0;
//	double b = 0;
//	double c = 0;
//	double deta = 0;
//	double r1 = 0;
//	double r2 = 0;
//	scanf("%lf%lf%lf", &a, &b, &c);
//	deta = b * b - 4 * a * c;
//	if (deta < 0)
//		printf("No real roots!\n");
//	else
//	{
//		r1 = (-b + sqrt(deta)) / (2 * a);
//		r2 = (-b - sqrt(deta)) / (2 * a);
//		printf("r1=%7.2lf\nr2=%7.2lf\n", r1, r2);
//	}
//	return 0;
//}