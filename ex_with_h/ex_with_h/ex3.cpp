#include<iostream>
using namespace std;
#include"ex.h"
int main()
{
	while (1)
	{
		cout << "���������num��num����������" << endl;
		int num, a, b, c, d;
		cin >> num;
		if (cin.fail() == 1)
		{
			cin.clear();
			cin.ignore(1024, '\n');
			continue;
		}

		if (num == 2)
		{
			cin >> a >> b;
			if (cin.fail() == 1)
			{
				cin.clear();
				cin.ignore(1024, '\n');
				continue;
			}

			cout << "max=" << max(a, b) << endl;
			break;
		}
		if (num == 3)
		{
			cin >> a >> b >> c;
			if (cin.fail() == 1)
			{
				cin.clear();
				cin.ignore(1024, '\n');
				continue;
			}

			cout << "max=" << max(a, b, c) << endl;
			break;
		}
		if (num == 4)
		{
			cin >> a >> b >> c >> d;
			if (cin.fail() == 1)
			{
				cin.clear();
				cin.ignore(1024, '\n');
				continue;
			}
			cout << "max=" << max(a, b, c, d) << endl;
			break;
		}
		else
		{
			cout << "�����������" << endl;
			break;
		}
	}


	return 0;
}