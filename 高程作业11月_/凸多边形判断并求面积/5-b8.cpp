#include <iostream>
using namespace std;
int main()
{
	int num;
	double x[7];
	double y[7];
	int i;
	int p;
	int q;
	while (1)
	{
		cout << "���������εĶ�������(4-7)" << endl;
		cin >> num;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(1024, '\n');
			continue;
		}
		else if (num > 7 || num < 4)
			continue;
		else
			break;
	}
	
	

	cout << "�밴˳ʱ��/��ʱ�뷽������" <<num<<"�������x,y���꣺"<< endl;
	for (i = 0; i < num; i++)
	{
		while (1)
		{
			cout << "�������"<<i+1<<"����������꣺" << endl;
			cin >> x[i] >> y[i];
			if (cin.fail())
			{
				cin.clear();
				cin.ignore(1024, '\n');
				continue;
			}
			else
				break;
		}
		
	}


	//�ж��Ƿ��ܹ��ɶ����
	for (i = num-1; i >=2; i--)
	{
		for(p=i-1;p>=1;p--)
			for (q = p - 1; q >= 0; q--)
			{
				if ((y[i] - y[p]) / (x[i] - x[p]) == (y[i] - y[q]) / (x[i] - x[q]))
				{
					cout << "����͹" << num << "����" << endl;
					return 0;
				}
			}
	}
	
	//�ж��Ƿ�Ϊ͹�����
	for(i=num-1;i>=2;i--)
		for(p=i-1;p>=1;p--)
			for (q=p-1; q >= 0; q--)
			{
				if((x[q]*(y[p] - y[i]) + y[q]*(x[i] - x[p]) - x[i]*y[p] + x[p]*y[i])* (x[q+1] * (y[p] - y[i]) + y[q+1] * (x[i] - x[p]) - x[i] * y[p] + x[p] * y[i])<0)
				{
					cout << "����͹" << num << "����" << endl;
					return 0;
				}
			}
	double sum = 0;
	double s = 0;
	for (i = 1; i < num - 1; i++)
	{
		s = fabs((x[0] * (y[i] - y[i + 1]) + x[i] * (y[i + 1] - y[0]) + x[i + 1] * (y[0] - y[i]))) / 2.0;
		sum = sum + s;
	}
	cout << "͹" << num << "���ε����=" << sum << endl;
	return 0;
}