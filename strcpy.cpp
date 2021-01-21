//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<windows.h>
//#include<assert.h>
//
//
//char* my_strcopy(char*dest, const char*src)
//{
//	assert(dest&&src);
//	char*ret = dest;
//	while (*dest++ = *src++);
//
//	return ret;
//}
//
//int main()
//{
//	char str1[] = "abc54115";
//	char str2[] = "defg";//源串长于目的串时报错但会执行
//	//char *p = strcpy(str1, str2);
//	char *p = my_strcopy(str1,str2);
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//	printf("%p	%p\n", p,str1);
//	return 0;
//}