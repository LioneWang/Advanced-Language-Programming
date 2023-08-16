#include<iostream>
using namespace std;
#include<math.h>
double a, b, c;
void h1();
void h2();
void h3();
void h4();

int main()
{
	cout << "请输入一元二次方程的三个系数a,b,c:" << endl;
	
	cin >> a >> b >> c;


	if (fabs(a) < 1e-6)
		h1();
	else if ((b * b - 4 * a * c) > 0)
		h2();
	else if ((b * b - 4 * a * c) == 0)
		h3();
	else
		h4();

	
	return 0;
}