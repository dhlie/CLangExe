#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
/*
��Ŀ��������������x,y,z���������������С���������
*/
void exercise05(void) {
	int x, y, z, tmp;
	printf("�����������������ԡ������ֿ���\n");
	scanf("%d, %d, %d", &x, &y, &z);
	printf("�����������Ϊ��%d, %d, %d\n", x, y, z);

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