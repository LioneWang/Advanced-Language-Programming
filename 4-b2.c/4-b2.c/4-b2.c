/* 2150265 ����� ����09�� */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int zeller(int year, int month, int day);
int main()
{
	int year, month, day, day2,ret;

	while (1) {
		printf("��������[1900-2100]���¡��գ�\n");
		ret = scanf("%d %d %d", &year, &month,&day); //����x�ķ�ʽ������scanf�Ҹ�ʽ��Ϊ%d����׼�÷�scanf
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
			printf("�����������������\n");
		}

		else if ((year < 1900) || (year > 2100))
			printf("��ݲ���ȷ������������\n");
		else if ((month > 12) || (month < 1))
			printf("�·ݲ���ȷ������������\n");
		else if ((day < 1) || (day > day2))
			printf( "�ղ���ȷ������������\n" );
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
		printf( "������\n" );
		break;
	case 1:
		printf( "����һ\n" );
		break;
	case 2:
		printf( "���ڶ�\n" );
		break;
	case 3:
		printf( "������\n" );
		break;
	case 4:
		printf( "������\n" );
		break;
	case 5:
		printf( "������\n" );
		break;
	case 6:
		printf( "������\n" );
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


