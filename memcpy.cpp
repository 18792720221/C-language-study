//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<windows.h>
//#include<assert.h>
//void my_memcpy(void* dest, const void* src, size_t count)
//{
//	assert(dest&&src);
//	char* p1 = (char*)dest;
//	char* p2=(char*)src;
//	if (p2 < p1)
//	{
//		p1 = p1 + count-1;
//		p2 += count-1;
//		while (*p1-- = *p2--, --count);
//	}
//	else 
//	{
//		while (*p1++ = *p2++, --count);
//	}
//
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = "abcdefgh";
//	my_memcpy(arr2, arr2+2, 3);
//	//memcpy(arr2, arr1,sizeof(arr1));
//	return 0;
//}