#include<iostream>
using namespace std;
int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}
int max(int a, int b,int c)
{
	if (a > b)
		if (a > c)
			return a;
		else
			return c;
	else
		if (b > c)
			return b;
		else
			return c;
}

int max(int a, int b,int c,int d)
{
	if (a > b)
		if (a > c)
			if (a > d)
				return a;
			else
				return d;
		else
			if (c < d)
				return d;
			else
				return c;
	else
		if (b > c)
			if (b > d)
				return b;
			else
				return d;
		else
			if (c > d)
				return c;
			else
				return d;
}

int main()
{
	while (1)
	{
		cout << "请输入个数num及num个正整数：" << endl;
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
			
			cout << "max=" << max(a, b)<<endl;
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
			
			cout << "max=" << max(a, b,c) << endl;
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
			cout << "个数输入错误" << endl;
			break;
		}
	}


	return 0;
}