/* 2150265 ����� ����09�� */
#include <iostream>
using namespace std;
int main();
/* ----����Ҫ��----
   1���������������ͷ�ļ�
   2����������ȫ�ֱ�������̬�ֲ�����
   3�������������������
   4������������������κ���ʽ��ѭ��
   --------------------------------------------------------------------- */

   /***************************************************************************
	 �������ƣ�
	 ��    �ܣ�������n�ֽ�����
	 ���������
	 �� �� ֵ��
	 ˵    ����1�����������βΡ��������;���׼��
			   2��������ʹ��64λ����
   ***************************************************************************/
void convert(int n)
{
	
	if (-2147483648<n  &&  n< 0)
	{
		n = -n;
		cout << "- ";
		
		
	}
	
	if(n>=0)
	{
		if (n < 10)
		{

			switch (n)
			{
				case 1:
					cout << char('1');
					break;
				case 2:
					cout << char('2');
					break;
				case 3:
					cout << char('3');
					break;
				case 4:
					cout << char('4');
					break;
				case 5:
					cout << char('5');
					break;
				case 6:
					cout << char('6');
					break;
				case 7:
					cout << char('7');
					break;
				case 8:
					cout << char('8');
					break;
				case 9:
					cout << char('9');
					break;
			}
			cout << " ";
		}

		else
		{
			convert(n / 10);

			switch (n - (n / 10) * 10)
			{
				case 1:
					cout << char('1');
					break;
				case 2:
					cout << char('2');
					break;
				case 3:
					cout << char('3');
					break;
				case 4:
					cout << char('4');
					break;
				case 5:
					cout << char('5');
					break;
				case 6:
					cout << char('6');
					break;
				case 7:
					cout << char('7');
					break;
				case 8:
					cout << char('8');
					break;
				case 9:
					cout << char('9');
					break;
			}
			cout << " ";

		}
	}
	if (n == -2147483648)
	{
		n = n +1;
		n = -n;
		cout << "- ";
		if (n < 10)
		{

			switch (n)
			{
				case 1:
					cout << char('1');
					break;
				case 2:
					cout << char('2');
					break;
				case 3:
					cout << char('3');
					break;
				case 4:
					cout << char('4');
					break;
				case 5:
					cout << char('5');
					break;
				case 6:
					cout << char('6');
					break;
				case 7:
					cout << char('7');
					break;
				case 8:
					cout << char('8');
					break;
				case 9:
					cout << char('9');
					break;
			}
			cout << " ";
		}

		else
		{
			convert(n / 10);

			switch (n - (n / 10) * 10)
			{
				case 1:
					cout << char('1');
					break;
				case 2:
					cout << char('2');
					break;
				case 3:
					cout << char('3');
					break;
				case 4:
					cout << char('4');
					break;
				case 5:
					cout << char('5');
					break;
				case 6:
					cout << char('6');
					break;
				case 7:
					cout << char('8');
					break;
				case 8:
					cout << char('8');
					break;
				case 9:
					cout << char('9');
					break;
			}
			cout << " ";

		}
	}
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����main������׼��
***************************************************************************/
int main()
{
	
	int n;
	cout << "������һ������" << endl;
	cin >> n;

	convert(n);
	cout << endl;

	return 0;
}