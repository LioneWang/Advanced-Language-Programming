#include<iostream>
using namespace std;
#include<math.h>
void h2(double a, double b, double c)
{
	double d, e;
	cout << "����������ʵ����" << endl;
	d = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	e = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
	cout << "x1=" << d << endl;
	cout << "x2=" << e << endl;

}