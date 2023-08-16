/* 2150265 济勤09班 王加炜 */
#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;



/* -----------------------------------------------------------------------------------
		允许   ：1、按需增加一个或多个函数，但是所有增加的函数中不允许任何形式的循环
				 2、定义符号常量
				 3、定义const型变量

		不允许 ：1、定义全局变量
   ----------------------------------------------------------------------------------- */


void max_width(int n)
{
	if (n >0)
	{
		max_width(n - 1);
		cout << "=";
	}
	
		
}

   /***************************************************************************
	 函数名称：
	 功    能：打印菱形
	 输入参数：
	 返 回 值：
	 说    明：
   ***************************************************************************/




void print_row(char start_ch,char end_ch)
{
	if (start_ch > 65)
	{
		cout << char(start_ch);
		print_row(start_ch - 1, end_ch);
		cout << char(start_ch);
	}
	else if (start_ch == 65)
	{
		cout << char(start_ch);
	}
	else
		;
}

void space(char start_ch,char  end_ch)
{
	if (start_ch < end_ch)
	{
		cout << " ";
		space(start_ch + 1, end_ch);
	}
}

void print_diamond(char start_ch, char end_ch)
{
	if (start_ch < end_ch)
	{
		space(start_ch, end_ch);
		print_row(start_ch, end_ch);
		cout << endl;
		print_diamond(start_ch + 1, end_ch);
		cout << endl;
		space(start_ch, end_ch);
		print_row(start_ch, end_ch);
	}
	else if (start_ch == end_ch)
	{
		space(start_ch, end_ch);
		print_row(start_ch, end_ch);

	}
	
	
	/* 按需实现，函数中不允许任何形式的循环，但允许定义静态局部变量 */
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：main函数不准修改
***************************************************************************/
int main()
{
	cout << "请输入结束字符(A~Z)" << endl;
	char end_ch;
	/* 键盘输入结束字符(仅大写有效) */
	cin>>end_ch;
	int  h= int(end_ch) - int('A');
	int g = 2 * h + 1;
	/* 菱形(中间为A) */
	max_width(g); /* 按菱形最大宽度输出=(不允许用循环) */
	cout << endl;
	cout << "菱形(" << end_ch << "->A)" << endl;
	max_width(g); /* 按菱形最大宽度输出=(不允许用循环) */
	cout << endl;
	print_diamond('A', end_ch);
	cout << endl;
	cout << endl;
	return 0;
}

	
