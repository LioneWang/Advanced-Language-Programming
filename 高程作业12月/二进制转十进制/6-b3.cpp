/* 2150265 ����� ����09�� */
#include <iostream>
using namespace std;
void erzhuanshi(char* g, int length)
{
	int num = 0;
	for (int i = length; i > 0; i--)
	{
		num = num + int((*g) - 48) * int((pow(2, i - 1)));
		g++;
	}
	cout << num;
}
int main()
{
	char a[32];
	cout << "������һ��0/1��ɵ��ַ��������Ȳ�����32" << endl;
	fgets(a, 32, stdin);
	int len;
	len = strlen(a) - 1;
	erzhuanshi(a, len);
	cout << endl;
	return 0;
}