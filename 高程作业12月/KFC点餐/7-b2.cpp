/* 2150265 ����� ����09�� */
#define _CRT_SECURE_NO_WARNINGS		//ʹ����VS��Ϊunsafe�ĺ���
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <ctime>
#include <conio.h>	//��getch����˲���Ҫ֧��Linux
#include <string.h>	//Dev/CB��strlen��Ҫ
using namespace std;
const struct KFC {
	char number;
	char dish[20];
	double price;
};
const struct KFC list[27] = {
	{'A', "�������ȱ�",         18.5},
	{'B', "���༦�ȱ�",         18.5},
	{'C', "�°¶��������ȱ�",   19},
	{'D', "�ϱ��������",       17},
	{'E', "������ţ��",         19.5},
	{'F', "����㱤",         18.5},
	{'G', "˱ָԭζ��(1��)",    11.5},
	{'H', "֥֥����������Ƥ��", 12.5},
	{'I', "�°¶�������(2��)",  12.5},
	{'J', "�������׻�",         11.5},
	{'K', "��������(2��)",      12.0},
	{'L', "�ٽ��޹Ǵ���(2��)",12.5},
	{'M', "����ɫ��",           13},
	{'N', "����(С)",           9},
	{'O', "����(��)",           12},
	{'P', "����(��)",           14},
	{'Q', "ܽ��������",         9},
	{'R', "ԭζ��Ͳ������",     6},
	{'S', "����������",         7},
	{'T', "�������װ�",         9.0},
	{'U', "��ʽ��̢",           8.0},
	{'V', "���¿���(С)",       7.0},
	{'W', "���¿���(��)",       9.5},
	{'X', "���¿���(��)",       11.5},
	{'Y', "�����֭����",       12.5},
	{'Z', "����������",         11.5},
	{'\0', NULL,                0}
};
const struct SPECIAL {
	char num[15] ;
	char dish[20];
	double price;
};
const struct SPECIAL special[] = {
	//	{"ANV", "�������ȱ����������",  24}, //�������Ҫ���ſ����ע�͵���һ�еġ�BMV���Żݣ��۲��Żݲ˵��Ƿ����˱仯
		{"BMV", "���༦�ȱ���ֵ�ײ�",    26},
		{"ABCGGIIKKOUWWW", "��ֵȫ��Ͱ", 115},
		{"KIIRRJUWW", "�ͷ�С��Ͱ",      65},
		{"JJ","�������׻�(2��С)",       12.5},
		{NULL, NULL, 0}
};

int main()
{
	
	

	
	static int l = 0;
	const struct KFC* p1 = list;
	const struct SPECIAL* p2 = special;
	while (1)
	{
		l = 0;
		cout << "=============================================================" << endl;
		cout << "                     KFC 2021�＾�˵�                       " << endl;
		cout << "=============================================================" << endl;
		cout << " A �������ȱ�          18.5   |   B ���༦�ȱ�          18.5  " << endl;
		cout << " C �°¶��������ȱ�    19     |   D �ϱ��������        17    " << endl;
		cout << " E ������ţ��          19.5   |   F ����㱤          18.5  " << endl;
		cout << " G ˱ָԭζ��(1��)     11.5   |   H ֥֥����������Ƥ��  12.5  " << endl;
		cout << " I �°¶�������(2��)   12.5   |   J �������׻�          11.5  " << endl;
		cout << " K ��������(2��)       12     |   L �ٽ��޹Ǵ���(2��) 12.5  " << endl;
		cout << " M ����ɫ��            13     |   N ����(С)            9     " << endl;
		cout << " O ����(��)            12     |   P ����(��)            14    " << endl;
		cout << " Q ܽ��������          9      |   R ԭζ��Ͳ������      6     " << endl;
		cout << " S ����������          7      |   T �������װ�          9     " << endl;
		cout << " U ��ʽ��̢            8      |   V ���¿���(С)        7     " << endl;
		cout << " W ���¿���(��)        9.5    |   X ���¿���(��)        11.5  " << endl;
		cout << " Y �����֭����        12.5   |   Z ����������          11.5  " << endl;
		cout << endl;
		cout << "���Ż���Ϣ����" << endl;
		cout << "���༦�ȱ���ֵ�ײ�=���༦�ȱ�+����ɫ��+���¿���(С)=26" << endl;
		cout << "��ֵȫ��Ͱ=�������ȱ�+���༦�ȱ�+�°¶��������ȱ�+˱ָԭζ��(1��)*2+�°¶�������(2��)*2+��������(2��)*2+����(��)+��ʽ�� ̢+���¿���(��)*3=115" << endl;
		cout << "�ͷ�С��Ͱ=�°¶�������(2��)*2+�������׻�+��������(2��)+ԭζ��Ͳ������*2+��ʽ��̢+���¿���(��)*2=65" << endl;
		cout << "�������׻�(2��С)=�������׻�*2=12.5" << endl;
		cout << endl;
		cout << "���������˵������" << endl;
		cout << "ANV=�������ȱ�+����(С)+���¿���(С) / akaak=�������ȱ�*3+��������*2" << endl;
		cout << "��ĸ���ִ�Сд������˳�򣬵�������0���˳�����" << endl;
		cout << endl;
		cout << "��㵥:";
		char num_[26];
		fgets(num_, 26, stdin);
		int len = strlen(num_) - 1;
		cout << "���ĵ��=";
		
		for (int i = 0; i < 26; i++)
		{
			
			int cishu = 0;
			for (int s = 0; s < len; s++)
			{

				if (((p1 + i)->number) == num_[s]|| ((p1 + i)->number) == num_[s]-32)
				{
					
					cishu++;

					
				}

				
					
			}
			if (cishu > 0)
			{
				l++;
			}
			if (l == 1)
			{
				if (cishu == 1)
					cout <<  (p1 + i)->dish;
				else if (cishu > 1)
					cout <<  (p1 + i)->dish << "*" << cishu;
				else
					;
			}
			else
			{
				if (cishu == 1)
					cout << "+" << (p1 + i)->dish;
				else if (cishu > 1)
					cout << "+" << (p1 + i)->dish << "*" << cishu;
				else
					;
			}
			l++;
		}
		cout << endl;

		int p = 0;
		int q = 0;
		for (p = 0, len == strlen((p2)->num) - 1; p < int(strlen((p2)->num) - 1); p++)
		{
			if (num_[p] != (p2)->num[p])
				break;
		}
		if (p == (strlen((p2)->num) - 1))
		{
			cout << "���ƣ�" << p2->price << "Ԫ";
			q = 100;
		}



		for (p = 0, len == strlen((p2 + 1)->num) - 1; p < int(strlen((p2 + 1)->num) - 1); p++)
		{
			if (num_[p] != (p2 + 1)->num[p])
				break;
		}
		if (p == (strlen((p2 + 1)->num) - 1))
		{
			cout << "���ƣ�" << p2->price << "Ԫ";
			q = 100;
		}



		for (p = 0, len == strlen((p2 + 2)->num) - 1; p < int(strlen((p2 + 2)->num) - 1); p++)
		{
			if (num_[p] != (p2 + 2)->num[p])
				break;
		}
		if (p == (strlen((p2 + 2)->num) - 1))
		{
			cout << "���ƣ�" << p2->price << "Ԫ";
			q = 100;
		}



		for (p = 0, len == strlen((p2 + 3)->num) - 1; p < int(strlen((p2 + 3)->num) - 1); p++)
		{
			if (num_[p] != (p2 + 3)->num[p])
				break;
		}
		if (p == (strlen((p2 + 3)->num) - 1))
		{
			cout << "���ƣ�" << p2->price << "Ԫ";
			q = 100;
		}




		if (q != 100)
		{
			double qian = 0;
			for (int i = 0; i < 27; i++)
			{

				for (int s = 0; s < len; s++)
				{
					if (((p1 + i)->number) == num_[s] || ((p1 + i)->number) == num_[s] - 32)
					{

						qian += (p1 + i)->price;

					}
				}

			}
			cout << "���ƣ�" << qian << "Ԫ";
		}
		cout << endl;
		cout << "�㵥��ɣ������������." << endl;
		char n=_getch();
		system("cls");
	}
	
	return 0;
}