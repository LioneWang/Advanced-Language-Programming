/* 2150265 王加炜 济勤09班 */
#include <iostream>
using namespace std;
int main();
/* ----具体要求----
   1、不允许添加其它头文件
   2、不允许定义全局变量、静态局部变量
   3、不允许添加其它函数
   4、整个程序不允许出现任何形式的循环
   --------------------------------------------------------------------- */

   /***************************************************************************
	 函数名称：
	 功    能：将整数n分解后输出
	 输入参数：
	 返 回 值：
	 说    明：1、函数名、形参、返回类型均不准动
			   2、不允许使用64位整数
   ***************************************************************************/
void convert(int n)
{
	
	if (-2147483648<n  &&  n< 0)
	{
		n = -n;
		cout << "- ";
		
		
	}
	
	if(n>=0)
	{
		if (n < 10)
		{

			switch (n)
			{
				case 1:
					cout << char('1');
					break;
				case 2:
					cout << char('2');
					break;
				case 3:
					cout << char('3');
					break;
				case 4:
					cout << char('4');
					break;
				case 5:
					cout << char('5');
					break;
				case 6:
					cout << char('6');
					break;
				case 7:
					cout << char('7');
					break;
				case 8:
					cout << char('8');
					break;
				case 9:
					cout << char('9');
					break;
			}
			cout << " ";
		}

		else
		{
			convert(n / 10);

			switch (n - (n / 10) * 10)
			{
				case 1:
					cout << char('1');
					break;
				case 2:
					cout << char('2');
					break;
				case 3:
					cout << char('3');
					break;
				case 4:
					cout << char('4');
					break;
				case 5:
					cout << char('5');
					break;
				case 6:
					cout << char('6');
					break;
				case 7:
					cout << char('7');
					break;
				case 8:
					cout << char('8');
					break;
				case 9:
					cout << char('9');
					break;
			}
			cout << " ";

		}
	}
	if (n == -2147483648)
	{
		n = n +1;
		n = -n;
		cout << "- ";
		if (n < 10)
		{

			switch (n)
			{
				case 1:
					cout << char('1');
					break;
				case 2:
					cout << char('2');
					break;
				case 3:
					cout << char('3');
					break;
				case 4:
					cout << char('4');
					break;
				case 5:
					cout << char('5');
					break;
				case 6:
					cout << char('6');
					break;
				case 7:
					cout << char('7');
					break;
				case 8:
					cout << char('8');
					break;
				case 9:
					cout << char('9');
					break;
			}
			cout << " ";
		}

		else
		{
			convert(n / 10);

			switch (n - (n / 10) * 10)
			{
				case 1:
					cout << char('1');
					break;
				case 2:
					cout << char('2');
					break;
				case 3:
					cout << char('3');
					break;
				case 4:
					cout << char('4');
					break;
				case 5:
					cout << char('5');
					break;
				case 6:
					cout << char('6');
					break;
				case 7:
					cout << char('8');
					break;
				case 8:
					cout << char('8');
					break;
				case 9:
					cout << char('9');
					break;
			}
			cout << " ";

		}
	}
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：main函数不准动
***************************************************************************/
int main()
{
	
	int n;
	cout << "请输入一个整数" << endl;
	cin >> n;

	convert(n);
	cout << endl;

	return 0;
}