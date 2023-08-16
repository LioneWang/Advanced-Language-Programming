/* 2150265 信09 王加炜 */

#include<stdio.h>
int exa;
int main()
{
	printf("请输入年，月，日\n");
	int year, month, day, day2;
	scanf( "%d" , &year);
	scanf("%d", &month);
	scanf("%d", &day);
	if (month > 12)
	{
		printf("输入错误-月份不正确\n" );
	}
	if (month == 2)
	{
		if (((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
		{
			if (day < 30)
			{
				exa = 31 + day;
				printf("% d - % d - %d", year, month, day);
				printf("是%d年的第%d天\n", year, exa);
			}
			else
				printf( "输入错误-日与月的关系非法\n" );




		}
		else
		{
			if (day < 29)
			{
				exa = 31 + day;
				printf("% d - % d - %d", year, month, day);
				printf("是%d年的第%d天\n", year, exa);
			}

			else
				printf("输入错误-日与月的关系非法\n");
		}

	}
	
	
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)

	{
		day2 = 29;
	}
	else
	{
		day2 = 28;
	}




	if (month == 1)
	{
		if (day < 32)
		{
			exa = day;
		}
		else
		{
			printf("输入错误-日与月的关系非法\n");
			printf("% d - % d - %d", year, month, day);
			printf("是%d年的第%d天\n", year, exa);
		}
	}
	
	
	
	if ((month == 4) || (month == 6))
	{
		if (day < 31)
		{
			exa = (month / 2) * 31 + day2 + ((month / 2) - 2) * 30 + day;
			printf("% d - % d - %d", year, month, day);
			printf("是%d年的第%d天\n", year, exa);
		}
		else
		{
			printf("输入错误-日与月的关系非法\n");
		}
	}
	
	
	if ((month == 9) || (month == 11))
	{
		if (day < 31)
		{
			exa = ((month + 1) / 2) * 31 + day2 + (((month - 1) / 2) - 2) * 30 + day;
			printf("% d - % d - %d", year, month, day);
			printf("是%d年的第%d天\n", year, exa);
		}
		else
		{
			printf("输入错误-日与月的关系非法\n");
		}
	}
	
	
	
	if ((month == 3) || (month == 5) || (month == 7))
	{
		if (day < 32)
		{
			exa = ((month - 1) / 2) * 31 + day2 + (((month - 1) / 2) - 1) * 30 + day;
			printf("% d - % d - %d", year, month, day);
			printf("是%d年的第%d天\n", year, exa);
		}
		else
		{
			printf("输入错误-日与月的关系非法\n");
		}

	}	
	
	
	
	if ((month == 8) || (month == 10) || (month == 12))
	{
		if (day < 32)
		{
			exa = ((month) / 2) * 31 + day2 + (((month) / 2) - 2) * 30 + day;
			printf("% d - % d - %d", year, month, day);
			printf("是%d年的第%d天\n", year, exa);
		}
		else
		{
			printf("输入错误-日与月的关系非法\n");
		}

	}
	return 0;
}
