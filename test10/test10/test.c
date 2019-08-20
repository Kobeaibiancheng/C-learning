#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//求二进制中1的个数方法一
//int count_one_bits(unsigned int n)
//{
//	int i = 0;
//	int count = 0;
//	//for (i = 0; i < 32; i++)
//	//{
//	//	//00000000000000000000000000001111
//	//	//00000000000000000000000000000001
//	//	if (1 == (n & 1))//n&1(n和1按位与)    有1则按位与结果为1，没有1则按位与结果为0
//	//		count++;
//	//	n >>= 1;
//	//}
//	while (n)
//	{
//		if (1 == (n & 1))
//			count++;
//		n >>= 1;
//	}
//	return count;
//}
//int main()
//{
//	int n = 15;
//	int ret = count_one_bits(n);
//	printf("%d\n", ret);
//	return 0;
//}

//求二进制中1的个数方法二
//int count_one_bits(unsigned int n)
//{
//	int count = 0;
//	//00000000000000000000000000001111- n
//	//00000000000000000000000000001110-(n-1)
//	//逻辑与
//	//00000000000000000000000000001110
//	//00000000000000000000000000001101
//	//逻辑与
//	//00000000000000000000000000001100      //逻辑与一次，干掉一个1
//	//00000000000000000000000000001011
//	//逻辑与
//	//00000000000000000000000000001000
//	//00000000000000000000000000000111
//	//逻辑与
//	//00000000000000000000000000000000 - 0
//	while (n)
//	{
//		n = n&(n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = 15;
//	int ret = count_one_bits(n);
//	printf("%d\n", ret);
//	return 0;
//}

//打印整数的每一位
//void Print(int n)
//{
//	if (n > 9)
//		Print(n / 10);
//	printf("%d ", n%10);
//}
//
//int main()
//{
//	int n = 1234;
//	Print(n);
//	return 0;
//}

//32位两个整型二进制位有多少不同bit
//int main()
//{
//	int a = 1999;
//	int b = 2299;
//	//0101 -5
//	//1011 -11
//	//0001
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((1 == (a & 1)) && (1 == (b & 1)) || (0 == (a & 1)) && (0 == (b & 1)))
//			count++;
//		a >>= 1;
//		b >>= 1;
//	}
//	printf("%d\n", 32 - count);
//	return 0;
//}

void print_num(unsigned value)
{
   int count = 0;//计算二进制 位数
   int a[32] = { 0 };
   int i = 0;
   while (value) 
   {      
	    a[i++] = value % 2;
	    value /= 2;
	    count++;
		
	}
	printf("奇数序列\n");
	for (i = count; i >= 0; i -= 2)
	{
		printf("%d ", a[i]);
	}
	    printf("\n");
	    printf("偶数序列\n");
	for (i = count - 1; i >= 0; i -= 2) 
	{
		printf("%d ", a[i]);
	}
	    printf("\n");
}
int main()
{
	int value = 11;// 1011
	print_num(value);
	return 0;
}