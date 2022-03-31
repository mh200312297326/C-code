#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int arr[100] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("%d", arr[n - 1]);
//	for (j = 0; j < n - 1; j++)
//	{
//		printf(" %d", arr[j]);
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int k = 0;
//	int tmp = 0;
//	int arr[100] = { 0 };
//	int flag = 1;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	tmp = arr[0];
//	for (i = 0; i < n; i++)
//	{
//		flag = 1;
//		if (tmp < arr[i])
//		{
//			tmp = arr[i];
//			k = i;
//			flag = 0;
//		}
//	}
//	if (flag == 1)
//		printf("%d %d\n", tmp, k + 1);
//	tmp = arr[0];
//	k = 0;
//	for (i = 0; i < n; i++)
//	{
//		flag = 1;
//		if (tmp > arr[i])
//		{
//			tmp = arr[i];
//			k = i;
//			flag = 0;
//		}
//	}
//	if (flag == 1)
//		printf("%d %d\n", tmp, k + 1);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int arr[100] = { 0 };
//	int max = -2147483647;
//	int sec = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	for (i = 0; i < n; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (max > arr[i] && sec < arr[i])
//		{
//			sec = arr[i];
//		}
//	}
//	printf("%d\n", sec);
//	return 0;
//}


//´íÎó´úÂë£¿£¿£¿£¿£¿
//int main()
//{
//	int n = 0;
//	int tmp = 0;
//	int arr[100001] = { 0 };
//	int i = 0;
//	int k = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &tmp);
//	for (i = 0; i < n; i++)
//	{
//		if (tmp < arr[i])
//		{
//			k = i;
//			break;
//		}
//	}
//	for (i = 0; i < k; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("%d ", tmp);
//	for (i = k; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//    int n = 0;
//    int i = 0;
//    int m = 0;
//    int arr[100001] = { 0 };
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &m);
//    for (i = n - 1; i >= 0; i--)
//    {
//        if (m < arr[i])
//            arr[i + 1] = arr[i];
//        else
//            break;
//    }
//    arr[i + 1] = m;
//    for (i = 0; i <= n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//int main()
//{
//    int n = 0;
//    int i = 0;
//    int k = 0;
//    int X = 0;
//    int flag = 1;
//    int arr[100] = { 0 };
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &X);
//    for (i = 0; i < n; i++)
//    {
//        if (X == arr[i])
//        {
//            k = i;
//            flag = 0;
//            break;
//        }
//    }
//    if (flag == 1)
//        printf("no\n");
//    else if (k == 0)
//    {
//        for (i = 1; i < n; i++)
//            printf("%d ", arr[i]);
//    }
//    else
//    {
//        for (i = 0; i < k; i++)
//        {
//            printf("%d ", arr[i]);
//        }
//        for (i = k + 1; i < n; i++)
//        {
//            printf("%d ", arr[i]);
//        }
//    }
//    return 0;
//}