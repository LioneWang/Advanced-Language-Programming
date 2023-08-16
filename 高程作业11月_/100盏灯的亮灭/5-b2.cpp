#include <iostream>
using namespace std;
int main()
{
	int a[100];
	int i, b, c;
	for (i = 0; i < 100; i++)
	{
		a[i] = -1;
	}
	for (b = 0; b < 100; b++)
	{
		for (c = 1; c < 101; c++)
		{
			if ( (b + 1)%c == 0)
			{
				a[b] = -a[b];
			}
		}
	}
	for (i = 0; i < 99; i++)
	{
		if (a[i] == 1)	
			cout << i+1 << " ";
	}
	cout << i + 1 << endl;
	return 0;
}