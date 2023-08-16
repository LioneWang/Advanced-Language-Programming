#include <iostream>
using namespace std;
int main()
{
	cout << "请输入成绩（最多1000个），以-1结束" << endl;
	int score[1000];
	int i, a, b, t;
	for (i = 0; i < 1000; i++)
	{
		cin >> score[i];
		if (score[i] == -1 && i == 0)
		{
			cout << "无有效输入" << endl;
			return 0;
		}


		if (score[i] == -1)
			break;
	}
	cout << "输入的数组为:" << endl;
	for (a = 0; a < i; a++)
	{
		cout << score[a] << " ";
		if ((a + 1) % 10 == 0)
			cout << endl;
	}
	if (a % 10 != 0)
		cout << endl;
	for (a = 0; a < i - 1; a++)
	{
		for (b = 0; b < i - (a + 1); b++)
		{
			if (score[b] <= score[b + 1])
			{
				t = score[b + 1];
				score[b + 1] = score[b];
				score[b] = t;

			}
		}
	}

	cout << "分数与名次的对应关系为:" << endl;

	for (a = 0; a < i; a++)
	{

		static int num = 1;
		if (a == 0)
			cout << score[a] << " " << num << endl;
		else
		{
			
			
			if (score[a] == score[a - 1])
				;
			else
			{
				
				num++;
				cout << score[a] << " " << num << endl;
			}
		}
		
		
	}
	
	return 0;
}