/* 2150265 ����� ����09�� */
/* 2154167 ������ 2151116 �߿��� 2151132 ������ 2152488��ϣ�� 2152042 ����ͩ */
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
	cout << "�ļ���������ʽ�����ԣ�" << endl;
	cout << "     a.txt                       ������·����ʽ" << endl;

	cout << "     ..\\data\\b.dat           �����·����ʽ" << endl;
	cout << "     C ��\\Windows\\System32\\c.dat ���������·����ʽ" << endl;
	
	ifstream in;
	char ch;
	int name1[2] = { 0 };
	//���ļ��е���Ϣ�浽name������
	char name[16] = { '0' };
	char route[256];
	char end[256];
	cout << "������Ҫת����hex��ʽ�ļ��� : ";

	cin >> route;
	in.open(route, ios::binary);
	cout << "������ת������ļ��� : " ;
	cin >> end;
	in.close();


	in.open(route, ios::in|ios::binary);
	if (in.is_open() == 0)
	{
		cout << "�ļ���ʧ��" << endl;
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
