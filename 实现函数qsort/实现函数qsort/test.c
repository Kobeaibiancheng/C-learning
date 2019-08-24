#define _CRT_SECURE_NO_WARNINGS 1

#include<stdlib.h>
//void qsort( void *base, size_t num, size_t width, 
//           int (*compare )(const void *elem1, const void *elem2 ) );
#include<stdio.h>
#include<string.h>

//   sqort函数的使用
void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void Test1()
//{
//	int arr[10] = { 2, 3, 1, 4, 6, 5, 9, 8, 7, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), Swap);
//	Print(arr, sz);
//}
//struct stu
//{
//	char name[20];
//	short age;
//};
//int CmpByName( )
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//int CmpByAge(const void* e1, const void* e2)
//{
//	return (*(struct stu*)e1).age - (*(struct stu*)e2).age;
//}
//void Test2()
//{
//	struct stu arr[] = { { "zhangsan", 20 }, { "wangyu", 30 }, {"lisi", 15} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//qsort(arr, sz, sizeof(arr[0]), CmpByName);
//	qsort(arr, sz, sizeof(arr[0]), CmpByAge);
//
//}
//int main()
//{
//	//Test1();
//	Test2();
//	return 0;
//}





//    sqort函数的模拟实现

void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *(buf1+i);
		*(buf1 + i) = *(buf2 + i);
		*(buf2 + i) = tmp;
	}
}
void BubbleSort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base+width*j,(char*)base+(j+1)*width)>0)
			{
				Swap((char*)base + width*j, (char*)base + (j + 1)*width,width);			
			}
		}
	}
}


int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void Test3()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz, sizeof(arr[0]), cmp_int);
	Print(arr, sz);
}





struct stu
{
	char name[20];
	short age;
};
int cmp_struct(const void* e1, const void* e2)
{
	return (*(struct stu*)e1).age - (*(struct stu*)e2).age;
}
void Test4()
{
	struct stu arr[] = { { "zhangsan", 20 }, { "lisi", 15 },{"wangwu", 30} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz, sizeof(arr[0]), cmp_struct);
}

int main()
{
	Test3();
	//Test4();
	return 0;
}