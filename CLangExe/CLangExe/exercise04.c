#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
��Ŀ������ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
*/
void exercise04(void) {
	int year, month, day, total, leap;
	printf("���������գ���,�ֿ���\n");
	scanf("%d, %d, %d", &year, &month, &day);
	printf("����Ϊ��%d��%d��%d��\n", year, month, day);

	if (month > 2) {
		//�ܱ�4���������ܱ�100���������ܱ�400��������ݼ�Ϊ����
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

	printf("����ĵ�%d��\n", total);

}