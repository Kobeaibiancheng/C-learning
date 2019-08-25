#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int average = a + (a - b) / 2;
//	printf("%d\n", average);
//	return 0;
//}

//int main()
//{
//	int arr[9] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int k = arr[0];
//
//	for (i = 1; i < sz; i++)
//	{
//		k ^= arr[i]; //001
//		            //100
//	}
//	printf("%d\n", k);
//	return 0;
//}
#include<math.h>
//    将一个书的二进制位左右翻转
//unsigned int reverse_bit(unsigned int a)
//{
//	int i = 0;
//	unsigned int sum = 0;
//	for (i = 0; i < 32; i++)
//	{
//		//sum += ((a >> i)&1)*pow(2, 31 - i);
//		sum += ((a >> i) & 1)*(1 << (31 - i));
//	}
//	return sum;
//}
//int main()
//{
//	int i = 0;
//	unsigned int a = 25;
//	//00000000000000000000000000011001
//	//00000000000000000000000000000001
//	//10011000000000000000000000000000
//	unsigned int ret = reverse_bit(a);
//	printf("%u\n",ret);
//	return 0;
//}

//unsigned reverse_bit(unsigned int num)
//{
//	int i = 0;
//	unsigned int ret = 0;
//	for (i = 0; i < 32; i++)
//	{
//		ret <<= 1;
//		ret |= ((num >> i)&1);
//	}
//	return ret;
//}
//
//int main()
//{
//	unsigned int a = 25;
//	unsigned int ret = reverse_bit(a);
//	printf("%u\n", ret);
//	return 0;
//
//}




//指针访问二级数组的元素,形参是 指针数组
//void Print(int(*parr)[5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			parr指针变量中存放arr[3][5]第一行的地址，parr+i表示第i行的地址
//			*(parr+i)访问第i行的内容，(*(parr+i)+j)访问第i行第j列的元素
//			printf("%d ", *((*parr+i)+j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1, 2, 3, 4, 5, 2, 3, 4, 5, 6, 3, 4, 5, 6, 7 };
//	Print(arr, 3, 5);
//	return 0;
//}

//访问二级数组，用二级数组接收
//void Print(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1, 2, 3, 4, 5, 2, 3, 4, 5, 6, 3, 4, 5, 6, 7 };
//	Print(arr, 3, 5);
//	return 0;
//}
//void Print(char (*parr)[7])
//{
//	printf("%s\n", parr);
//}
//int main()
//{
//	char arr[] = "abcedf";
//	Print(&arr);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int (*p)[10] = &arr;
	//for (i = 0; i < sz; i++)
	//{
	//	printf("%d ", (*p)[i]);
	////}
	//int* p = arr;
	//for (i = 0; i < sz; i++)
	//{
	//	printf("%d ", *(p + i));
	//}
//	return 0;
//}
#include<assert.h>


int MyStrlen(const char* ptr)
{
	int count = 0;
	assert(ptr != NULL);
	while (*ptr != '\0')
	{
		count++;
		ptr++;
	}
	return count;

}
void ReverseString(char* str)
{
	int line = MyStrlen(str);
}

int main()
{
	char arr[] = "student a am i";
	ReverseString(arr);
	printf("%s\n",arr);
	
	return 0;
}