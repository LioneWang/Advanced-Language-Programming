/* 2150265 ����� ����09�� */
#define _CRT_SECURE_NO_WARNINGS		//ʹ����VS��Ϊunsafe�ĺ���
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <ctime>
#include <conio.h>	//��getch����˲���Ҫ֧��Linux
#include <string.h>	//Dev/CB��strlen��Ҫ
using namespace std;

struct tj_time {
	int tj_year;	//��ʾ���
	int tj_month;	//��ʾ��(1-12)
	int tj_day;	//��ʾ��(1-28/29/30/31)
	int tj_hour;	//��ʾСʱ(0-23)
	int tj_minute;	//��ʾ��(0-59)
	int tj_second;	//��ʾ��(0-59)
};

/* �����ڴ˶���������Ҫ�ĺ��� */



/***************************************************************************
  �������ƣ�
  ��    �ܣ�������ʾ���ȴ��س���
  ���������
  �� �� ֵ��
  ˵    ����
***************************************************************************/
void wait_for_enter(const char* const prompt = NULL)
{
	if ((prompt == NULL) || (strlen(prompt) == 0)) //˼��һ�£�||���������������ܷ񻥻�
		cout << endl << "���س�������";
	else
		cout << endl << prompt << "�����س�������";

	while (_getch() != '\r')
		;
	cout << endl << endl;
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ�����ϵͳ��ת��������������ֵת��Ϊ�뱾�����ƵĽṹ�岢���
  ���������
  �� �� ֵ��
  ˵    ����
***************************************************************************/
void system_time_output(const time_t input_time)  //time_t�ı�����64λ�޷�������
{
	struct tm* tt;	//struct tm Ϊϵͳ����Ľṹ��

	tt = localtime(&input_time);	//localtimeΪϵͳ����

	/* tm_*** Ϊstruct tm�еĳ�Ա���ͱ����struct tj_time��������ݲ���ȫ���ϣ����庬���Լ������������ */
	cout << setfill('0') << setw(4) << tt->tm_year + 1900 << '-'
		<< setw(2) << tt->tm_mon + 1 << '-'
		<< setw(2) << tt->tm_mday << ' '
		<< setw(2) << tt->tm_hour << ':'
		<< setw(2) << tt->tm_min << ':'
		<< setw(2) << tt->tm_sec << endl;

	return;
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ��Զ���ת������������
  ���������
  �� �� ֵ��
  ˵    ����
***************************************************************************/
void tj_time_output(const struct tj_time* const tp)
{
	/* ʵ���Զ���ṹ������������ʽ��system_time_output��ͬ */
	
	cout << setfill('0') << setw(4) << tp->tj_year+ ((tp->tj_month + ((tp->tj_day + ((tp->tj_hour + 8) >= 24)) >= 31))>=13) << '-'
		<< setw(2) << (tp->tj_month + ((tp->tj_day + ((tp->tj_hour + 8) >= 24))>=31))%13+((tp->tj_month + ((tp->tj_day + ((tp->tj_hour + 8) >= 24)) >= 31))>12) << '-'
		<< setw(2) <<( tp->tj_day+((tp->tj_hour + 8)>=24))%31 << ' '
		<< setw(2) << (tp->tj_hour+8)%24 << ':'
		<< setw(2) << tp->tj_minute << ':'
		<< setw(2) << tp->tj_second << endl;
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ��Զ���ת������
  ���������
  �� �� ֵ��
  ˵    ����
***************************************************************************/
struct tj_time* tj_time_convert(int input_time)
{
	static struct tj_time result;	//���徲̬�ֲ���������׼��

	/* ʵ�ֹ��̿�ʼ�������������Ӧ�Ķ��弰ִ����伴�� */
	struct tj_time {
		int tj_year;
		int tj_month;
		int tj_day;
		int tj_hour;
		int tj_minute;
		int tj_second;
	};
	int year[1000], year_p = 0, elsetime = 0,year_;
	int month[12] = { 31,30,31,30,31,30,31,31,30,31,30,31 }, month__[12], month_p = 0,month_;
	int  day__[31], day_p = 0,day_;
	int  hour__[24], hour_p = 0,hour_;
	int  minute__[60], minute_p = 0,minute_;
	int   second_p = 0,second_;
	for (year_ = 1970;; year_++)
	{
		if ((year_ % 4 == 0 and year_ % 100 != 0) or (year_ % 400 == 0))
		{
			month[1] = 29;
			year_p += 366 * 24 * 60 * 60;
			year[year_-1970] = year_p;
		} 
		else {
			month[1] = 28;
			year_p += 365 * 24 * 60 * 60;
			year[year_-1970] = year_p;
		}
		if (year_p >= input_time)
		{
			break;
		}

	}
	result.tj_year = year_;
	if (year_ >= 1971)
		elsetime = input_time - year[year_ - 1 - 1970];
	else
		elsetime=input_time;
	for ( month_ = 1; month_ <= 12; month_++)
	{
		month_p += month[month_ - 1];
		month__[month_ - 1] = month_p;
		if (month_p * 24 * 3600 >= elsetime)
		{
			break;
		}

	}
	result.tj_month = month_;
	if (month_ >= 2)
		elsetime = elsetime - month__[month_ - 2]*24*3600;
	else
		;
	for ( day_ = 1; day_ <= month[month_-1]; day_++)
	{
		day_p +=24*3600;
		day__[day_ - 1] = day_p;
		if (day_p >= elsetime)
		{
			break;
		}
	}
	result.tj_day = day_;
	if (day_ >= 2)
		elsetime = elsetime - day__[day_ - 2];
	else
		;
	for ( hour_ = 0; hour_ <= 23; hour_++)
	{
		hour_p+=3600;
		hour__[hour_] = hour_p;
		if (hour_p >= elsetime)
		{
			break;
		}
	}
	result.tj_hour = hour_;
	if (hour_ >= 1)
		elsetime = elsetime - hour__[hour_ - 1];
	else
		;
	for ( minute_ = 0; minute_ <= 59; minute_++)
	{
		minute_p +=60;
		minute__[minute_] = minute_p;
		if (minute_p >= elsetime)
		{
			break;
		}
	}
	result.tj_minute = minute_;
	if (minute_ >= 1)
		elsetime = elsetime - minute__[minute_ - 1];
	else
		;
	for ( second_ = 0; second_ <= 59; second_++)
	{
		
		
		if (second_ == elsetime)
		{
			break;
		}
		
	}
	result.tj_second = second_;


	/* ʵ�ֹ��̽��� */

	return &result;	//ע�⣬���ص��Ǿ�̬�ֲ������ĵ�ַ������䲻׼��
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����
***************************************************************************/
int main()
{
	int read_time;
	struct tj_time* tp;

	for (;;) {
		cin >> read_time; //��Ϊ���������ض��򣬴˴������κ���ʾ

		/* ��������<0���˳�ѭ�� */
		if (cin.good() == 0 || read_time < 0)
			break;

		cout << "����             : " << read_time << endl;
		cout << "ϵͳת���Ľ��   : ";
		system_time_output(read_time);

		cout << "�Զ���ת���Ľ�� : ";
		tp = tj_time_convert(read_time);
		tj_time_output(tp);

		wait_for_enter();
	}

	if (1) {
		struct tj_time* tp;
		int t = (int)time(0);		//ϵͳ������ȡ��ǰϵͳʱ�䣨��1970-01-01 00:00:00��ʼ��������

		cout << "��ǰϵͳʱ��     : " << t << endl;
		cout << "ϵͳת���Ľ��   : ";
		system_time_output(t);

		cout << "�Զ���ת���Ľ�� : ";
		tp = tj_time_convert(t);
		tj_time_output(tp);

		wait_for_enter();
	}

	return 0;
}