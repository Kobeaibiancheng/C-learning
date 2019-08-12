#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	int sum = Add(num1, num2);
//	printf("sum = %d\n", sum);
//	system("pause");
//	return 0;
//}
//extern int _gay;
//int main()
//{
//	printf("%d\n", _gay);
//	system("pause");
//	return 0;
//}
//void Add()
//{
//	static int a = 0;
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		Add();
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int x = 2;
//	int y = 5;
//	int tmp = 0;
//	printf("x = %d\ny = %d\n", x, y);
//	tmp = x;
//	x = y;
//	y = tmp;
//	printf("x = %d\ny = %d\n", x, y);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int x = 2;
//	int y = 5;
//	printf("x = %d\ny = %d\n", x, y);
//	x = x + y;
//	y = x - y;
//	x = x - y;
//	printf("x = %d\ny = %d\n", x, y);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int x = 2;
//	int y = 5;
//	printf("x = %d\ny = %d\n", x, y);
//	x = x * y;
//	y = x / y;
//	x = x / y;
//	printf("x = %d\ny = %d\n", x, y);
//	system("pause");
//	return 0;
//}



//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	printf("num1 = %d num2 = %d\n", num1, num2);
//	num1 = num1 ^ num2;
//	num2 = num1 ^ num2;
//	num1 = num1 ^ num2;
//	printf("num1 = %d num2 = %d\n", num1, num2);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 2, 3, 1, 4, 7, 8, 6, 5, 9, 10 };
//	int max = arr[0];
//	int i = 0;
//	int flag = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//			flag = i;
//		}
//	}
//	printf("max = %d\n", max);
//	printf("ÏÂ±êÎª%d\n", flag);
//	system("pause");
//	return 0;
//



//int main()
//{
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	int tmp = 0;
//	scanf("%d%d%d", &x, &y, &z);
//	if (x < y)
//	{
//		tmp = y;
//		y = x;
//		x = tmp;
//	}
//	if (x < z)
//	{
//		tmp = z;
//		z = x;
//		x = tmp;
//	}
//	if (y < z)
//	{
//		tmp = z;
//		z = y;
//		y = tmp;
//	}
//	printf("%d > %d > %d\n", x, y, z);
//	system("pause");
//	return 0;
//
//}


//
//int main()
//{
//
//	int x = 0;
//	int y = 0;
//	scanf("%d%d", &x, &y);
//	if (x > y)
//	{
//		while (1)
//		{
//			if (x%y == 0);
//			{
//				printf("%d\n", y);
//				break;
//			}
//			y--;
//		}
//	}
//	if (y > x)
//	{
//		while (1)
//		{
//			if (y%x == 0);
//			{
//				printf("%d\n", x);
//				break;
//			}
//			x--;
//		}
//	}
//	
//	system("pause");
//	return 0;
//}

int main()
{
	int num1 = 24;
	int num2 = 18;
	int a = 0;
	while (a = num1%num2)
	{
		num1 = num2;
		num2 = a;
	}
	printf("%d\n", num2);
	system("pause");
	return 0;
}

//typedef unsigned int u_int;
//int main()
//{
//	unsigned int a = 10;
//	u_int b = 0;
//	system("pause");
//	return 0;
//}
//typedef struct student
//{
//	int score;
//	char name;
//}S;
//int main()
//{
//	struct student s;
//	S ss;
//
//	system("pause");
//	return 0;
//}