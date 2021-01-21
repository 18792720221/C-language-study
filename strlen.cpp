//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<windows.h>
//#include<assert.h>
//int my_strlen(const char *p) 
//{
//	assert(p);
//	int count=0;
//	
//	while (*p!='\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//////库函数
////size_t __cdecl strlen(
////	const char * str
////)
////{
////	const char *eos = str;
////
////	while (*eos++);
////
////	return(eos - str - 1);
////}
//
//int main()
//{
//	int ret;
//	char arr[] = "abcdef";
//	printf("%p\n", arr);
//	//ret =strlen(arr);
//	ret = my_strlen(arr);
//	printf("%d\n", ret);
//	printf("%p\n", arr);//函数调用时新建了指针
//	////测试易错点
//	//const char*str1 = "abcdef";
//	//const char*str2 = "bbb";
//	//if (strlen(str2) - strlen(str1) > 0)
//	//{
//	//	printf("str2>str1\n");
//	//}
//	//else
//	//{
//	//	printf("srt1>str2\n");
//	//}
//	return 0;
//	
//}