#include <stdio.h>
#include <math.h>

#define MAX_LENGTH 8
static int position[MAX_LENGTH];

static int checkPoint(int row, int col);
/*
在8×8格的国际象棋上摆放八个皇后，使其不能互相攻击，即任意两个皇后都不能处于同一行、同一列或同一斜线上，问有多少种摆法。
*/
void eightQueen(int row) {
	for (size_t i = 0; i < MAX_LENGTH; i++)
	{
		if (checkPoint(row, i))
		{
			position[row] = i;
			eightQueen(row + 1);
		}
	}
}

static int checkPoint(int row, int col) {
	for (size_t i = 0; i < row; i++)
	{
		int rowum = i;
		int colum = position[i];
		if (rowum == row || colum == col || (abs(rowum - row) == abs(colum - col)))
		{
			return 0;
		}
	}
	if (row ==	MAX_LENGTH - 1 && col == MAX_LENGTH - 1)
	{
		for (size_t i = 0; i < MAX_LENGTH; i++)
		{
			for (size_t j = 0; j < MAX_LENGTH; j++)
			{
				if (position[i] == j)
				{
					printf("#");
				}
				else
				{
					printf("0");
				}
			}
			printf("\n");
		}
		printf("(%d,%d),(%d,%d),(%d,%d),(%d,%d),(%d,%d),(%d,%d),(%d,%d),(%d,%d)\n",
			0, position[0], 1, position[1], 2, position[2], 3, position[3], 4, position[4], 5, position[5], 6, position[6], 7, position[7]);
	}
	return 1;
}