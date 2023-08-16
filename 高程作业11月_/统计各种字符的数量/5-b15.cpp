/* 2150265 王加炜 济勤09班 */
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	char str[3][128];
	cout << "请输入第1行" << endl;
	cin.getline(str[0], 128);
	cout << "请输入第2行" << endl;
	cin.getline(str[1], 128);
	cout << "请输入第3行" << endl;
	cin.getline(str[2], 128);
	int xiaoxie=0, daxie=0, shuzi=0, kongge=0, qita=0;
	for (int j = 0; j<3; j++)
	{
		for (int i = 0; i < int(strlen(str[j])); i++)
		{
			if (str[j][i] <= 122 && str[j][i] >= 97)
				xiaoxie++;
			
			else if (str[j][i] <= 90 && str[j][i] >= 65)
				daxie++;
			
			else if (str[j][i] <= 57 && str[j][i] >= 48)
				shuzi++;
			
			else if (str[j][i] == 32)
				kongge++;
			
			else
				qita++;
				
		}
	}
	cout << "小写 : " << xiaoxie<<endl;
	cout << "大写 : " << daxie<< endl;
	cout << "数字 : " <<shuzi<< endl;
	cout << "空格 : " <<kongge<< endl;
	cout << "其他 : " <<qita<< endl;
	return 0;
}