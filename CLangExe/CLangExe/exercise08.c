#include <stdio.h>
/*
��Ŀ�����9*9�ھ�
*/
void exercise08(void) {
	for (size_t i = 1; i <= 9; i++)
	{
		for (size_t j = 1; j <= 9; j++){
			if (j <= i)
			{
				printf("%d * %d = %-2d\t", j, i, i*j);// /*-2d��ʾ����룬ռ2λ*/
			}
			else
			{
				break;
			}
			
		}
		printf("\n");
	}
}