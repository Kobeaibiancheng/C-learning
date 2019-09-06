#define _CRT_SECURE_NO_WARNINGS 1


//malloc
//calloc
//realloc
//这三个函数开辟的空间在内存中的堆区
//使用规则，自己开辟自己释放
//free函数用来释放内存

#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
#include<string.h>

//malloc   在堆区开辟size大小个内存空间
//         如开辟成功返回起始地址（void*）
//         如开辟失败，返回NULL
//         自己开辟，自己释放
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };//在内存中的栈区开辟空间，会自动释放
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (NULL == p)
//	{
//		printf("%s", strerror(errno));
//	}
//	for (i = 0; i < 10; i++)
//	{
//		*(p+i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	//for (i = 0; i < 10; i++)
//	//{
//	//	p[i] = i;                     //p[i] == *(p+i)
//	//}
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", p[i]);          //p[i] == *(p+i)
//	//}
//	free(p);
//	p = NULL;
//	return 0;
//
//}

//calloc      在堆区开辟空间num个element(元素)，每一个element的大小为size个字节
//            若开辟成功返回起始地址（void*），若开辟失败返回NULL
//            自己开辟，自己释放
//int main()
//{
//	char* p = (char*)calloc(10, sizeof(char));
//	int i = 0;
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//realloc      void* realloc(void* ptr, size_t size)
//             1.ptr是要调整的内存地址
//             2.size是调整后新的大小（字节）
//             3.返回值是调整后新的内存起始地址
//             4.realloc调整原内存的空间大小的基础上，还会将原内存的数据移动到新的空间
//             5.在调整内存时会有两种情况
//               *原有空间后有足够空间
//                要扩展内存就直接原有内存之后直接追加空间，原来空间的数据不发生变化
//               *原有空间后没有足够的空间
//                原有空间之后没有足够多的空间时，扩展的方法是：
//                在堆空间上另找一个合适大小的连续空间来使用，这样函数返回的是一个新的内存地址。

//int main()
//{
//	int* ptr =(int*)malloc(100);
//	if (ptr == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	int* p = (int*)realloc(ptr, 100);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	ptr = p;
//	free(ptr);
//	ptr = NULL;
//	return 0;
//}

//int main()
//{
//	while (1)
//	{
//		malloc(1);
//	}
//	return 0;
//}

//    常见的动态内存错误

////1.对NULL指针的解引用操作
//void test()
//{
//	int* p = (int*)malloc(INT_MAX / 4);
//	*p = 20;
//	free(p);
//	p = NULL;
//}
//
////2.对动态开辟空间的越界访问
//void test()
//{
//	int i = 0;
//	char* p = (char*)malloc(10 * sizeof(char));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = 'x'; //当i = 10时越界访问
//	}
//	free(p);
//	p = NULL;
//
//}


////3.对非动态开辟内存使用free释放
//void Test()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	free(p);
//	p = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


////4.使用free释放动态内存开辟的一部分
//void Test()
//{
//	int i = 0;
//	int* p = (int*)malloc(10 * sizeof(int));
//	++p;
//	free(p);            //p已经不是开辟的动态内存的起始地址了，free了一部分
//	p = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


////5.对开辟的动态内存进行多次释放free
//void Test()
//{
//	char* p =(char*)malloc(100);
//	free(p);
//	free(p);
//	p = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


////6.开辟的动态内存忘记释放（内存泄漏）
//void Test()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	*p = 20;               //动态内存忘记释放
//}
//
//int main()
//{
//	Test();
//	return 0;
//}