#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	char* c[] = { "ENTER", "NEW", "POINT", "FIRST" };
//	char** cp[] = { c + 3, c + 2, c + 1, c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//POINT *++cpp �� c+2, �ٽ����õ�POINT  ��cpp ָ�� c+2��
//	printf("%s\n", *-- * ++cpp + 3);//ER *++cpp �� c+1, �� -- ������õõ�E�ĵ�ַ, �ٺ��������ַ�����ӡ��ER ��cpp ָ�� c+1��
//	printf("%s\n", *cpp[-2] + 3);//ST  �ȼ���* *(cpp-2) + 3, *(cpp-2)�õ�c+3 ���ٽ����ú� ���������ַ�����ӡ��ST  ��cpp ָ�� c+1��
//	printf("%s\n", cpp[-1][-1] + 1);//EW  �ȼ���*(*(cpp-1) - 1) + 1, *(cpp-1) �õ� c+2, �� -1 ������ָ��N�ĵ�ַ���ٺ���һ���ַ�����ӡ��EW
//	return 0;
//}

//int main()
//{
//	//����������Ԫ�ص�ַ��������������
//	//1.sizeof(������) - ��������ʾ��������
//	//2.&������ - ��������ʾ��������
//	//һά����
//	//int a[] = { 1, 2, 3, 4 };
//	//printf("%d\n", sizeof(a));//16!!!  sizeof(������) - ������������ܴ�С - ��λ���ֽ�
//	//printf("%d\n", sizeof(a + 0));//4(32λ)/8(64λ)  ��������ʾ��Ԫ�صĵ�ַ��a+0������Ԫ�ص�ַ����ַ�Ĵ�С��4/8���ֽ�
//	//printf("%d\n", sizeof(*a));//4  ��������ʾ��Ԫ�ص�ַ��*a������Ԫ�أ�int����ռ�ĸ��ֽ�
//	//printf("%d\n", sizeof(a + 1));//4/8 ��������ʾ��Ԫ�صĵ�ַ��a+1�ǵڶ���Ԫ�ص�ַ
//	//printf("%d\n", sizeof(a[1]));//4  �ڶ���Ԫ�ش�С
//	//printf("%d\n", sizeof(&a));//4/8!!! &aȡ����������ĵ�ַ���������ַҲ�ǵ�ַ
//	//printf("%d\n", sizeof(*&a));//16!!! &aȡ������ĵ�ַ������ĵ�ַ�����÷��ʵ������飬sizeof����ľ�������Ĵ�С
//	//printf("%d\n", sizeof(&a + 1));//4/8  &a������ĵ�ַ��&a+1����������ĵ�ַ�������ǵ�ַ
//	//printf("%d\n", sizeof(&a[0]));//4/8
//	//printf("%d\n", sizeof(&a[0] + 1));//4/8
//
//	////�ַ�����
//	/*char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };*/
//	//printf("%d\n", sizeof(arr));//6!!! sizeof(������)������������С
//	//printf("%d\n", sizeof(arr + 0));//4/8
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4/8
//	//printf("%d\n", sizeof(&arr + 1));//4/8
//	//printf("%d\n", sizeof(&arr[0] + 1));//4/8
//	//printf("%d\n", strlen(arr)); // ���ֵ
//	//printf("%d\n", strlen(arr + 0));//���ֵ
//	////printf("%d\n", strlen(*arr));//err
//	////printf("%d\n", strlen(arr[1]));//err
//	//printf("%d\n", strlen(&arr));//���ֵ
//	//printf("%d\n", strlen(&arr + 1));//���ֵ - 6
//	//printf("%d\n", strlen(&arr[0] + 1));//���ֵ - 1
//
//	//��ά����
//	//int a[3][4] = { 0 };
//	////printf("%p\n%p\n%p\n%p\n", &a[0][0], a[0], a + 1, &a[0] + 1);//�ĸ���ַ��ȣ���﷽ʽ�ǵȼ۵�
//	//printf("%d\n", sizeof(a));//48
//	//printf("%d\n", sizeof(a[0][0]));//4
//	//printf("%d\n", sizeof(a[0]));//16 a[0]�൱�ڵ�һ����Ϊһά�������������sizeof(a[0])����������������sizeof()�ڣ�������ǵ�һ�еĴ�С
//	//printf("%d\n", sizeof(a[0] + 1));//4/8  a[0]�ǵ�һ�е�����������������ʱ����Ԫ�صĵ�ַ��a[0]��ʵ���ǵ�һ�е�һ��Ԫ�صĵ�ַ
//	////����a[0]+1 ���ǵ�һ�еڶ���Ԫ�صĵ�ַ  ��ַ�Ĵ�С��4/8���ֽ�
//	//printf("%d\n", sizeof(*(a[0] + 1)));//4  *(a[0] + 1) �ǵ�һ�еڶ���Ԫ��
//	//printf("%d\n", sizeof(a + 1));//4/8 a�Ƕ�ά���������� û��sizeof(a), Ҳû��&a������a����Ԫ�ص�ַ
//	////�Ѷ�λ���鿴��һά����ʱ����ά�������Ԫ��������һ�У�a���ǵ�һ�У���Ԫ�أ��ĵ�ַ��a+1���ǵڶ��еĵ�ַ
//	//printf("%d\n", sizeof(*(a + 1)));//16!!!  sizeof(a[1]) ����ڶ��еĴ�С
//	//printf("%d\n", sizeof(&a[0] + 1));//4/8 �ڶ��еĵ�ַ
//	//printf("%d\n", sizeof(*(&a[0] + 1)));//16 ����ڶ��еĴ�С
//	//printf("%d\n", sizeof(*a));//16!!! a����Ԫ�ص�ַ����һ�еĵ�ַ�� *a���ǵ�һ�У�sizeof(*a)���Ǽ����һ�еĴ�С
//	//printf("%d\n", sizeof(a[3]));//16
//
//
//	return 0;
//}

////�ڴ棿
//int main()
//{
//    int a[4] = { 1, 2, 3, 4 };
//    int* ptr1 = (int*)(&a + 1);
//    int* ptr2 = (int*)((int)a + 1);
//    printf("%x,%x", ptr1[-1], *ptr2);
//    // ptr1[-1] = *(ptr1 - 1)  
//    return 0;
//} 

//int main()
//{
//	int a[3][2] = { (0, 1),(2, 3), (4, 5) };  //���ű��ʽ  a[3][2] = {1, 3, 5, 0, 0, 0}
//	int* p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}



#include<assert.h>
#include<string.h>
//1.һ����תһ��
//void left_move(char* arr, int k)
//{
//    assert(arr != NULL);
//    int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//����תһ���ַ�
//		//1
//		char tmp = *arr;
//		//2
//		for (int j = 0; j < len - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		//3
//		*(arr + len - 1) = tmp;
//	}
//}
 
//2.������ת��
//abcdef
//bafedc
//cdefab

//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* arr, int k)
//{
//	assert(arr != NULL);
//	int len = strlen(arr);
//	reverse(arr, arr + k - 1);//�������
//	reverse(arr + k, arr + len - 1);//�����ұ�
//	reverse(arr, arr + len - 1);//��������
//}

//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s\n", arr);
//	return 0;
//}