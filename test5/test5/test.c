#define _CRT_SECURE_NO_WARNINGS 1

//#define Add(x,y) (x+y)
//
//

//int main()
//
//{
//
//	//int a = MAX;
//
//	printf("%d\n", Add(3, 5));
//
//	return 0;
//
//}

#include"game.h"
//
//
//
//int main()
//{
//	srand((unsigned)time(NULL));
//	int input = 0;
//	
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
//			printf("退出程序\n");
//			break;
//		default:
//			menu();
//		}
//	} while (input);
//	
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr,7,sz);
//	if (-1 == ret)
//		printf("找不到\n");
//	else
//		printf("找到了，下标为%d\n", ret);
//	return 0;
//}


//int main()
//{
//	char a = 0;
//	while (1)
//	{
//		a = getchar();
//		if (a >= 'a' && a <= 'z')
//			printf("%c", a - 32);
//		else if (a >= 'A' && a <= 'Z')
//			printf("%c", a + 32);
//		else if (a >= '1' && a <= '9')
//			;
//	}
//	return 0;
//}


int main()
{
	int i = 0;
	char arr[20] = { 0 };
	printf("请输入密码》\n");
	for (i = 0; i < 3; i++)
	{
		scanf("%s", arr);
		if (strcmp(arr, "123456") == 0)
		{
			printf("登陆成功！\n");
			break;
		}
		else
			printf("登陆失败\n");
	}
	return 0;
}