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
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	default:
//		printf("输入错误\n");
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
//		//试除法
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
//		printf("找不到对应的下标\n");
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
//	//int len = strlen(arr);  //求字符串长度
//	//printf("%d,\n",len); 
//
//	//模拟实现了一个strlen函数
//	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是首元素地址
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
//			break;      //为什么这里报错？
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
//		int flag = 1;//假设这一趟要排序的数据已经有序
//		//每一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if(arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序的数据其实不完全有序
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
//	//对arr进行排序，排成升序
//	//arr是数组，我们对数组arr进行传参，实际上传递过去的是数组arr首元素的地址 &arr[0]
//	bubble_sort(arr, sz);//冒泡排序函数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//  //计算二进制数中1的个数
//	int num = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	printf("二进制num中1的个数：%d", count);
//	return 0;
//}
// 用函数的形式完成
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
//	// 改变二进制中任意一位数字
//	int a = 11;
//	// a 的二进制数表示 00000000000000000000000000001011
//	a = a | (1 << 2);
//	// | 按位或   1 << 2  00000000000000000000000000000100  将1的二进制数向左移动两位
//	printf("%d\n", a); // 15  00000000000000000000000000001111
//	a = a & (~(1 << 2)); // & 按位与
//	// ~(1 << 2)  对(1 << 2) 按位取反 11111111111111111111111111111011
//	printf("%d\n", a); // 11  00000000000000000000000000001011
//}

//int i; // 全局变量不初始化默认为0； 
//int main()
//{
//	i--;
//	// i = -1
//	// 10000000000000000000000000000001  原码
//	// 11111111111111111111111111111110  反码
//	// 11111111111111111111111111111111  补码
//	if (i > sizeof(i)) // sizeof()- 计算变量/类型所占内存大小  >= 0 为无符号数(首位为1不表示负号)
//		printf(">\n");
//	else
//		printf("<\n");
//	return 0;
//	// 打印结果为 > 
//}

