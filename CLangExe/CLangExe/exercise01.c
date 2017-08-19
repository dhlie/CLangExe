#include <stdio.h>

/*
题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
*/
void exercise01(void) {
	int iarr[] = { 6, 2, 3, 4};

	printf("由%d, %d, %d, %d组成的互不相同且无重复数字的三位数有：\n", iarr[0], iarr[1], iarr[2], iarr[3]);
	int total = 0;
	for (int i = 0; i < 4; i++)
	{
		int hBit = iarr[i];
		for (int i = 0; i < 4; i++)
		{
			if (iarr[i] == hBit) continue;
			int tBit = iarr[i];
			for (int i = 0; i < 4; i++)
			{
				if (iarr[i] == hBit || iarr[i] == tBit) continue;
				int gBit = iarr[i];
				int result = hBit * 100 + tBit * 10 + gBit;
				printf("%d\n", result);
				total++;
			}
		}
	}
	printf("total:%d\n", total);
}