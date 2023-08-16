/* 2150265 王加炜 济勤09班 */
#include <iostream>
using namespace std; 
void huiwen(char* p, int length)
{
	int i = 0;
	for (i = 0; i < length; i++)
	{
		if (*(p + i) != *(p + length - 1 - i))
		{
			cout << "no" << endl;
			break;
		}
	}
	if (i == length)
		cout << "yes" << endl;

}
int main()
{
	char a[80], * t;
	cout << "请输入一个长度小于80的字符串（回文串）"<< endl;
	fgets(a, 80, stdin);
	int len = strlen(a) - 1;
	huiwen(a, len);
	return 0;
}


