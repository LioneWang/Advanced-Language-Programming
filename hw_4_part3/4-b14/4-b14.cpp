#include<iostream>
using namespace std;
#include<math.h>
void h1(double a,double b,double c)
{
	cout << "����һԪ���η���" << endl;
}
void h2(double a, double b, double c)
{
	double d, e;
	cout << "����������ʵ����" << endl;
	d = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	e = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
	cout << "x1=" << d << endl;
	cout << "x2=" << e << endl;
	
}
void h3(double a, double b, double c)
{
	double d;
	cout << "���������ʵ����" << endl;
	d = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	cout << "x1=x2=" << d << endl;

	
}
void h4(double a, double b, double c)
{
	double f, d;
	cout << "�����������" << endl;
	f = (-b) / (2 * a);
	d = sqrt(-(b * b - 4 * a * c)) / (2 * a);
	if (f == 0)
	{
		if (d == 1 || d==-1)
		{
			cout << "x1=" << "+"  << "i" << endl;
			cout << "x2=" << "-"  <<  "i" << endl;
		}
		else
		{
			
			cout << "x1=" << "+" << fabs(d) << "i" << endl;
			cout << "x2=" << "-" << fabs(d) << "i" << endl;
		
		}
	}
	else
	{
		if (d == 1 || d==-1)
		{
			cout << "x1=" << f << "+" << "i" << endl;
			cout << "x2=" << f << "-" << "i" << endl;
		}
		else
		{

			cout << "x1=" << f << "+" << fabs(d) << "i" << endl;
			cout << "x2=" << f << "-" << fabs(d) << "i" << endl;

		}
		
	}
}
int main()
{
	cout << "������һԪ���η��̵�����ϵ��a,b,c:" << endl;
	double a, b, c;
	cin >> a >> b >> c;
	if (fabs(a) < 1e-6)
		h1(a, b, c);
	else if ((b * b - 4 * a * c) > 0)
		h2(a, b, c);
	else if ((b * b - 4 * a * c) == 0)
		h3(a, b, c);
	else
		h4(a, b, c);
	
	
	return 0;
}