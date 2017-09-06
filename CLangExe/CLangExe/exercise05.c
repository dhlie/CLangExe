#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
/*
题目：输入三个整数x,y,z，请把这三个数由小到大输出。
*/
void exercise05(void) {
	int x, y, z, tmp;
	printf("请输入三个整数，以‘，’分开：\n");
	scanf("%d, %d, %d", &x, &y, &z);
	printf("输入的三个数为：%d, %d, %d\n", x, y, z);

	if (x > y)
	{
		tmp = x;
		x = y;
		y = tmp;
	}

	if (x > z)
	{
		tmp = x;
		x = z;
		z = tmp;
	}

	if (y > z)
	{
		tmp = y;
		y = z;
		z = tmp;
	}

	printf("sort:%d, %d, %d\n", x, y, z);
}