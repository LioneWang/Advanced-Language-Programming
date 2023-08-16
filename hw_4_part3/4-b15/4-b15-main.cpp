#include<iostream>
using namespace std;
#include<math.h>
void h1(double a, double b, double c);
void h2(double a, double b, double c);
void h3(double a, double b, double c);
void h4(double a, double b, double c);
int main()
{
	cout << "请输入一元二次方程的三个系数a,b,c:" << endl;
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