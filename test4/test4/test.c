#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	int i = 1;
//	int j = 1;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		ret = 1;//初始化为1
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//
//}
//#include<Windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!";
//	char arr2[] = "#################";
//	int left = 0;
//	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//等待一秒钟
//		system("cls");//清屏
//		left++;
//		right--;
//	}
//	system("pause");
//	return 0;
//}



//#include<string.h>
//int main()
//{
//	char passcard[20] = { 0 };
//	int i = 0;
//	printf("请输入密码 >\n");
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%s", &passcard);
//		if (strcmp(passcard, "123456") == 0)
//		{
//			printf("密码输入正确\n");
//			break;
//		}
//		else
//		{
//			printf("密码输入错误\n");
//		}
//	}
//	if (3 == i)
//	{
//		printf("退出程序\n");
//	}
//	system("pause");
//	return 0;
//}



//int main()
//{
//	char arr[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("您的电脑将在一分钟后关机，输入我是猪取消关机：\n");
//		scanf("%s", arr);
//		if (strcmp(arr, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}




//#include<time.h>
//
//void menu()
//{
//	printf("******** 1.play********\n");
//	printf("******** 0.exit********\n");
//	printf("***********************\n");
//}
//void game()
//{
//	int num = 0;
//	int ret = 0;
//	printf("猜数字游戏，请在1-100内猜数字\n");
//	ret = rand() % 100 + 1;
//	while (1)
//	{
//		scanf("%d", &num);
//		if (num > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (num < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新输入>\n");
//		}
//	} while (input);
//	system("pause");
//	return 0;
//}


//int main()
//{
//		int line = 7;
//		int i = 0;
//		for (i = 0; i < line; i++)
//		{
//			int j = 0;
//			for (j = 0; j < line - i - 1; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j < 2 * i + 1; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		for (i = 0; i < line - 1; i++)	
//		{ 
//			int j = 0;		
//			for (j = 0; j <= i; j++)
//			{ 
//				printf(" ");
//			}		
//			for (j = 0; j < (line - 1 - i) * 2 - 1; j++)	
//			{
//				printf("*");
//			}		
//			printf("\n");
//		}			
//	system("pause");
//	return 0;
//}


int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int i = 0;
	for (i = 0; i < 1000; i++)
	{
		a = i % 10;
		b = i / 100;
		c = i % 100 / 10;
		if (a*a*a + b*b*b + c*c*c == i)
		{
			printf("%d ", i);
		}

	}
	system("pause");
	return 0;
}
//int main()
//{
//	int sum = 0;
//	int a = 0;
//	int i = 0;
//	int ret = 0;
//	scanf("%d", &a);
//	for (i = 1; i <= 10000; i *= 10)
//	{
//		ret = ret + a * i;
//		sum = sum + ret;
//		
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}