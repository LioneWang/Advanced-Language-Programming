#include<iostream>
using namespace std;
#include<math.h>
extern double a, b, c;
void h1()
{
	cout << "不是一元二次方程" << endl;
}
void h2()
{
	double d, e;
	cout << "有两个不等实根：" << endl;
	d = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	e = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
	cout << "x1=" << d << endl;
	cout << "x2=" << e << endl;

}
void h3()
{
	double d;
	cout << "有两个相等实根：" << endl;
	d = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	cout << "x1=x2=" << d << endl;


}
void h4()
{
	double f, d;
	cout << "有两个虚根：" << endl;
	f = (-b) / (2 * a);
	d = sqrt(-(b * b - 4 * a * c)) / (2 * a);
	if (f == 0)
	{
		if (d == 1 || d == -1)
		{
			cout << "x1=" << "+" << "i" << endl;
			cout << "x2=" << "-" << "i" << endl;
		}
		else
		{

			cout << "x1=" << "+" << fabs(d) << "i" << endl;
			cout << "x2=" << "-" << fabs(d) << "i" << endl;

		}
	}
	else
	{
		if (d == 1 || d == -1)
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