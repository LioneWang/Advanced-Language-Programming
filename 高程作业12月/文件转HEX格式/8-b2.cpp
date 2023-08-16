/* 2150265 王加炜 济勤09班 */
#include <iostream>
#include<fstream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
	int i=0;
	int j = 0;
	ifstream in;
	char ch;
	cerr << "文件名以下形式均可以：" << endl;
	cerr << "     a.txt                       ：不带路径格式" << endl;

	cerr << "     ..\\data\\b.dat           ：相对路径形式" << endl;
	cerr << "     C ：\\Windows\\System32\\c.dat ：绝对相对路径形式" << endl;
	cerr << "请输入文件名：";
	//将文件中的信息存到name数组中
	char name[16] = {'0'};
	char route[200];
	cin >> route;
	in.open(route, ios::binary);
	

	in.close();

	
	in.open(route, ios::binary);
	if (in.is_open() == 0)
	{
		cout << "文件打开失败" << endl;
		return -1;
	}


	while (in.get(ch))
	{
	
		if (i % 16 == 0)
		{
			cout << setfill('0') << setw(8) << hex<<i;
			cout << "  ";
		}
		
		name[i % 16] = ch;
		
		
		i++;
		if ((i-1) % 8 == 0&&(i-1)%16!=0)
		{
			cout << "-" << " " << setfill('0')<<setw(2)<<hex << int(unsigned char(ch)) << " ";
		}
		else
		{
			cout << setfill('0') << setw(2)<<hex << int(unsigned char(ch)) << " ";
		}
		if (i %16==0)
		{
			cout << "    ";
			for (int k = 0; k <16; k++)
			{
				if (k >= 0)
				{
					if (name[k] <= 126 && name[k] >= 33)
						cout << name[k];
					else
						cout << ".";
				}
				
			}
			cout << endl;
		}
		
		
	}
	if (i % 16 != 0)
	{
		for (int k = 0; k < 16-i%16; k++)
		{
			cout << "   ";
		}
		if (i % 16 <= 8)
		{
			cout << "  ";
		}
		cout << "    ";
		for (int k = 0; k < i%16 ; k++)
		{
			if (name[k] <= 126 && name[k] >= 33)
				cout << name[k];
			else
				cout <<".";
		}
	}
	

	in.close();
	

	cout << endl;
	return 0;
	
}