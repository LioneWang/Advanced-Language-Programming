/* 2150265 ����� ����09�� */
#include <iostream>
#include <iomanip>

using namespace std;
void input(string arc1[], string arc2[], int arc3[])
{
	for (int i = 0; i < 10; i++)
	{
		cout << "�������" << i + 1 << "���˵�ѧ�š��������ɼ�" << endl;
		cin >> arc1[i];
		cin >> arc2[i];
		cin >> arc3[i];

	}
}
void shengxu(string arc1[], string arc2[], int arc3[])
{
	int  i, j, k;
	for (i = 0; i < 9; i++)
	{
		k = i;
		for (j = i + 1; j < 10; j++)
		{
			if (arc1[j] < arc1[k])
				k = j;
		}

		string t;
		t = arc1[k];
		arc1[k] = arc1[i];
		arc1[i] = t;

		string q;
		q = arc2[k];
		arc2[k] = arc2[i];
		arc2[i] = q;

		int m;
		m = arc3[k];
		arc3[k] = arc3[i];
		arc3[i] = m;

	}
}
void output(string arc1[], string arc2[], int arc3[])
{
	for (int i = 0; i < 10; i++)
	{
		
		cout << arc1[i] << "  ";
		cout << arc2[i] << "  ";
		cout << arc3[i];
		cout << endl;
	

	}
}
int main()
{
	string xuehao[10];
	string xingming[10];
	int chengji[10];
	input(xuehao, xingming, chengji);
	shengxu(xuehao, xingming, chengji);
	cout << "ȫ��ѧ��(ѧ������):"<<endl;
	output(xuehao, xingming, chengji);
	return 0;
}