/* 2150265 ����� ����09�� */
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	char str[3][128];
	cout << "�������1��" << endl;
	cin.getline(str[0], 128);
	cout << "�������2��" << endl;
	cin.getline(str[1], 128);
	cout << "�������3��" << endl;
	cin.getline(str[2], 128);
	int xiaoxie=0, daxie=0, shuzi=0, kongge=0, qita=0;
	for (int j = 0; j<3; j++)
	{
		for (int i = 0; i < int(strlen(str[j])); i++)
		{
			if (str[j][i] <= 122 && str[j][i] >= 97)
				xiaoxie++;
			
			else if (str[j][i] <= 90 && str[j][i] >= 65)
				daxie++;
			
			else if (str[j][i] <= 57 && str[j][i] >= 48)
				shuzi++;
			
			else if (str[j][i] == 32)
				kongge++;
			
			else
				qita++;
				
		}
	}
	cout << "Сд : " << xiaoxie<<endl;
	cout << "��д : " << daxie<< endl;
	cout << "���� : " <<shuzi<< endl;
	cout << "�ո� : " <<kongge<< endl;
	cout << "���� : " <<qita<< endl;
	return 0;
}