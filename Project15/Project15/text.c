#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//#define CMP(a,b) {char t; t = a; a = b; b = t;}
//int main()
//{
//	int n = 0;
//	char arr[100] = { 0 };
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	scanf("%d", &n);
//	getchar();
//	for (i = 0; i < n; i++)
//	{
//		scanf("%c%c%c", &arr[j], &arr[j + 1], &arr[j + 2]);
//		getchar();
//		if (arr[j] > arr[j+1])
//		{
//			CMP(arr[j], arr[j+1]);
//		}
//		if (arr[j] > arr[j+2])
//		{
//			CMP(arr[j], arr[j+2]);
//		}
//		if (arr[j+1] > arr[j+2])
//		{
//			CMP(arr[j+1], arr[j+2]);
//		}
//		j = j + 3;
//	}
//	for (j = 0; j < n * 3;) 
//	{
//		printf("%c %c %c\n", arr[j], arr[j + 1], arr[j + 2]);
//		j = j + 3;
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	char arr[100] = { 0 };
//	int sz = 0;
//	scanf("%d", &n);
//	getchar();
//	for (int i = 0; i < n; i++)
//	{
//		gets(arr);
//		sz = strlen(arr);
//		for (int j = 0; j < sz; j++)
//		{
			//if ((arr[j] <= 'z') && (arr[j] >= 'a'))
			//	arr[j] -= 32;
//			else if ((arr[j] <= 'Z') && (arr[j] >= 'A'))
//				arr[j] += 32;
//		}
//		puts(arr);
//	}
//	
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	char arr[200] = { 0 };
//	int i = 0;
//	int j = 0;
//	scanf("%d", &n);
//	getchar();
//	for (i = 0; i < n; i++)
//	{
//		gets(arr);
//		if (arr[0] != ' ')
//		{
//			if ((arr[0] <= 'z') && (arr[0] >= 'a'))
//				arr[0] -= 32;
//			printf("%c", arr[0]);
//		}
//		for (j = 1; j < strlen(arr); j++)
//		{
//			if (arr[j] == ' ' && arr[j + 1] != ' ')
//			{
//				if ((arr[j+1] <= 'z') && (arr[j+1] >= 'a'))
//					arr[j+1] -= 32;
//				printf("%c", arr[j+1]);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
  


//int main()
//{
//    int n = 0;
//    int sz = 0;
//    char str[10000] = { 0 };
//    scanf("%d", &n);
//    getchar();
//    scanf("%s", str);
//    sz = strlen(str);
//    for (int i = sz - n; i < sz; i++)
//    {
//        printf("%c", str[i]);
//    }
//    for (int j = 0; j < sz - n; j++)
//    {
//        printf("%c", str[j]);
//    }
//    return 0;
//}

//´íÎó´úÂë
//int main()
//{	int n = 0;
//	char arr[1000] = { 0 };
//	int sz = 0;
//	int i = 0;
//	scanf("%d", &n);
//	getchar();
//	gets(arr); 
//	sz = strlen(arr);
//	for (i = sz; i < sz + n; i++)
//	{
//		arr[i] = arr[i - sz];
//	}
//	for (i = n; i < sz + n; i++)
//		printf("%c", arr[i]);
//	return 0;
//}



//int main()
//{
//	char arr[1000] = { 0 };
//	char s[1000] = { 0 };
//	int sz = 0;
//	int i = 0;
//	int j = 0;
//	gets(arr);
//	sz = strlen(arr);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > '9' && arr[i] < '0')
//		{
//			s[j] = arr[i];
//			j++;
//		}
//	}
//	s[j] = '\0';
//	sz = strlen(s);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c", s[i]);
//	}
//	return 0;
//}