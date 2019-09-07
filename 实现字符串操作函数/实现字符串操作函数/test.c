#define _CRT_SECURE_NO_WARNINGS 1

#include<assert.h>
#include<stdio.h>


//char* MyStrcpy(char* dest, const char* src)
//{
//	char* str = dest;
//	assert(dest&&src);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return str;
//
//}
//
//
//char* MyStrcat(char* dest, const char* src)
//{
//	char* str = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return str;
//}
//
//
//int MyStrcmp(const char* str1, const char* str2)
//{
//	assert(str1&&str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}



int main()
{
	//char arr[20] = { 0 };
	char arr[20] = "hello ";
	int ret = 0;
	//MyStrcpy(arr, "hello world");
	//MyStrcat(arr, "world");
	//ret = MyStrcmp(arr, "hfllo ");
	//printf("%d\n", ret);
	printf("%s\n", arr);
	return 0;
}