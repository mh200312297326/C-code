#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	char ch = 'w';  
//	char* p = &ch;   //�ַ�ָ��
//	const char* p2 = "abcdef";
//	int* arr[10];  //ָ������ - ���� - ���ָ�������
//	char* ch[5];  
//	int arr2[5];  //����
//	int(*pa)[5];  //ȡ������ĵ�ַ��pa����һ������ָ��
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";  // ��ͬ�����ַ�������λ�ò�ͬ
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";    // ��ͬ�����ַ�������λ����ͬ
//	if (arr1 == arr2)
//		printf("hehe\n");   
//	else
//		printf("haha\n");   // ��ӡhaha
//	if (p1 == p2)
//		printf("hehe\n");   // ��ӡhehe
//	else
//		printf("haha\n");
//	return 0;
//}

////��ӡһ������
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
//	//paָ��������Ԫ��Ϊchar*   
//	//*pa��ָ����������� (*pa)����pa��һ��ָ��
//	//paָ��������������Ԫ�ص�
//	int arr[5];
//	//arr��һ��5��Ԫ�ص���������
//	int* parr1[10];
//	//parr1��һ�����飬������ʮ��Ԫ�أ�ÿ��Ԫ�ص�������int*,parr1��ָ������
//	int(*parr2)[10];
//	//parr2��һ��ָ�룬��ָ��ָ����һ����ʮ��Ԫ�����飬��ÿ��Ԫ�ص�������int��parr2������ָ��
//	int(*(parr3[10]))[5];
//	//parr3��һ�����飬��������10��Ԫ�أ�                                                     parr3[10]
//	//ÿ��Ԫ����һ������ָ�룬��ÿ������ָ��ָ��һ�������Ԫ�ص����飬ÿ��Ԫ�ص�������int     int(* )[5]
//	(*(void(*)())0)();
//	//��0ǿ������ת���ɣ�void(*)() ����ָ������ - 0����һ�������ĵ�ַ  
//	//����0��ַ���ĸú���
//	void(*signal(int, void(*)(int)))(int);
//	typedef void(*pfun_t)(int);
//	pfun_t signal(int, pfun_t);
//	//signal��һ����������
//	//signal�����Ĳ�����2������һ����int���ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������void
//	//signal�����ķ�������Ҳ��һ������ָ�룺�ú���ָ��ָ��ĺ����Ĳ�����int������������void
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
//	//int (*pa)(int, int) = Add;  // Sub/Mul/Div - ����ָ��
//	int (*parr[6])(int, int) = { 0, Add, Sub, Mul, Div, Xor };
//	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ - ����ָ�������
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("������������:>");
//			scanf("%d%d", &x, &y);
//			int ret = parr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//			printf("�˳�\n");
//		else
//			printf("�������\n");
//	} while (input);
//	//for (int i = 0; i < 4; i++)
//	//{
//	//	printf("%d ", parr[i](2, 4));   // 6 -2 8 0
//	//}
//	return 0;
//}

//qsort ��������
void qsort(void* base,         //��һ���������������������Ԫ�ص�ַ
	       size_t num,           //�ڶ��������������������Ԫ�ظ���
	       size_t width,         //�����������������������ÿ��Ԫ�صĴ�С����λ���ֽ�
	       int(*cmp)(const void* e1, const void* e2)      
         //���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ - �������ʹ�����ֽ�ʵ��  
         //����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ
	      );
 
////��qsort���һ��bubble_sort
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
//	//����
//	for (int i = 0; i < sz; i++)
//	{
//		//ÿһ�˱ȽϵĶ���
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			//����Ԫ�رȽ�
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				//����
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}


//#include<stdlib.h>
//#include<string.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	//�����Ƚ�������ֵ
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
