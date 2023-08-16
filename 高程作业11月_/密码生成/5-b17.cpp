/* 2150265 ����� ����09�� */
#include <iostream>
#include<windows.h>
#include<string.h>
using namespace std;

int main()
{
	cout << "���������볤��(12-16)�� ��д��ĸ����(��2)�� Сд��ĸ����(��2)�� ���ָ���(��2)�� �������Ÿ���(��2)" << endl;
	int password_len, daxie, xiaoxie, shuzi, qita;
	
	
	while (1)
	{
		cin >> password_len >> daxie >> xiaoxie >> shuzi >> qita;
		if (cin.fail() == 1)
		{
			cout << "����Ƿ�" << endl;
			cin.clear();
			cin.ignore(1024, '\n');
			return 0;
		}
		else if (password_len > 16 || password_len < 12)
		{
			cout << "���볤��[" << password_len << "]����ȷ" << endl;
			cin.clear();
			cin.ignore(1024, '\n');
			return 0;
		}
		else if (daxie<2 || daxie>password_len)
		{
			cout << "��д��ĸ����[" << daxie << "]����ȷ" << endl;
			cin.clear();
			cin.ignore(1024, '\n');
			return 0;
		}
		else if (xiaoxie<2 || xiaoxie>password_len)
		{
			cout << "Сд��ĸ����[" << xiaoxie << "]����ȷ" << endl;
			cin.clear();
			cin.ignore(1024, '\n');
			return 0;
		}
		else if (shuzi<2 || shuzi>password_len)
		{
			cout << "���ָ���[" << shuzi << "]����ȷ" << endl;
			cin.clear();
			cin.ignore(1024, '\n');
			return 0;
		}
		else if (qita<2 || qita>password_len)
		{
			cout << "�������Ÿ���[" << qita << "]����ȷ" << endl;
			cin.clear();
			cin.ignore(1024, '\n');
			return 0;
		}
		else if (daxie + xiaoxie + shuzi + qita > password_len)
		{
			cout << "�����ַ�����֮��[" << daxie << "+" << xiaoxie << "+" << shuzi << "+" << qita << "]���������볤��[" << password_len << "]" << endl;
			cin.clear();
			cin.ignore(1024, '\n');
			return 0;
		}
		else
			break;
	}
	cout << password_len << " " << daxie << " " << xiaoxie << " " << shuzi << " " << qita<<endl;
	static const char qita_[] = "~!@#$%^&*()-_=+[],.?";
	static const char xiaoxie_[] = "abcdefghijklmnopqrstuvwxyz";
	static const char daxie_[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	static const char shuzi_[] = "0123456789";
	char all[999]="abc";
	strcpy_s(all, qita_);
	strcat_s(all, xiaoxie_);
	strcat_s(all, daxie_);
	strcat_s(all, shuzi_);
	srand(unsigned(time(0)));
	for (int q = 0; q < 10; q++)
	{
		char psw[999];
		for(int i=0;i<qita;i++)
			psw[i]= qita_[rand() % (strlen(qita_))];
		for(int i=qita;i<xiaoxie+qita;i++)
			psw[i] = xiaoxie_[rand() % (strlen(xiaoxie_))];
		for (int i = qita+xiaoxie; i < xiaoxie + qita+daxie; i++)
			psw[i] = daxie_[rand() % (strlen(daxie_))];
		for (int i = qita + xiaoxie+daxie; i < xiaoxie + qita + daxie+shuzi; i++)
			psw[i] = shuzi_[rand() % (strlen(shuzi_))];

		
		for (int i = xiaoxie + qita + daxie + shuzi; i < password_len; i++)
		{
			psw[i] = all[rand() % (strlen(all))];
		}
		int i = 0;
		bool b;
		int number[99];
		while (i < password_len)
		{
			b = true;
			number[i] = rand() % password_len;
			for (int j = i - 1; j >= 0; j--)
			{
				if (number[i] == number[j])
				{
					b = false;
					break;
				}
			}
			if (b)
				i++;
		}
		for (int i = 0; i < password_len; i++)
		{
			cout << psw[number[i]];
		}
		cout << endl;
	}
	
	return 0;
}