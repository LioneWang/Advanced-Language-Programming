#include <iostream>
using namespace std;
int main()
{
	int a[21];
	int num = 0;
	int i;
	cout << "��������������������������20��������-1����" << endl;
	for (i = 0; i < 21; i++)
	{
		num++;
		cin >> a[i];
		if ((a[i] == -1) && (i == 0))
		{
			cout << "����Ч����" << endl;
			return 0;
		}
			
		if (a[i] == -1)
			break;
		
	}
	cout << "ԭ����Ϊ��" << endl;
	for (i = 0; i < num - 1; i++)
	{
		cout << a[i]<<" ";
	}
	cout << endl;
	cout << "������Ҫ�����������" << endl;
	int p;
	int t[21];
	cin >> p;
	cout << "����������Ϊ��" << endl;
	for (i = 0; i < num; i ++)
	{
		t[i] = a[i];
	}
	for (i = 0; i < num; i++)
	{
		if (a[i] > p)
		{
			a[i] = p;
			for (; i < num ; i++)
			{
				a[i + 1] = t[i];
			}
			break;
		}
		
	}
	
	if(a[num - 1] <p)
		a[num-1]=p;
	
	for (i = 0; i < num; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}