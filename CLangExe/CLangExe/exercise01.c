#include <stdio.h>

/*
��Ŀ����1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
*/
void exercise01(void) {
	int iarr[] = { 6, 2, 3, 4};

	printf("��%d, %d, %d, %d��ɵĻ�����ͬ�����ظ����ֵ���λ���У�\n", iarr[0], iarr[1], iarr[2], iarr[3]);
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