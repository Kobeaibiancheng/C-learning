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

char* MyStrcpy(char* dest, const char* str)
{
	char* arr = dest;
	assert(dest != NULL);
	assert(str != NULL);
	//while (*str != '\0')
	//{
	//	*dest = *str;
	//	dest++;
	//	str++;
	//}
	//*dest = *str;
	//return arr;
	while (*dest++ = *str++)  //先解引用，然后赋值，再++；
	{                        //直到将'\0'赋值，'\0'的ASCII值是0，循环结束
		;
	}
	return arr;
}
int main()
{
	char arr1[10] = { 0 };
	char arr2[] = "hello";
	printf("%s\n", MyStrcpy(arr1, arr2));
	return 0;
}