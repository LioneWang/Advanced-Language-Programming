#include <iostream>
using namespace std;
int main()

{
	int a[9][9];
	int i = 0;
	int p = 0;
	int j = 0;
	cout << "������9*9�ľ���ֵΪ1-9֮��" << endl;
	for (i = 0; i < 9; i++)
	{
		int f = 0;
		for (p = 0; p < 9; p++)
		{
			f++;
			while (1)
			{
			
				cin >> a[i][p];
			
				if (cin.fail())
				{
					cin.clear();
					cin.ignore(1024, '\n');
					cout << "�����������" << i + 1 << "��" << f << "��(���о���1��ʼ����)��ֵ" << endl;
					
				}
				else if (a[i][p] > 9 || a[i][p] < 1)
				{
					cin.clear();
					cin.ignore(1024, '\n');
					cout << "�����������" << i + 1 << "��" << f << "��(���о���1��ʼ����)��ֵ" << endl;
					
				}
				else
					break;
			}
		}
		
		
	}
	for (j = 0; j < 9; j++)
	{
		for (i = 8; i >= 1; i--)
		{
			for (p = i - 1; p >= 0; p--)
			{
				if (a[i][j] == a[p][j])
				{
					cout << "���������Ľ�" << endl;
					return 0;
				}
					
					
			}
		}
	}
	for (j = 0; j < 9; j++)
	{
		for (i = 8; i >= 1; i--)
		{
			for (p = i - 1; p >= 0; p--)
			{
				if (a[j][i] == a[j][p])
				{
					cout << "���������Ľ�" << endl;
					return 0;
				}


			}
		}
	}
	int q;
	int b;
	int c;
	
	for(b=1; b <= 3;b++)
		for (c = 1; c <= 3; c++)
			for (j = 3*b-3; j < 3 * b - 1; j ++)
				for (p =3*c-3; p < 3 * c - 1; p++)
					for(i=j+1;i<3*b;i++)
						for (q = p + 1; q < 3 * c; q++)
						{
							if (a[j][p] == a[i][q])
							{
								cout<< "���������Ľ�" << endl;
								return 0;
							}
						}
	cout << "�������Ľ�" << endl;
	return 0;
}