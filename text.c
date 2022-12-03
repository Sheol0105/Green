#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//打印99乘法表
int main()
{
	int i = 0;https://github.com/Sheol0105/Green/blob/main/text.c
	for (i = 1; i <= 9; i++) //行数
	{
		int j = 0;
		for (j = 1; j <= i; j++) //打印一行
			printf("%4d * %d = %-2d", i, j, i * j);
		printf("\n");
	}
	return 0;
}
