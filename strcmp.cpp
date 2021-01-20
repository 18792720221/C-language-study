//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<windows.h>
//#include<assert.h>
//int my_strcmp(const char *str1, const char *str2)
//{
//	assert(str1&&str2);
//	while (*str2==*str1)
//	{
//		if (*str1 == '\0') return 0;
//		str1++, str2++;
//	}
//	 return ((int)*str1-(int)*str2);
//}
//
////¿âº¯Êý
////int  strcmp(
////	const char * src,
////	const char * dst
////)
////{
////	int ret = 0;
////
////	while ((ret = *(unsigned char *)src - *(unsigned char *)dst) == 0 && *dst)
////	{
////		++src, ++dst;
////	}
////
////	return ((-ret) < 0) - (ret < 0); // (if positive) - (if negative) generates branchless code
////}
//
//int main()
//{
//	char str1[] = "abc";
//	char str2[] = "abc";
//    //int ret = strcmp(str1, str2);
//	int ret = my_strcmp(str1,str2);
//	printf("%d\n", ret);
//	return 0;
//}