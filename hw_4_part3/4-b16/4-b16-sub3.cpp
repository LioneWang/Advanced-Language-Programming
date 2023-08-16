#include<iostream>
using namespace std;
#include<math.h>
void h3(double a, double b, double c)
{
	double d, e;
	cout << "有两个相等实根：" << endl;
	d = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	cout << "x1=x2=" << d << endl;


}