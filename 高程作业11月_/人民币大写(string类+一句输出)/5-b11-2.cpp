/* ����09�� 2150265 ����� */ 
#include <iostream>
#include<string>
using namespace std;
char const chnstr[] = "��Ҽ��������½��ƾ�";
string result;


void daxie(int num, int flag_of_zero)
{
	/* ������Ա��������κ��޸� */

	if (num == 0)
	{
		if (flag_of_zero)
		{
			result = result+chnstr[0]+chnstr[1];
			

		}
	}
	else
	{
		result = result + chnstr[num*2] + chnstr[num*2+1];
	}

}


int main()
{
	int m = 0;
	double num1, num2;
	long long int num3;
	int a, b, c, d, e, f, g, h, i, j, k, l, num4;
	cout<<"������[0-100��)֮�������:"<<endl;
	cin>> num1;
	cout<<"��д�����:"<<endl;

	num3 = (long long int)(num1 / 1);
	num2 = num1 - num3;
	num4 = (int)(100 * num2 + 0.01);
	a = (int)((num4 % 10));
	b = (int)((num4 / 10));
	c = (num3) % 10;
	d = (num3 / 10) % 10;
	e = (num3 / 100) % 10;
	f = (num3 / 1000) % 10;
	g = (num3 / 10000) % 10;
	h = (num3 / 100000) % 10;
	i = (num3 / 1000000) % 10;
	j = (num3 / 10000000) % 10;
	k = (int)(num3 / 100000000) % 10;
	l = (int)((num3 / 100000000));



	daxie(l, 0);


	if (l)
	{
		
		result=result+ "ʰ";
		
	}

	daxie(k, l);


	if (k)
	{
		
		result = result + "��";
		
	}

	//ʮ�ڵ���λ


	daxie(j, k);
	if (j)
	{
		
		result = result + "Ǫ";
		
	}

	daxie(i, j);

	if (i)
	{
		
		result = result + "��";
		
	}

	daxie(h, i);



	if (h)
	{
		
		result = result + "ʰ";
		
	}

	daxie(g, h);

	if (g)
	{
		
		result = result + "��";
		
	}
	//ǧ����λ
	daxie(f, g);

	if (f)
	{
		
		result = result + "Ǫ";
		
	}
	daxie(e, f);


	if (e)
	{
		
		result = result + "��";
		
	}


	daxie(d, e);


	if (d)
	{
		
		result = result + "ʰ";
		
	}

	daxie(c, 0);


	if (c != 0)
	{
		if (b == 0 && a == 0)
		{
			
			result = result + "Բ��";
		}
		else
		{
			
			result = result + "Բ";
			
		}
	}

	//ǧ����λ



	daxie(b, 0);
	if (b)
	{
		
		result = result + "��";
		
	}

	if ((a == 0) && (b != 0))
	{
		
		result = result + "��";

	}

	daxie(a, 0);
	if (a)
	{
		
		result = result + "��";

	}

	if (num1 == 0)
	{
		result = result + "��Բ��";
	}



	cout<< result<<endl;

	//�ǵ���λ


	/* ������� */
	return 0;
}
