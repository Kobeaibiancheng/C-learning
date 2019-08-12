#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	system("pause");
//	return 0;
//}




//int is_prime(int i)
//{
//	int j = 0;
//	for (j = 2; j < i; j++)
//	{
//		if (i%j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	system("pause");
//	return 0;
//}



//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = i; j <= 9; j++)
//		{
//			printf("%d * %d = %2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}


//void print_ride()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = i; j <= 9; j++)
//		{
//			printf("%d * %d = %2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	print_ride();
//	system("pause");
//	return 0;
//}
  


//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
//			printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}



//int is_leapyear(int i)
//{
//	return (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0));
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (is_leapyear(i))
//			printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}
