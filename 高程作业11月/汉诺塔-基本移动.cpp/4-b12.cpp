/* 2150265 王加炜 济勤09班 */
#include <iostream>
#include <iomanip>
using namespace std;

/* ----具体要求----
   1、不允许添加其它头文件
   2、不允许定义全局变量、静态局部变量
   3、允许添加用于输入层数、起始/目标柱的函数，函数中允许使用循环处理错误输入
   4、如果输入用函数进行，则main中不允许出现任何形式的循环
      如果输入在main中进行，则main中允许出现循环
   --------------------------------------------------------------------- */

   /***************************************************************************
     函数名称：
     功    能：打印n层汉诺塔的移动顺序
     输入参数：int n：层数
               char src：起始柱
               char tmp：中间柱
               char dst：目标柱
     返 回 值：
     说    明：1、函数名、形参、返回类型均不准动
               2、本函数不允许出现任何形式的循环
   ***************************************************************************/
int move_hanoi(int n,char src, char dst)
{
    cout << setw(2)<<setiosflags(ios::right)<<n<<"# "<<src << "-->" << dst << endl;
    return 0;
}

 

void hanoi(int n, char src, char tmp, char dst)
{


	//将上面的n-1个木块由x借助z移到y

	if (n == 1)
	{
		;
	}
	else
	{


		hanoi(n - 1, src, dst, tmp);
	}






	//将最下面的一个木块由x借助y移到z

	move_hanoi(n,src, dst);


	//将上面的n-1个木块由y借助x移到z

	if (n == 1)
	{
		;
	}
	else
	{

		hanoi(n - 1, tmp, src, dst);
	}




}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：完成输入(或调用输入函数)、调用递归函数
***************************************************************************/
int main()
{
	int num;
	while (1)
	{
		
		cout << "请输入汉诺塔的层数(1-16)" << endl;
		cin >> num;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(1024, '\n');
		}
		else if (num < 1 || num>16)
		{
			cin.clear();
			cin.ignore(1024, '\n');
			continue;
		}
		else
			break;
	}
	char src, tmp, dst;
	while (1)
	{

		cout << "请输入起始柱(A-C)" << endl;
		cin >> src;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(1024, '\n');
		}
		else if (int(src) ==65 || int(src) == 66 || int(src) == 67 || int(src) == 97 || int(src) == 98 || int(src) == 99)
		{
			cin.clear();
			cin.ignore(1024, '\n');
			break;
		}
		else
			continue;
	}
	
	


	cout << "请输入目标柱(A-C)" << endl;
	cin >> dst;
	

	if (int(src) > 96 && int (src) < 100)
		src = src - 32;
	
	if (dst > 96 && dst < 100)
		dst = dst - 32;
	while (1)
	{
		if (src == dst)
		{
			cout << "目标柱(" << dst << ")" << "不能与起始柱(" << src << ")相同" << endl;
			cout << "请输入目标柱(A-C)" << endl;
			cin >> dst;
		}
		else
			break;
	}
	if (dst > 96 && dst < 100)
		dst = dst - 32;
	tmp = char(198 - int(src) - int(dst));
	cout << "移动步骤为:" << endl;
	hanoi(num, src, tmp, dst);
	cout << endl;
}