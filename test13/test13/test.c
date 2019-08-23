#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
void menu()
{
	printf("*******1.add   2.sub*********\n");
	printf("*******3.mul   4.div*********\n");
	printf("*******0.exit ***************\n");
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择");
		scanf("%d", &input);
		int(*parr[5])(int, int) = { 0, add, sub, mul, div };
		if (input >= 1 && input <= 4)
		{
			int ret = 0;
			int x = 0;
			int y = 0;
			printf("请输入两个操作数");
			scanf("%d%d", &x, &y);
			ret = parr[input](x, y);
			printf("%d\n", ret);
		}
		else if (0 == input)
			printf("退出\n");
		else
			printf("选择错误\n");
	} while (input);
	return 0;
}