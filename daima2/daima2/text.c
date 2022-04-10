#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	char* c[] = { "ENTER", "NEW", "POINT", "FIRST" };
//	char** cp[] = { c + 3, c + 2, c + 1, c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//POINT *++cpp 是 c+2, 再解引用得POINT  （cpp 指向 c+2）
//	printf("%s\n", *-- * ++cpp + 3);//ER *++cpp 是 c+1, 先 -- 后解引用得到E的地址, 再后移三个字符，打印出ER （cpp 指向 c+1）
//	printf("%s\n", *cpp[-2] + 3);//ST  等价于* *(cpp-2) + 3, *(cpp-2)得到c+3 ，再解引用后 后移三个字符，打印出ST  （cpp 指向 c+1）
//	printf("%s\n", cpp[-1][-1] + 1);//EW  等价于*(*(cpp-1) - 1) + 1, *(cpp-1) 得到 c+2, 再 -1 解引用指向N的地址，再后移一个字符，打印出EW
//	return 0;
//}

//int main()
//{
//	//数组名是首元素地址，但有两个例外
//	//1.sizeof(数组名) - 数组名表示整个数组
//	//2.&数组名 - 数组名表示整个数组
//	//一维数组
//	//int a[] = { 1, 2, 3, 4 };
//	//printf("%d\n", sizeof(a));//16!!!  sizeof(数组名) - 计算的是数组总大小 - 单位是字节
//	//printf("%d\n", sizeof(a + 0));//4(32位)/8(64位)  数组名表示首元素的地址，a+0还是首元素地址，地址的大小是4/8个字节
//	//printf("%d\n", sizeof(*a));//4  数组名表示首元素地址，*a就是首元素，int类型占四个字节
//	//printf("%d\n", sizeof(a + 1));//4/8 数组名表示首元素的地址，a+1是第二个元素地址
//	//printf("%d\n", sizeof(a[1]));//4  第二个元素大小
//	//printf("%d\n", sizeof(&a));//4/8!!! &a取出的是数组的地址，但数组地址也是地址
//	//printf("%d\n", sizeof(*&a));//16!!! &a取出数组的地址，数组的地址解引用访问的是数组，sizeof计算的就是数组的大小
//	//printf("%d\n", sizeof(&a + 1));//4/8  &a是数组的地址，&a+1是跳过数组的地址，但仍是地址
//	//printf("%d\n", sizeof(&a[0]));//4/8
//	//printf("%d\n", sizeof(&a[0] + 1));//4/8
//
//	////字符数组
//	/*char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };*/
//	//printf("%d\n", sizeof(arr));//6!!! sizeof(数组名)计算的是数组大小
//	//printf("%d\n", sizeof(arr + 0));//4/8
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4/8
//	//printf("%d\n", sizeof(&arr + 1));//4/8
//	//printf("%d\n", sizeof(&arr[0] + 1));//4/8
//	//printf("%d\n", strlen(arr)); // 随机值
//	//printf("%d\n", strlen(arr + 0));//随机值
//	////printf("%d\n", strlen(*arr));//err
//	////printf("%d\n", strlen(arr[1]));//err
//	//printf("%d\n", strlen(&arr));//随机值
//	//printf("%d\n", strlen(&arr + 1));//随机值 - 6
//	//printf("%d\n", strlen(&arr[0] + 1));//随机值 - 1
//
//	//二维数组
//	//int a[3][4] = { 0 };
//	////printf("%p\n%p\n%p\n%p\n", &a[0][0], a[0], a + 1, &a[0] + 1);//四个地址相等，表达方式是等价的
//	//printf("%d\n", sizeof(a));//48
//	//printf("%d\n", sizeof(a[0][0]));//4
//	//printf("%d\n", sizeof(a[0]));//16 a[0]相当于第一行作为一维数组的数组名，sizeof(a[0])把数组名单独放在sizeof()内，计算的是第一行的大小
//	//printf("%d\n", sizeof(a[0] + 1));//4/8  a[0]是第一行的数组名，数组名此时是首元素的地址，a[0]其实就是第一行第一个元素的地址
//	////所以a[0]+1 就是第一行第二个元素的地址  地址的大小是4/8个字节
//	//printf("%d\n", sizeof(*(a[0] + 1)));//4  *(a[0] + 1) 是第一行第二个元素
//	//printf("%d\n", sizeof(a + 1));//4/8 a是二维数组数组名 没有sizeof(a), 也没有&a，所以a是首元素地址
//	////把二位数组看成一维数组时，二维数组的首元素是它的一行，a就是第一行（首元素）的地址，a+1就是第二行的地址
//	//printf("%d\n", sizeof(*(a + 1)));//16!!!  sizeof(a[1]) 计算第二行的大小
//	//printf("%d\n", sizeof(&a[0] + 1));//4/8 第二行的地址
//	//printf("%d\n", sizeof(*(&a[0] + 1)));//16 计算第二行的大小
//	//printf("%d\n", sizeof(*a));//16!!! a是首元素地址，第一行的地址， *a就是第一行，sizeof(*a)就是计算第一行的大小
//	//printf("%d\n", sizeof(a[3]));//16
//
//
//	return 0;
//}

////内存？
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
//	int a[3][2] = { (0, 1),(2, 3), (4, 5) };  //逗号表达式  a[3][2] = {1, 3, 5, 0, 0, 0}
//	int* p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}



#include<assert.h>
#include<string.h>
//1.一次旋转一个
//void left_move(char* arr, int k)
//{
//    assert(arr != NULL);
//    int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//左旋转一个字符
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
 
//2.三步翻转法
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
//	reverse(arr, arr + k - 1);//逆序左边
//	reverse(arr + k, arr + len - 1);//逆序右边
//	reverse(arr, arr + len - 1);//逆序整体
//}

//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s\n", arr);
//	return 0;
//}