/* 2150265 ����� ����09�� */
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
	cout << "������һ������С��80���ַ��������Ĵ���"<< endl;
	fgets(a, 80, stdin);
	int len = strlen(a) - 1;
	huiwen(a, len);
	return 0;
}


