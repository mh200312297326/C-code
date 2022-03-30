#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<assert.h>
#include<string.h>

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%X\n", n);
//}

//int main()
//{
//	int n = 0;
//	int m = 0;
//	int k = 0;
//	char arr[100] = "0";
//	char ch;
//	int i = 0;
//	int j = 0;
//	int a = 0;
//	scanf("%d", &n);
//	if (n == 0)
//		printf("0\n");
//	k = n;
//	while (k)
//	{
//		k /= 16;
//		i++;
//	}
//	arr[i] = '\0';
//	j = i - 1;
//	for (; n >0; j--)
//	{
//		m = n % 16;
//		switch (m)
//		{
//		case(10): case(11): case(12): case(13): case(14): case(15):
//			ch = m + 55;
//			break;
//		default:
//			ch = m + '0';
//			break;
//		}
//		arr[j] = ch;
//		n /= 16;
//	}
//	for (a = 0; a < i; a++)
//	{
//		printf("%c", arr[a]);
//	}
//	return 0;
//}



//int main()
//{
//    int n, j;
//    char s[51];
//    char tmp[10] = {'a','e','i','o','u','A','E','I','O','U'};
//    scanf("%d\n", &n);
//    while (n--)
//    {
//        gets(s);
//        int t = strlen(s);
//        for (j = 0; j < t; j++)
//        {
//            int flag = 1;
//            int i = 0;
//            for (i = 0; i < 10; i++)
//            {
//                if (s[j] == tmp[i])
//                {
//                    flag = 0;
//                    if (s[j] >= 'a' && s[j] <= 'z')
//                    {
//                        s[j] -= 32;
//                    }
//                }
//                
//            }
//            if (flag == 1)
//            {
//                if (s[j] >= 'B' && s[j] <= 'Z')
//                    s[j] += 32;
//            }
//        }
//        puts(s);
//    }
//    return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0; 
//	int j = 0; 
//	int sum = 1;
//	int count = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		count = 0;
//		for (j = 2; j <= n; j++)
//		{
//			sum = 1;
//			for (i = 2; i <= sqrt(j); i++)
//			{
//				if (j % i == 0)
//				{
//					sum += (i + j / i);
//				}
//			}
//			if (sum == j)
//			{
//				count++;
//				if (count > 1)
//				{
//					printf(" ");
//				}
//				printf("%d", j);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char ch[255];
//	int count = 0;
//	gets(ch);
//	char* p = &ch;
//	assert(*p != NULL);
//	while (*p == ' ')
//	{
//		p++;
//	}
//	while (*p != '\0')
//	{
//		do
//		{
//			p++;
//		} while ((*p != ' ') && (*p != '\0'));
//		count++;
//		while (*p == ' ')
//			p++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//int main()
//{
//    char ch[256];
//    int i = 0;
//    int count = 0;
//    int word = 0;
//    gets(ch);
//    for (i = 0; i <= strlen(ch); i++)
//    {
//        if (ch[i] == ' ')
//            word = 0;
//        else if (word == 0)
//        {
//            word = 1;
//            count++;
//        }
//    }
//    if (ch[strlen(ch) - 1] == ' ')
//        printf("%d\n", count - 1);
//    else
//        printf("%d\n", count);
//    return 0;
//


int main()
{
    char ch[256] = { 0 };
    int i = 0;
    int k = 0;
    gets(ch);
    for (i = 0; i < strlen(ch); i++)
    {
        if (ch[i] == ' ')
            continue;
        else if (ch[i] != ' ' && (ch[i + 1] == ' ' || ch[i + 1] == '\0'))
        {
            k++;
            continue;
        }
        else if (ch[i] != ' ' && ch[i + 1] != ' ')
            continue;
    }
    printf("%d", k);
    return 0;
}