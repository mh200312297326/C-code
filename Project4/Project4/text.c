#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>

//int main()
//{
//	int a1 = 0;
//	int a2 = 0;
//	int sum = 0;
//	scanf("%d%d", &a1, &a2);
//	sum = a1 + a2;
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	scanf("%d%d", &a, &b);
//	max = (a > b ? a : b);
//	printf("%d\n", max);
//	return 0;
//}

//struct book
//{
//	char name[20];
//	short price;
//};
//
//int main()
//{
//	struct book b1 = { "the little king ",45 };
//	struct book* p = &b1;
//	printf("%s\n", b1.name);
//	printf("%d\n", b1.price);
//	printf("%s\n", (*p).name);
//	printf("%d\n", (*p).price);
//	printf("%s\n", p->name);
//	printf("%d\n", p->price);
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 400 != 0)) || (year % 400 == 0))
//		{
//			count++;
//			printf("%d ", year);
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�Գ���
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//			printf("%d ", i);
//	}
//	return 0;
//}

//void swap(int* p1, int* p2)
//{
//	int tmp = 0;
//	tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a == %d, b == %d\n", a, b);
//	swap(&a, &b);
//	printf("a == %d, b == %d\n", a, b);
//	return 0;
//}

//int mid_search(int arr[], int sz, int k)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if(arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 0;
//	scanf("%d", &k);
//	int m = mid_search(arr, sz,k);
//	if(m != -1)
//	{
//		printf("%d\n", m+1);
//	}
//	else
//	{
//		printf("�Ҳ�����Ӧ���±�\n");
//	}
//	return 0;
//}

//int my_strlen(char* str)
//{
//	if (*str != 0)
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);  //���ַ�������
//	//printf("%d,\n",len); 
//
//	//ģ��ʵ����һ��strlen����
//	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬������Ԫ�ص�ַ
//	printf("%d\n", len);
//	return 0;
//}

//int fib(int n)
//{
//    int x = 1;
//    int y = 1;
//    int z = 1;
//    while (n > 2)
//    {
//        z = x + y;
//        x = y; 
//        y = z;
//        n--;
//    }
//    return z;
//}
//
//int main()
//{
//    int a = 0;
//    int b = 0; 
//    scanf("%d", &a);
//    b = fib(a);
//    printf("%d\n", b);
//    return 0;
//}

//void sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++);
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = arr[j];
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//			break;      //Ϊʲô���ﱨ��
//		
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr, sz);
//	return 0;
//}
//

//void bubble_sort(int arr[], int sz)
//{
//    int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//������һ��Ҫ����������Ѿ�����
//		//ÿһ��ð������
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if(arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//���������������ʵ����ȫ����
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//��arr���������ų�����
//	//arr�����飬���Ƕ�����arr���д��Σ�ʵ���ϴ��ݹ�ȥ��������arr��Ԫ�صĵ�ַ &arr[0]
//	bubble_sort(arr, sz);//ð��������
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//  //�������������1�ĸ���
//	int num = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	printf("������num��1�ĸ�����%d", count);
//	return 0;
//}
// �ú�������ʽ���
//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		count++;
//		n = n & (n - 1);
//	}
//	return count;
//}


//int main()
//{
//	// �ı������������һλ����
//	int a = 11;
//	// a �Ķ���������ʾ 00000000000000000000000000001011
//	a = a | (1 << 2);
//	// | ��λ��   1 << 2  00000000000000000000000000000100  ��1�Ķ������������ƶ���λ
//	printf("%d\n", a); // 15  00000000000000000000000000001111
//	a = a & (~(1 << 2)); // & ��λ��
//	// ~(1 << 2)  ��(1 << 2) ��λȡ�� 11111111111111111111111111111011
//	printf("%d\n", a); // 11  00000000000000000000000000001011
//}

//int i; // ȫ�ֱ�������ʼ��Ĭ��Ϊ0�� 
//int main()
//{
//	i--;
//	// i = -1
//	// 10000000000000000000000000000001  ԭ��
//	// 11111111111111111111111111111110  ����
//	// 11111111111111111111111111111111  ����
//	if (i > sizeof(i)) // sizeof()- �������/������ռ�ڴ��С  >= 0 Ϊ�޷�����(��λΪ1����ʾ����)
//		printf(">\n");
//	else
//		printf("<\n");
//	return 0;
//	// ��ӡ���Ϊ > 
//}

