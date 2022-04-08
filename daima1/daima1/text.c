#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	char ch = 'w';  
//	char* p = &ch;   //字符指针
//	const char* p2 = "abcdef";
//	int* arr[10];  //指针数组 - 数组 - 存放指针的数组
//	char* ch[5];  
//	int arr2[5];  //数组
//	int(*pa)[5];  //取出数组的地址，pa就是一个数组指针
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";  // 相同变量字符串储存位置不同
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";    // 相同常量字符串储存位置相同
//	if (arr1 == arr2)
//		printf("hehe\n");   
//	else
//		printf("haha\n");   // 打印haha
//	if (p1 == p2)
//		printf("hehe\n");   // 打印hehe
//	else
//		printf("haha\n");
//	return 0;
//}

////打印一个矩阵
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1, arr2, arr3 };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//	//pa指向的数组的元素为char*   
//	//*pa是指针变量的名字 (*pa)表明pa是一个指针
//	//pa指向的数组是有五个元素的
//	int arr[5];
//	//arr是一个5个元素的整形数组
//	int* parr1[10];
//	//parr1是一个数组，数组有十个元素，每个元素的类型是int*,parr1是指针数组
//	int(*parr2)[10];
//	//parr2是一个指针，该指针指向了一个有十个元素数组，且每个元素的类型是int，parr2是数组指针
//	int(*(parr3[10]))[5];
//	//parr3是一个数组，该数组有10个元素，                                                     parr3[10]
//	//每个元素是一个数组指针，且每个数组指针指向一个有五个元素的数组，每个元素的类型是int     int(* )[5]
//	(*(void(*)())0)();
//	//将0强制类型转化成：void(*)() 函数指针类型 - 0就是一个函数的地址  
//	//调用0地址处的该函数
//	void(*signal(int, void(*)(int)))(int);
//	typedef void(*pfun_t)(int);
//	pfun_t signal(int, pfun_t);
//	//signal是一个函数声明
//	//signal函数的参数有2个，第一个是int，第二个是函数指针，该函数指针指向的函数的参数是int，返回类型是void
//	//signal函数的返回类型也是一个函数指针：该函数指针指向的函数的参数是int，返回类型是void
//	return 0;
//}

//void menu()
//{
//	printf("**********************\n");
//	printf("**   1.add     2.sub**\n");
//	printf("**   3.mul     2.div**\n");
//	printf("**   5.xor    0.exit**\n");
//	printf("**********************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	//int (*pa)(int, int) = Add;  // Sub/Mul/Div - 函数指针
//	int (*parr[6])(int, int) = { 0, Add, Sub, Mul, Div, Xor };
//	//需要一个数组，这个数组可以存放4个函数的地址 - 函数指针的数组
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入两个数:>");
//			scanf("%d%d", &x, &y);
//			int ret = parr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//			printf("退出\n");
//		else
//			printf("输入错误\n");
//	} while (input);
//	//for (int i = 0; i < 4; i++)
//	//{
//	//	printf("%d ", parr[i](2, 4));   // 6 -2 8 0
//	//}
//	return 0;
//}

//qsort 函数定义
void qsort(void* base,         //第一个参数：待排序数组的首元素地址
	       size_t num,           //第二个参数：待排序数组的元素个数
	       size_t width,         //第三个参数：待排序数组的每个元素的大小，单位是字节
	       int(*cmp)(const void* e1, const void* e2)      
         //第四个参数：是函数指针，比较两个元素的所用函数的地址 - 这个函数使用者字节实现  
         //函数指针的两个参数是：带比较的两个元素的地址
	      );
 
////仿qsort设计一个bubble_sort
//void Swap(char* s1, char* s2, int width)
//{
//	for (int i = 0; i < width; i++)
//	{
//		char tmp = *s1;
//		*s1 = *s2;
//		*s2 = tmp;
//		s1++;
//		s2++;
//	}
//}
//
//void bubble_sort(void* base, int sz, int width, int(*cmp)(void* e1, void* e2))
//{
//	//趟数
//	for (int i = 0; i < sz; i++)
//	{
//		//每一趟比较的对数
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			//两个元素比较
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				//交换
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}


//#include<stdlib.h>
//#include<string.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	//用来比较两整形值
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test1()
//{
//	int arr1[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	qsort(arr1, sz, sizeof(arr1[0]), cmp_int);
//	for (int i = 0; i < sz; i++)
//		printf("%d ", arr1[i]);
//}
//
//int cmp_float(const void* e1, const void* e2)
//{
//	/*if (*(float*)e1 - *(float*)e2 < 10e-10 && *(float*)e1 - *(float*)e2 > -10e-10)
//		return 0;
//	else if (*(float*)e1 - *(float*)e2 >= 10e-10)
//		return 1;
//	else if (*(float*)e1 - *(float*)e2 <= -10e-10)
//		return -1;*/
//	return ((int)(*(float*)e1 - *(float*)e2));
//}
//
//void test2()
//{
//	float arr2[6] = { 7.0, 6.0, 5.0, 4.0, 3.0, 2.0 };
//	int sz = sizeof(arr2) / sizeof(arr2[0]);
//	qsort(arr2, sz, sizeof(arr2[0]), cmp_float);
//	for (int i = 0; i < sz; i++)
//		printf("%f ", arr2[i]);
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_struct_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int cmp_struct_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//void test3()
//{
//	struct Stu arr3[3] = { {"zhangsan", 20} , {"lisi", 15}, {"wangwu", 18} };
//	int sz = sizeof(arr3) / sizeof(arr3[0]);
//	qsort(arr3, sz, sizeof(arr3[0]), cmp_struct_age);
//	qsort(arr3, sz, sizeof(arr3[0]), cmp_struct_name);
//}
//
//int main()
//{
//	test1();
//	test2();
//	text3();
//	return 0;
//}
