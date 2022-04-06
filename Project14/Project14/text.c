#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	int arr[101][101] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &tmp);
//			arr[i][j] += tmp;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			printf("%d", arr[i][j]);
//			if (j < m)
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//    int n = 0;
//    int m = 0;
//    int i = 0;
//    int j = 0;
//    int k = 0;
//    int arr[30][30] = { 0 };
//    int t[30][30] = { 0 };
//    int p[30][30] = { 0 };
//    scanf("%d %d", &n, &m);
//    for (i = 0; i < n; i++)
//        p[i][i] = 1;
//    for (i = 0; i < n; i++)
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//
//    for (; m > 0; m--)
//    {
//        for (i = 0; i < n; i++)
//            for (j = 0; j < n; j++)
//                for (k = 0; k < n; k++)
//                    t[i][j] += p[i][k] * arr[k][j];
//        for (i = 0; i < n; i++)
//            for (j = 0; j < n; j++)
//            {
//                p[i][j] = t[i][j];
//                t[i][j] = 0;
//            }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//            printf("%d ", p[i][j]);
//        printf("\n");
//    }
//    return 0;
//}


//int* mul(int(*arr)[30], int(*s)[30], int n)
//{
//	for (int i = 0; i < n; i++)
//		for(int j = 0; j < n; j++)
//			for (int k = 0; k < n; k++)
//			{
//				s[i][j] += arr[i][k] * arr[k][j];
//			}
//	return *s;
//}
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int arr[30][30] = { 0 };
//	int s[30][30] = { 0 };
//	scanf("%d%d", &n, &m);
//	for (i = 0; i < n; i++)
//		for (j = 0; j < n; j++)
//			scanf("%d", &arr[i][j]);
//	m--;
//	while (m--)
//	{
//		memset(s, 0, sizeof(s));
//		mul(&arr, &s, n);
//		for (i = 0; i < n; i++)
//			for (j = 0; j < n; j++)
//				arr[i][j] = s[i][j];
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//			printf("%d ", s[i][j]);
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int arr[30][30] = { 0 };
//	int s[30][30] = { 0 };
//	scanf("%d%d", &n, &m);
//	for (i = 0; i < n; i++)
//		for (j = 0; j < n; j++)
//			scanf("%d", &arr[i][j]);
//	while (m != 0)
//	{
//		if (m & 2)
//		{
//			for (i = 0; i < n; i++)
//				for (j = 0; j < n; j++)
//					s[i][j] = 0;
//			mul(&arr, &s, n);
//		}
//		else
//		{
//			for (i = 0; i < n; i++)
//				for (j = 0; j < n; j++)
//					arr[i][j] = 0;
//			mul(&s, &arr, n);
//		}
//		m -= 1;
//	}
//	if (m & 2)
//	{
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//				printf("%d ", arr[i][j]);
//			printf("\n");
//		}
//	}
//	else
//	{
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//				printf("%d ", s[i][j]);
//			printf("\n");
//		}
//	}
//	return 0;
//}






int main()
{
	int n = 0;
	int i = 0;
	int j = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d", i, j, i * j);
			if (j < i)
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}

//int main()
//{
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	int j = 0;
//	int flag = 0;
//	int tmp = 0;
//	int arr[101][101] = { 0 };
//	int s[101] = { 0 };
//	int p[101] = { 0 };
//	scanf("%d%d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//		s[i] = arr[i][0];
//	for (i = 0; i < n; i++)
//		for (j = 0; j < n; j++)
//		{
//			if (s[i] > arr[i][j])
//				s[i] = arr[i][j];
//		}
//	for (j = 0; j < n; j++)
//		for (i = 0; i < n; i++)
//		{
//			if (p[j] < arr[i][j])
//				p[j] = arr[i][j];
//		}
//	for (i = 0; i < n; i++)
//		for (j = 0; j < n; j++)
//		{
//			if ((s[i] == arr[i][j]) && (p[j] == arr[i][j]))
//			{
//				flag += 1;
//				printf("%d %d %d\n", i + 1, j + 1, arr[i][j]);
//			}
//		}
//	if (flag == 0)
//		printf("no find\n");
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int arr[20][20] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//		arr[i][0] = 1;
//	for (i = 1; i < n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//			printf("%d ", arr[i][j]);
//		printf("\n");
//	}
//	return 0;
//}
