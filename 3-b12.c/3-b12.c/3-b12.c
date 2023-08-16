/* 济勤09班 2150265 王加炜 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int year, month, day,ret,day1,date,date1,ret1;
	while (1) {
		printf("请输入年份(2000-2030)和月份(1-12) : ");
		ret = scanf("%d %d", &year ,&month); //读入x的方式必须是scanf且格式符为%d，不准用非scanf
		if (ret == 0 || ret==1||getchar() != '\n')
		{
			while (getchar() != '\n');
			printf("输入非法，请重新输入\n");
		}
		
		if (ret == 2 && (year >= 2000 && year <= 2030)&&(month>=1 && month <=12))
			break;
		else
		{
			printf("输入非法，请重新输入\n");
		}
	}
	
	while (1) {
		printf("请输入%d年%d月1日的星期(0-6表示星期日-星期六) : ", year, month);
		ret1 = scanf("%d", &day1); //读入x的方式必须是scanf且格式符为%d，不准用非scanf
		if ( ret1 == 0 || getchar() != '\n')
		{
			while (getchar() != '\n');
			printf("输入非法，请重新输入\n");
		}

		if (ret1 == 1 && (day1>=0)&&(day1<=6))
			break;
		else
		{
			printf("输入非法，请重新输入\n");
		}
	}
	if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
	{
		if (month == 2)
		{
			day = 29;
		}
		else if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12))
		{
			day = 31;
		}
		else
		{
			day = 30;
		}

	}
	else
	{
		if (month == 2)
		{
			day = 28;
		}
		else if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12))
		{
			day = 31;
		}
		else
		{
			day = 30;
		}
	}
	printf("\n");
	printf("%d年%d月的月历为:\n",year,month);
	printf("星期日  星期一  星期二  星期三  星期四  星期五  星期六\n");
	printf("  ");
	for (date1 = 1; date1 <= day1; date1++)
	{	
		printf("        ");
	}
	

	for (date = 1; date <= day; date++)
	{
		if ((date - 7 + day1) % 7 == 0)
		{
			printf("%2d", date);
			printf(" ");
			printf("\n");
			printf("  ");
		}
		else
		{
			printf("%2d", date);
			printf("      ");
		}
		
	}
	printf("\n");
	return 0;
}