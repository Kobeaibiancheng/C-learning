#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//void PrintRide(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	PrintRide(n);
//	return 0;
//}

//void ExchangeNum(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d\nb = %d\n", a, b);
//	ExchangeNum(&a,&b);
//	printf("a = %d\nb = %d\n", a, b);
//
//	return 0;
//}
//void IsLeepyear(int year)
//{
//	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
//		printf("是闰年！\n");
//	else
//		printf("不是闰年!\n");
//}
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	IsLeepyear(year);
//	return 0;
//}
//void Empty(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Reverse(int arr[], int sz)
//{
//	int i = 0;
//	int j = sz - 1;
//	while (i<=j)
//	{
//		int tmp = arr[i];
//		arr[i] = arr[j];
//		arr[j] = tmp;
//		i++;
//		j--;
//	}
//}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Empty(arr,sz);
//	//Reverse(arr, sz);
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//int IsPrime(int num)
//{
//	int i= 0;
//	for (i = 2; i < num; i++)
//	{
//		if (num%i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (IsPrime(num))
//		printf("是素数\n");
//	else
//		printf("不是素数\n");
//	return 0;
//}


//递归的方式
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}



//非递归方式
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}