#include <stdio.h>
#include <limits.h>
#include <math.h>
/*
��Ŀ��һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�
*/
void exercise03(void) {
	long i, x, y;
	//x*x = i + 100��
	//y*y = i + 268;
	for (size_t i = 0; i < INT_MAX; i++)
	{
		x = sqrt(i + 100);
		y = sqrt(i + 268);
		if (x*x == i + 100 && y*y == i + 268)
		{
			printf("i = %d\n", i);
			break;
		}
	}
}