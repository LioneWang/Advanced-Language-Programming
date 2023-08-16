/* 2150265 王加炜 济勤09班 */
/* 2154167 宋引川 2151116 高楷骅 2151132 张乐天 2152488赵希坚 2152042 丁泽桐 */
#include <iostream>
#include<fstream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
	int i = 0;
	int j = 0;
	int l = 0;
	int p = 0;
	int sum = 0;
	cout << "文件名以下形式均可以：" << endl;
	cout << "     a.txt                       ：不带路径格式" << endl;

	cout << "     ..\\data\\b.dat           ：相对路径形式" << endl;
	cout << "     C ：\\Windows\\System32\\c.dat ：绝对相对路径形式" << endl;
	
	ifstream in;
	char ch;
	int name1[2] = { 0 };
	//将文件中的信息存到name数组中
	char name[16] = { '0' };
	char route[256];
	char end[256];
	cout << "请输入要转换的hex格式文件名 : ";

	cin >> route;
	in.open(route, ios::binary);
	cout << "请输入转换后的文件名 : " ;
	cin >> end;
	in.close();


	in.open(route, ios::in|ios::binary);
	if (in.is_open() == 0)
	{
		cout << "文件打开失败" << endl;
		return -1;
	}
	ofstream outfile(end, ios::out | ios::binary);

	while (!in.eof())
	{
		ch = in.get();
		if (in.tellg() % 82 > 10&& in.tellg() %82<=61 && ch!=' '&& ch!='-')
		{
			i++;
			if (i%2==1)
			{
				if (ch == 'a')
					l = 10;
				if (ch == 'b')
					l = 11;
				if (ch == 'c')
					l = 12;
				if (ch == 'd')
					l = 13;
				if (ch == 'e')
					l = 14;
				if (ch == 'f')
					l = 15;
				if (ch >= 48 && ch <= 57)
					l = int(ch) - 48;
				
			}
			else 
			{
				if (ch == 'a')
					p = 10;
				if (ch == 'b')
					p = 11;
				if (ch == 'c')
					p = 12;
				if (ch == 'd')
					p = 13;
				if (ch == 'e')
					p = 14;
				if (ch == 'f')
					p = 15;
				if (ch >= 48 && ch <= 57)
					p = int(ch) - 48;
				
				
				
				sum = l*16+p;
				
				outfile <<  char(sum);
				
			}
			
			
		}
	
	}

	in.close();
	outfile.close();

	cout << endl;
	return 0;

}
