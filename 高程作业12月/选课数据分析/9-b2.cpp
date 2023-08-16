/* 2150265 ����09�� ����� */

/* ���������ϵͳ�ĺ궨�塢��Ҫ��ͷ�ļ��� */
#include <iostream>
#include<fstream>
#include<cmath>
#include<cstring>
#include<iomanip>
using namespace std;

#define MAX_STU_NUM			256	//Լ���������Ϊ256�ˣ����ֵ��ܺͣ�������ѡ����ѡ��
#define MAX_NAME_LEN			32	//ѧ����������󳤶Ȳ�����16������
#define MAX_FILENAME_LEN		256	//�ļ�������󳤶�
class stu_list;
/* stu_info ����ÿ��ѧ������Ϣ������ѧ�š�������������Ҫ��˽����Ϣ���������ݲ�׼�����ɼ����������Ҫ��������� */
class stu_info {
private:
	int  stu_no;			//ѧ��
	char stu_name[MAX_NAME_LEN];	//����

	/* ���������private���ݳ�Ա����Ա�����Լ�������Ҫ������ */
	friend stu_list;
public:
	/* ���಻�������κεĹ������ݳ�Ա����Ա���� */
	
};

/* stu_list ������ѡ����Ϣ���������ݲ�׼�����ɼ����������Ҫ��������� */
class stu_list {
private:
	stu_info stu[MAX_STU_NUM + 1];//����һ��stu���飬ÿһ��Ԫ�ر�ʾһ��stu_info��Ķ���
	stu_info stu_qian[MAX_STU_NUM + 1];
	stu_info stu_hou[MAX_STU_NUM + 1];
	/* ���������private���ݳ�Ա�ͳ�Ա���� */
	int renshu_qian ;
	int renshu_hou ;
	int num;
public:
	int read(const char* filename, const int append = 0);	//���ļ��ж���ѡ����Ϣ�����д�����2������ֵΪ0��ʾ���Ƿ�ʽ��1��ʾ׷�ӷ�ʽ
	int print(const char* prompt = NULL);			//��ӡ��ǰ�����ѡ������

	/* �������������public��Ա���� */

};

/* --- �˴���������������ĳ�Ա����������ʵ�� --- */
int stu_list::read(const char* filename, const int append )
{
	
	if (append == 0)//����ǰһ��ѡ�ε�ѧ����Ϣ
	{
		int xuehao = 0;
		
		int i = 0;
		int p = 0;
		char ch;
		ifstream in;
		in.open(filename, ios::in || ios::binary);
		if (in.is_open() == 0)
		{
			cout << "�ļ���ʧ��" << endl;
			return -1;
		}
	
		while (in.get(ch))
		{
			if (ch >= '0' && ch <= '9')
			{
				i++;
				xuehao += int((ch - '0')) * int(pow(10, 7 - i));
				if (i == 7)
				{

					in.get();
					in.getline(stu_qian[p].stu_name, 256, '\n');//������ѧ������������stu_info��
					stu_qian[p].stu_no = xuehao;//������ѧ����ѧ�Ŵ���stu_info��



					i = 0;
					p++;
					xuehao = 0;
				}
			}
		}
		renshu_qian = p + 1;
	}
	else//�����һ��ѡ�ε�ѧ����Ϣ
	{
		int xuehao = 0;
		
		
		int i = 0;
		int p = 0;
		char ch;
		ifstream in;
		in.open(filename, ios::in || ios::binary);
		if (in.is_open() == 0)
		{
			cout << "�ļ���ʧ��" << endl;
			return -1;
		}
		
		while (in.get(ch))
		{
			if (ch >= '0' && ch <= '9')
			{
				i++;
				xuehao += int((ch - '0')) * int(pow(10, 7 - i));
				if (i == 7)
				{

					in.get();
					in.getline(stu_hou[p].stu_name, 256, '\n');//������ѧ������������stu_info��
					stu_hou[p].stu_no = xuehao;//������ѧ����ѧ�Ŵ���stu_info��



					i = 0;
					p++;
					xuehao = 0;
				}
			}
		}
		renshu_hou = p + 1;
	}
	int i = 0;
	int j = 0;
	int p = renshu_qian - 1;
	//������������ѧ���Ĳ����浽stu��
	char t[256] = { };
	for (i = 0; i < renshu_qian-1; i++)
	{
		stu[i].stu_no = stu_qian[i].stu_no;
		strcpy_s(stu[i].stu_name, stu_qian[i].stu_name);
	}
	for (j = 0; j < renshu_hou - 1; j++)
	{
		for (i = 0; i < renshu_qian-1; i++)
		{
			if (stu_hou[j].stu_no == stu_qian[i].stu_no)
				break;
			
		}
		if (i == renshu_qian -1)
		{
			stu[p].stu_no = stu_hou[j].stu_no;
			strcpy_s(stu[p].stu_name, stu_hou[j].stu_name);
			p++;
		}
	}
	num = p;
	int c;

	//��������
	for (i = 0; i < num ; i++)
	{
		for (j = i+1; j < num; j++)
		{
			if (stu[i].stu_no > stu[j].stu_no)
			{
				c = stu[i].stu_no;
				stu[i].stu_no = stu[j].stu_no;
				stu[j].stu_no = c;
				strcpy_s(t, stu[i].stu_name);
				strcpy_s(stu[i].stu_name, stu[j].stu_name);
				strcpy_s(stu[j].stu_name, t);
			}
				

		}
	}

}

int stu_list::print(const char* prompt )
{
	cout << prompt<<endl;
	cout << "==========================================="<<endl;
	cout << "��� ѧ��    ����             ��һ�� �ڶ���"<< endl;
	cout << "===========================================" << endl;
	int qian[256] = {0};
	int hou[256] = {0};
	int i = 0;
	int j = 0;
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < renshu_qian - 1; j++)
		{
			if (stu_qian[j].stu_no == stu[i].stu_no)
			{
				qian[i] = 1;
				break;
			}
			
		}
		for (j = 0; j < renshu_hou - 1; j++)
		{
			if (stu_hou[j].stu_no == stu[i].stu_no)
			{
				hou[i] = 1;
				break;
			}
			
		}
	}



	for (i = 0; i < num; i++)
	{
		if (qian[i] == 1)
		{
			if (hou[i] == 1)
			{
				cout << setw(5) << setiosflags(ios::left) << i + 1 << stu[i].stu_no << " " << setw(8) << setiosflags(ios::left) << stu[i].stu_name << setw(10) << setiosflags(ios::right) << 'Y' << "      " << 'Y' << endl;
				cout << resetiosflags(ios::right);
				
			}
			else
			{
				cout << setw(5) << setiosflags(ios::left) << i + 1 << stu[i].stu_no << " " << setw(8) << setiosflags(ios::left) << stu[i].stu_name << setw(10) << setiosflags(ios::right) << 'Y' << "      " << "�˿�" << endl;
				cout << resetiosflags(ios::right);
				
			}
		}
		else
		{
			cout << setw(5) << setiosflags(ios::left) << i + 1 << stu[i].stu_no << " " << setw(8) << setiosflags(ios::left) << stu[i].stu_name << setw(10) << setiosflags(ios::right) << '/' << "      " << "��ѡ" << endl;
			cout << resetiosflags(ios::right);
			
		}
	}
	/*for (i = 0; i < renshu_hou-1; i++)
	{
		for (j = 0; j < renshu_qian-1; j++)
		{
			if (stu_qian[j].stu_no == stu_hou[i].stu_no)
			{
				cout << setw(5) << setiosflags(ios::left) <<i + 1 << stu_hou[i].stu_no << " " << setw(8) << setiosflags(ios::left) << stu_hou[i].stu_name <<setw(10)<< setiosflags(ios::right)<< 'Y' << "      " << 'Y' << endl;
				cout << resetiosflags(ios::right);
				break;
			}
			
		}
		if (j == renshu_qian-1)
		{
			cout << setw(5) << setiosflags(ios::left) << i + 1 << stu_hou[i].stu_no << " " << setw(8) << setiosflags(ios::left) << stu_hou[i].stu_name << setw(10) << setiosflags(ios::right) << '/' << "      " << "��ѡ" << endl;
			cout << resetiosflags(ios::right);
		}
	}*/
	cout << "===========================================" << endl;
	return 1;
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
	char file1[MAX_FILENAME_LEN], file2[MAX_FILENAME_LEN];

	cout << "������ǰһ��ѡ�ε������ļ� : ";
	cin >> file1;
	cout << "�������һ��ѡ�ε������ļ� : ";
	cin >> file2;

	stu_list list;

	/* �����һ�������ļ� */
	if (list.read(file1) < 0)
		return -1;

	/* ����ڶ��������ļ�������2��ֵΪ1��ʾ׷�ӷ�ʽ */
	if (list.read(file2, 1) < 0)
		return -1;

	list.print("����ѡ������");

	return 0;
}