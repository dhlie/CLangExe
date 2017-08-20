#include <stdio.h>
/*
题目：输出9*9口诀
*/
void exercise08(void) {
	for (size_t i = 1; i <= 9; i++)
	{
		for (size_t j = 1; j <= 9; j++){
			if (j <= i)
			{
				printf("%d * %d = %-2d\t", j, i, i*j);// /*-2d表示左对齐，占2位*/
			}
			else
			{
				break;
			}
			
		}
		printf("\n");
	}
}