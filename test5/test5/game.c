#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("************ 1.play***********\n");
	printf("************ 0.exit***********\n");
	printf("******************************\n");
}

void game()
{
	int num = 0;
	int ret = rand() % 100 + 1;
	/*printf("%d\n", ret);*/
	printf("游戏开始,请在1-100猜数字：\n");
	while (1)
	{
		scanf("%d", &num);
		if (num > ret)
			printf("猜大了\n");
		else if (num < ret)
			printf("猜小了\n");
		else
		{
			printf("猜对了！\n");
			break;
		}
	}
}

int binary_search(int* ptr, int k, int sz)
{
	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (ptr[mid] > k)
			right = mid - 1;
		else if (ptr[mid] < k)
			left = mid + 1;
		else
			return mid;
	}
	return -1;
}