/* 2150265 ����� ����09�� */
#include <iostream>
#include <iomanip>
using namespace std;

/* ----����Ҫ��----
   1���������������ͷ�ļ�
   2����������ȫ�ֱ�����������hanoi�ж���һ����̬�ֲ�����
   3������������������������ʼ/Ŀ�����ĺ���������������ʹ��ѭ�������������
   4����������ú������У���main�в���������κ���ʽ��ѭ��
      ���������main�н��У���main���������ѭ��
   --------------------------------------------------------------------- */

   /***************************************************************************
     �������ƣ�
     ��    �ܣ���ӡn�㺺ŵ�����ƶ�˳��
     ���������int n������
               char src����ʼ��
               char tmp���м���
               char dst��Ŀ����
     �� �� ֵ��
     ˵    ����1�����������βΡ��������;���׼��
               2������������������κ���ʽ��ѭ��
               3��������һ����̬�ֲ�����
   ***************************************************************************/
	void move_hanoi(int n, char src, char dst)
	{
	
		static int num_ = 0;
		num_++;
		cout << setw(5)<<setiosflags(ios::right)<<num_<<":"<<setw(3) << setiosflags(ios::right) << n << "# " << src << "-->" << dst << endl;
	
	
	}
	void hanoi(int n, char src, char tmp, char dst)
	{
	
		//�������n-1��ľ����x����z�Ƶ�y
	
		if (n == 1)
		{
			;
		}
		else
		{


			hanoi(n - 1, src, dst, tmp);
		}






		//���������һ��ľ����x����y�Ƶ�z
	
		move_hanoi(n, src, dst);
	

		//�������n-1��ľ����y����x�Ƶ�z

		if (n == 1)
		{
			;
		}
		else
		{

			hanoi(n - 1, tmp, src, dst);
		}



	}

	/***************************************************************************
	  �������ƣ�
	  ��    �ܣ�
	  ���������
	  �� �� ֵ��
	  ˵    �����������(��������뺯��)�����õݹ麯��
	***************************************************************************/
	int main()
	{
		int num;
		while (1)
		{

			cout << "�����뺺ŵ���Ĳ���(1-16)" << endl;
			cin >> num;
			if (cin.fail())
			{
				cin.clear();
				cin.ignore(1024, '\n');
			}
			else if (num < 1 || num>16)
			{
				cin.clear();
				cin.ignore(1024, '\n');
				continue;
			}
			else
				break;
		}
		char src, tmp, dst;
		while (1)
		{

			cout << "��������ʼ��(A-C)" << endl;
			cin >> src;
			if (cin.fail())
			{
				cin.clear();
				cin.ignore(1024, '\n');
			}
			else if (int(src) == 65 || int(src) == 66 || int(src) == 67 || int(src) == 97 || int(src) == 98 || int(src) == 99)
			{
				cin.clear();
				cin.ignore(1024, '\n');
				break;
			}
			else
				continue;
		}




		cout << "������Ŀ����(A-C)" << endl;
		cin >> dst;


		if (src > 96 && src < 100)
			src = src - 32;

		if (dst > 96 && dst < 100)
			dst = dst - 32;
		while (1)
		{
			if ((src == dst)||(src==dst-32) )
			{
				cout << "Ŀ����(" << dst << ")" << "��������ʼ��(" << src << ")��ͬ" << endl;
				cout << "������Ŀ����(A-C)" << endl;
				cin >> dst;
			}
			else
				break;
		}
		if (dst > 96 && dst < 100)
			dst = dst - 32;
		tmp = 198 - src - dst;
		cout << "�ƶ�����Ϊ:" << endl;
		hanoi(num, src, tmp, dst);
	

	}