/* 2150265 王加炜 济勤09班 */
#define _CRT_SECURE_NO_WARNINGS		//使用了VS认为unsafe的函数
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <ctime>
#include <conio.h>	//用getch，因此不需要支持Linux
#include <string.h>	//Dev/CB的strlen需要
using namespace std;

struct tj_time {
	int tj_year;	//表示年份
	int tj_month;	//表示月(1-12)
	int tj_day;	//表示日(1-28/29/30/31)
	int tj_hour;	//表示小时(0-23)
	int tj_minute;	//表示分(0-59)
	int tj_second;	//表示秒(0-59)
};

/* 可以在此定义其它需要的函数 */



/***************************************************************************
  函数名称：
  功    能：给出提示并等待回车键
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
void wait_for_enter(const char* const prompt = NULL)
{
	if ((prompt == NULL) || (strlen(prompt) == 0)) //思考一下，||的左右两个条件能否互换
		cout << endl << "按回车键继续";
	else
		cout << endl << prompt << "，按回车键继续";

	while (_getch() != '\r')
		;
	cout << endl << endl;
}

/***************************************************************************
  函数名称：
  功    能：调用系统的转换函数将整型秒值转换为与本题相似的结构体并输出
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
void system_time_output(const time_t input_time)  //time_t的本质是64位无符号整数
{
	struct tm* tt;	//struct tm 为系统定义的结构体

	tt = localtime(&input_time);	//localtime为系统函数

	/* tm_*** 为struct tm中的成员，和本题的struct tj_time具体的内容不完全符合，具体含义自己查找相关资料 */
	cout << setfill('0') << setw(4) << tt->tm_year + 1900 << '-'
		<< setw(2) << tt->tm_mon + 1 << '-'
		<< setw(2) << tt->tm_mday << ' '
		<< setw(2) << tt->tm_hour << ':'
		<< setw(2) << tt->tm_min << ':'
		<< setw(2) << tt->tm_sec << endl;

	return;
}

/***************************************************************************
  函数名称：
  功    能：自定义转换结果输出函数
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
void tj_time_output(const struct tj_time* const tp)
{
	/* 实现自定义结构的输出，输出形式与system_time_output相同 */
	
	cout << setfill('0') << setw(4) << tp->tj_year+ ((tp->tj_month + ((tp->tj_day + ((tp->tj_hour + 8) >= 24)) >= 31))>=13) << '-'
		<< setw(2) << (tp->tj_month + ((tp->tj_day + ((tp->tj_hour + 8) >= 24))>=31))%13+((tp->tj_month + ((tp->tj_day + ((tp->tj_hour + 8) >= 24)) >= 31))>12) << '-'
		<< setw(2) <<( tp->tj_day+((tp->tj_hour + 8)>=24))%31 << ' '
		<< setw(2) << (tp->tj_hour+8)%24 << ':'
		<< setw(2) << tp->tj_minute << ':'
		<< setw(2) << tp->tj_second << endl;
}

/***************************************************************************
  函数名称：
  功    能：自定义转换函数
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
struct tj_time* tj_time_convert(int input_time)
{
	static struct tj_time result;	//定义静态局部变量，不准动

	/* 实现过程开始，在下面添加相应的定义及执行语句即可 */
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


	/* 实现过程结束 */

	return &result;	//注意，返回的是静态局部变量的地址，本语句不准动
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int main()
{
	int read_time;
	struct tj_time* tp;

	for (;;) {
		cin >> read_time; //因为采用输入重定向，此处不加任何提示

		/* 输入错误或<0则退出循环 */
		if (cin.good() == 0 || read_time < 0)
			break;

		cout << "秒数             : " << read_time << endl;
		cout << "系统转换的结果   : ";
		system_time_output(read_time);

		cout << "自定义转换的结果 : ";
		tp = tj_time_convert(read_time);
		tj_time_output(tp);

		wait_for_enter();
	}

	if (1) {
		struct tj_time* tp;
		int t = (int)time(0);		//系统函数，取当前系统时间（从1970-01-01 00:00:00开始的秒数）

		cout << "当前系统时间     : " << t << endl;
		cout << "系统转换的结果   : ";
		system_time_output(t);

		cout << "自定义转换的结果 : ";
		tp = tj_time_convert(t);
		tj_time_output(tp);

		wait_for_enter();
	}

	return 0;
}