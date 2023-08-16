#include <iostream>
using namespace std;
int main()
{
	int a[21];
	int num = 0;
	int i;
	cout << "请输入任意个正整数（升序，最多20个），以-1结束" << endl;
	for (i = 0; i < 21; i++)
	{
		num++;
		cin >> a[i];
		if ((a[i] == -1) && (i == 0))
		{
			cout << "无有效输入" << endl;
			return 0;
		}
			
		if (a[i] == -1)
			break;
		
	}
	cout << "原数组为：" << endl;
	for (i = 0; i < num - 1; i++)
	{
		cout << a[i]<<" ";
	}
	cout << endl;
	cout << "请输入要插入的正整数" << endl;
	int p;
	int t[21];
	cin >> p;
	cout << "插入后的数组为：" << endl;
	for (i = 0; i < num; i ++)
	{
		t[i] = a[i];
	}
	for (i = 0; i < num; i++)
	{
		if (a[i] > p)
		{
			a[i] = p;
			for (; i < num ; i++)
			{
				a[i + 1] = t[i];
			}
			break;
		}
		
	}
	
	if(a[num - 1] <p)
		a[num-1]=p;
	
	for (i = 0; i < num; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}