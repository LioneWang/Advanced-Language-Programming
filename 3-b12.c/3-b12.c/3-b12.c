/* ����09�� 2150265 ����� */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int year, month, day,ret,day1,date,date1,ret1;
	while (1) {
		printf("���������(2000-2030)���·�(1-12) : ");
		ret = scanf("%d %d", &year ,&month); //����x�ķ�ʽ������scanf�Ҹ�ʽ��Ϊ%d����׼�÷�scanf
		if (ret == 0 || ret==1||getchar() != '\n')
		{
			while (getchar() != '\n');
			printf("����Ƿ�������������\n");
		}
		
		if (ret == 2 && (year >= 2000 && year <= 2030)&&(month>=1 && month <=12))
			break;
		else
		{
			printf("����Ƿ�������������\n");
		}
	}
	
	while (1) {
		printf("������%d��%d��1�յ�����(0-6��ʾ������-������) : ", year, month);
		ret1 = scanf("%d", &day1); //����x�ķ�ʽ������scanf�Ҹ�ʽ��Ϊ%d����׼�÷�scanf
		if ( ret1 == 0 || getchar() != '\n')
		{
			while (getchar() != '\n');
			printf("����Ƿ�������������\n");
		}

		if (ret1 == 1 && (day1>=0)&&(day1<=6))
			break;
		else
		{
			printf("����Ƿ�������������\n");
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
	printf("%d��%d�µ�����Ϊ:\n",year,month);
	printf("������  ����һ  ���ڶ�  ������  ������  ������  ������\n");
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