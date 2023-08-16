#include<iostream>
using namespace std;
#include<math.h>
void h4(double a, double b, double c)
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