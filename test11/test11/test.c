#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int Port()
//{
//	int a = 1;
//	//char* pa = (char*)&a;
//	//if (1 == *pa)
//	//	return 1;
//	//else
//	//	return 0;
//	return *(char*)&a;//先取a的地址（int*，可以访问四个字节）
//	                 //再强制转换为char*, 最后解引用（*）访问一个字节
//}
//int main()
//{
//	//int a = 0x11223344;
//	if (1 == Port())
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}

#include<assert.h>
//int MyStrlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello";
//	int ret = MyStrlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}

//char* MyStrcpy(char* dest, const char* str)
//{
//	char* arr = dest;
//	assert(dest != NULL);
//	assert(str != NULL);
//	//while (*str != '\0')
//	//{
//	//	*dest = *str;
//	//	dest++;
//	//	str++;
//	//}
//	//*dest = *str;
//	//return arr;
//	while (*dest++ = *str++)  //先解引用，然后赋值，再++；
//	{                        //直到将'\0'赋值，'\0'的ASCII值是0，循环结束
//		;
//	}
//	return arr;
//}
//int main()
//{
//	char arr1[10] = { 0 };
//	char arr2[] = "hello";
//	printf("%s\n", MyStrcpy(arr1, arr2));
//	return 0;
//}


//A选手说：B第二，我第三； 
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++)
		for (b = 1; b <= 5; b++)
			for (c = 1; c <= 5; c++)
				for (d = 1; d <= 5; d++)
					for (e = 1; e <= 5; e++)
					{
		if (((b == 1) + (a == 3) == 1) &&
			((b == 2) + (e == 4) == 1) &&
			((c == 1) + (d == 2) == 1) &&
			((c == 5) + (d == 3) == 1) &&
			((e == 4) + (a == 1) == 1) == 1)
		{
			printf("a=%d b=%d c=%d d=%d e=%d \n", a, b, c, d, e);
		}
					}
	return 0;
}