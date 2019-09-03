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
int main()
{
	int i = 0;
	int arr[10] = { 0 };//在内存中的栈区开辟空间，会自动释放
	int* p = (int*)malloc(10 * sizeof(int));
	if (NULL == p)
	{
		printf("%s", strerror(errno));
	}
	for (i = 0; i < 10; i++)
	{
		*(p+i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p+i));
	}
	//for (i = 0; i < 10; i++)
	//{
	//	p[i] = i;                     //p[i] == *(p+i)
	//}
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ", p[i]);          //p[i] == *(p+i)
	//}
	free(p);
	p = NULL;
	return 0;

}