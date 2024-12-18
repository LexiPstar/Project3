#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<assert.h>

//size_t my_strlen(const char* str)
//{
//	size_t count = 0;
//	assert(str);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char a[] = "abcdef";
//	size_t n = my_strlen(a);
//	printf("%u",n);
//	return 0;
//}

//int main()
//{
//	char name[20];
//	strcpy(name, "zhang\0san");
//	printf("%s", name);
//	return 0;
//}

char* my_strcpy(char* str2, const char* str1)
{
	assert(str2);
	assert(str1);
	char* count = str2;
	while (*str2++=*str1++);
	return count;
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[20] = { 0 };
	my_strcpy(arr2, arr1);
	printf("%s", arr2);
	return 0;
}