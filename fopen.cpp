//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<windows.h>
//#define len 5
//int main(void)
//{
//	
//	double a[len] = { 1.0,2.0,3.0,4.0,5.0 };
//	double b = 0.0;
//	size_t ret_code = 0;
//	FILE *fp = fopen("test.bin", "wb"); // 必须用二进制模式
//	fwrite(a, sizeof(*a), len, fp); // 写 double 的数组
//	fclose(fp);
//	fp = fopen("test.bin", "rb");
//	// 读 double 的数组
//	while ((ret_code = fread(&b, sizeof(double), 1, fp)) >= 1)
//	{
//		printf("%1.1lf\n", b);
//	}
//	if (feof(fp))
//		printf("Error reading test.bin: unexpected end of file\n");
//	else if (ferror(fp)) {
//		perror("Error reading test.bin");
//	}
//	fclose(fp);
//	fp = NULL;
//}