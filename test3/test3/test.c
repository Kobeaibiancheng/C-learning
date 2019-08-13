#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	switch (num)
//	{
//	case 1:
//		printf("星期一");
//		break;
//	case 2:
//		printf("星期二");
//		break;
//	case 3:
//		printf("星期三");
//		break;
//	case 4:
//		printf("星期四");
//		break;
//	case 5:
//		printf("星期五");
//		break;
//	case 6:
//		printf("星期六");
//		break;
//	case 7:
//		printf("星期天");
//		break;
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int arr1[5] = { 1, 3, 5, 7, 9 };
//	int arr2[5] = { 2, 4, 6, 8, 10 };
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//    system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int flag = 1;
//	float ret = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		ret += flag*(1.0 / i);
//		flag = -flag;
//	}
//	printf("%f", ret);
//	system("pause");
//	return 0;
//}


int main()
{

	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i / 10 == 9)
			count++;
		if (i % 10 == 9)
			count++;
	}
	printf("%d", count);
	system("pause");
	return 0;
}