#include<iostream>
using namespace std;
#include<math.h>
#include"4-b16.h"
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