#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
题目：输入某年某月某日，判断这一天是这一年的第几天？
*/
void exercise04(void) {
	int year, month, day, total, leap;
	printf("输入年月日，以,分开：\n");
	scanf("%d, %d, %d", &year, &month, &day);
	printf("输入为：%d年%d月%d日\n", year, month, day);

	if (month > 2) {
		//能被4整除但不能被100整除，或能被400整除的年份即为闰年
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		{
			leap = 1;
		}
		else
		{
			leap = 0;
		}
	}

	switch (month)
	{
	case 1:
		total = day;
		break;
	case 2:
		total = 31 + day;
		break;
	case 3:
		total = 31 + 28 + leap + day;
		break;
	case 4:
		total = 31 + 28 + leap + 31 + day;
		break;
	case 5:
		total = 31 + 28 + leap + 31 + 30 + day;
		break;
	case 6:
		total = 31 + 28 + leap + 31 + 30 + 31 + day;
		break;
	case 7:
		total = 31 + 28 + leap + 31 + 30 + 31 + 30 + day;
		break;
	case 8:
		total = 31 + 28 + leap + 31 + 30 + 31 + 30 + 31 + day;
		break;
	case 9:
		total = 31 + 28 + leap + 31 + 30 + 31 + 30 + 31 + 31 + day;
		break;
	case 10:
		total = 31 + 28 + leap + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
		break;
	case 11:
		total = 31 + 28 + leap + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
		break;
	case 12:
		total = 31 + 28 + leap + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;
		break;
	default:
		break;
	}

	printf("该年的第%d天\n", total);

}