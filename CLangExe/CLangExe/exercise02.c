#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
企业发放的奖金根据利润提成。利润(I)低于或等于10万元时，奖金可提10%；利润高
　　　于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可可提
   　　　成7.5%；20万到40万之间时，高于20万元的部分，可提成5%；40万到60万之间时高于
	  　　　40万元的部分，可提成3%；60万到100万之间时，高于60万元的部分，可提成1.5%，高于
		 　　　100万元时，超过100万元的部分按1%提成，从键盘输入当月利润I，求应发放奖金总数
*/
void exercise02(void) {
	printf("请输入利润：\n");
	double profit = 0.0;
	scanf("%lf", &profit);
	printf("利润：%lf\n", profit);

	double fee = 0.0;
	double i10 = 0;//0.1
	double i20 = 0;//0.075
	double i40 = 0;//0.05
	double i60 = 0;//0.03
	double i100 = 0;//0.015
	double i100Plus = 0;//0.01

	

	if (profit <= 100000) {
		i10 = profit;
	}
	else if (profit <= 200000)
	{
		i10 = 100000;
		i20 = profit - 100000;
	}
	else if (profit <= 400000)
	{
		i10 = 100000;
		i20 = 100000;
		i40 = profit - 200000;
	}
	else if (profit <= 600000)
	{
		i10 = 100000;
		i20 = 100000;
		i40 = 200000;
		i60 = profit - 400000;
	}
	else if (profit <= 1000000)
	{
		i10 = 100000;
		i20 = 100000;
		i40 = 200000;
		i60 = 200000;
		i100 = profit - 600000;
	}
	else
	{
		i10 = 100000;
		i20 = 100000;
		i40 = 200000;
		i60 = 200000;
		i100 = 400000;
		i100Plus = profit - 1000000;
	}

	fee = i10 * 0.1 + i20*0.075 + i40*0.05 + i60*0.03 + i100*0.015 + i100Plus*0.01;
	printf("提成为：%lf\n", fee);
}