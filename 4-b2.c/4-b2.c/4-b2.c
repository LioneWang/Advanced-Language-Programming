/* 2150265 王加炜 济勤09班 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int zeller(int year, int month, int day);
int main()
{
	int year, month, day, day2,ret;

	while (1) {
		printf("请输入年[1900-2100]、月、日：\n");
		ret = scanf("%d %d %d", &year, &month,&day); //读入x的方式必须是scanf且格式符为%d，不准用非scanf
		if (((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
			if (month == 2)
				day2 = 29;
			else if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12))
				day2 = 31;
			else
				day2 = 30;
		else
			if (month == 2)
				day2 = 28;
			else if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12))
				day2 = 31;
			else
				day2 = 30;
		
		if (ret == 0 || ret == 1 || ret == 2 || getchar() != '\n')
		{
			while (getchar() != '\n');
			printf("输入错误，请重新输入\n");
		}

		else if ((year < 1900) || (year > 2100))
			printf("年份不正确，请重新输入\n");
		else if ((month > 12) || (month < 1))
			printf("月份不正确，请重新输入\n");
		else if ((day < 1) || (day > day2))
			printf( "日不正确，请重新输入\n" );
		else
		{
			break;
		}
	}

	int  week;
	week = zeller(year, month, day);
	if (week == 7)
		week = 0;
	switch (week)
	{
	case 0:
		printf( "星期日\n" );
		break;
	case 1:
		printf( "星期一\n" );
		break;
	case 2:
		printf( "星期二\n" );
		break;
	case 3:
		printf( "星期三\n" );
		break;
	case 4:
		printf( "星期四\n" );
		break;
	case 5:
		printf( "星期五\n" );
		break;
	case 6:
		printf( "星期六\n" );
		break;

	}
	return 0;
}


int zeller(int year, int month, int day)
{
	if ((month == 1) || (month == 2))
	{
		year = year - 1;
		month = month + 12;
	}
	int week1;
	int a, b, c, d, y, m, w;
	a = year % 10;
	b = (year / 10) % 10;
	y = 10 * b + a;
	m = month;
	d = day;
	c = (year - y) / 100;
	w = y + (int)(y / 4) + (int)(c / 4) - 2 * c + (int)((26 * (m + 1)) / 10) + d - 1;
	if (w < 0)
	{
		w = -w;
		week1 = 7 - (w % 7);
		return week1;
	}
	else
	{
		week1 = w % 7;
		return week1;

	}
	return 0;
}


