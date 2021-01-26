//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<windows.h>
//#include<assert.h>
//char* my_strstr(const char*str, const char*substr) 
//{
//	assert(str&&substr);
//	if (!*substr) return (char*)str;
//	const char*p1 = str, *p2 = substr;
//	const char*cur = str;
//	while (*cur) 
//	{
//		p1=cur;
//		p2 = substr;
//		while (*p1 == *p2&&*p1&&*p2)
//		{
//			p1++; p2++;			
//		}
//		if (!*p2) return (char*)cur;
//		
//		else if(!*p1) return NULL;
//		cur++;
//	}
//	return NULL;
//}
//
//
//int main()
//{
//	char arr1[] = "";
//	char arr2[] = "abd";
//	//char *ret = strstr(arr1, arr2);
//	char *ret = my_strstr(arr1, arr2);
//	printf("%s\n", ret);
//
//	return 0;
//}