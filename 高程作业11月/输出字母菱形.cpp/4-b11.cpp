/* 2150265 ����09�� ����� */
#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;



/* -----------------------------------------------------------------------------------
		����   ��1����������һ�����������������������ӵĺ����в������κ���ʽ��ѭ��
				 2��������ų���
				 3������const�ͱ���

		������ ��1������ȫ�ֱ���
   ----------------------------------------------------------------------------------- */


void max_width(int n)
{
	if (n >0)
	{
		max_width(n - 1);
		cout << "=";
	}
	
		
}

   /***************************************************************************
	 �������ƣ�
	 ��    �ܣ���ӡ����
	 ���������
	 �� �� ֵ��
	 ˵    ����
   ***************************************************************************/




void print_row(char start_ch,char end_ch)
{
	if (start_ch > 65)
	{
		cout << char(start_ch);
		print_row(start_ch - 1, end_ch);
		cout << char(start_ch);
	}
	else if (start_ch == 65)
	{
		cout << char(start_ch);
	}
	else
		;
}

void space(char start_ch,char  end_ch)
{
	if (start_ch < end_ch)
	{
		cout << " ";
		space(start_ch + 1, end_ch);
	}
}

void print_diamond(char start_ch, char end_ch)
{
	if (start_ch < end_ch)
	{
		space(start_ch, end_ch);
		print_row(start_ch, end_ch);
		cout << endl;
		print_diamond(start_ch + 1, end_ch);
		cout << endl;
		space(start_ch, end_ch);
		print_row(start_ch, end_ch);
	}
	else if (start_ch == end_ch)
	{
		space(start_ch, end_ch);
		print_row(start_ch, end_ch);

	}
	
	
	/* ����ʵ�֣������в������κ���ʽ��ѭ�����������徲̬�ֲ����� */
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����main������׼�޸�
***************************************************************************/
int main()
{
	cout << "����������ַ�(A~Z)" << endl;
	char end_ch;
	/* ������������ַ�(����д��Ч) */
	cin>>end_ch;
	int  h= int(end_ch) - int('A');
	int g = 2 * h + 1;
	/* ����(�м�ΪA) */
	max_width(g); /* ��������������=(��������ѭ��) */
	cout << endl;
	cout << "����(" << end_ch << "->A)" << endl;
	max_width(g); /* ��������������=(��������ѭ��) */
	cout << endl;
	print_diamond('A', end_ch);
	cout << endl;
	cout << endl;
	return 0;
}

	
