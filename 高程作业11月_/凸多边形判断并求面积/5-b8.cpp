#include <iostream>
using namespace std;
int main()
{
	int num;
	double x[7];
	double y[7];
	int i;
	int p;
	int q;
	while (1)
	{
		cout << "请输入多边形的顶点数量(4-7)" << endl;
		cin >> num;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(1024, '\n');
			continue;
		}
		else if (num > 7 || num < 4)
			continue;
		else
			break;
	}
	
	

	cout << "请按顺时针/逆时针方向输入" <<num<<"个顶点的x,y坐标："<< endl;
	for (i = 0; i < num; i++)
	{
		while (1)
		{
			cout << "请输入第"<<i+1<<"个顶点的坐标：" << endl;
			cin >> x[i] >> y[i];
			if (cin.fail())
			{
				cin.clear();
				cin.ignore(1024, '\n');
				continue;
			}
			else
				break;
		}
		
	}


	//判断是否能构成多边形
	for (i = num-1; i >=2; i--)
	{
		for(p=i-1;p>=1;p--)
			for (q = p - 1; q >= 0; q--)
			{
				if ((y[i] - y[p]) / (x[i] - x[p]) == (y[i] - y[q]) / (x[i] - x[q]))
				{
					cout << "不是凸" << num << "边形" << endl;
					return 0;
				}
			}
	}
	
	//判断是否为凸多边形
	for(i=num-1;i>=2;i--)
		for(p=i-1;p>=1;p--)
			for (q=p-1; q >= 0; q--)
			{
				if((x[q]*(y[p] - y[i]) + y[q]*(x[i] - x[p]) - x[i]*y[p] + x[p]*y[i])* (x[q+1] * (y[p] - y[i]) + y[q+1] * (x[i] - x[p]) - x[i] * y[p] + x[p] * y[i])<0)
				{
					cout << "不是凸" << num << "边形" << endl;
					return 0;
				}
			}
	double sum = 0;
	double s = 0;
	for (i = 1; i < num - 1; i++)
	{
		s = fabs((x[0] * (y[i] - y[i + 1]) + x[i] * (y[i + 1] - y[0]) + x[i + 1] * (y[0] - y[i]))) / 2.0;
		sum = sum + s;
	}
	cout << "凸" << num << "边形的面积=" << sum << endl;
	return 0;
}