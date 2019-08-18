#define _CRT_SECURE_NO_WARNINGS 1
#define INT_PTR int*
typedef int* int_ptr;


#include<stdio.h>
//int main()
//{
//	//INT_PTR a, b;
//	//int_ptr c, d;
//	int arr[4][5] = { 0 };
//	return 0;
//}
//
//int OneNum(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a /= 2;//相当于右移一位(a>>1)
//	}
//	return count;
//	
//}
//int main()
//{
//	int a = 11;
//	//00000000000000000000000000001011
//	//int a = 1;
//	//00000000000000000000000000000001
//	int ret = OneNum(a);
//	printf("%d\n", ret);
//	return 0;
//}

//
//int OneNum(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a >>= 1;//右移一位相当于除以2
//	}
//	return count;
//}
//int main()
//{
//	int a = 11;
//	int ret = OneNum(a);
//	printf("%d\n", ret);
//	return 0;
//}


int OneNum(int a)
{
	int count = 0;
	while (a)
	{
		//1011&1010 == 1010  (10)
		//1010&1001 == 1000  (8)
		//1000&0111 == 0000  (0)
		a = a & (a - 1);
		count++;
	}
	return count;
}
int main()
{
	int a = 11;
	int ret = OneNum(a);
	printf("%d\n", ret);
	return 0;
}