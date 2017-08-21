#include <stdio.h>
#include <limits.h>
#include <math.h>
/*
题目：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
*/
void exercise03(void) {
	long i, x, y;
	//x*x = i + 100；
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