/* ����09�� 2150265 ����� */
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include<string.h>
char const chnstr[] = "��Ҽ��������½��ƾ�";
char result[256];


void daxie(int num, int flag_of_zero,int num1)
{
	/* ������Ա��������κ��޸� */
	
	if (num == 0)
	{
		if (flag_of_zero)
		{
			result[num1] = chnstr[0];
			result[num1 + 1] = chnstr[1];
			
		}
	}
	else
	{
		result[num1] = chnstr[2*num];
		result[num1 + 1] = chnstr[2 * num + 1];
	}
	
}


int main()
{
	int m = 0;
	double num1, num2;
	long long int num3;
	int a, b, c, d, e, f, g, h, i, j, k, l, num4;
	printf("������[0-100��)֮�������:\n") ;
	scanf( "%lf" , &num1);
	printf( "��д�����:\n");
	
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
	
	

	daxie(l, 0,m);
	
	
	if (l)
	{
		m = m + 2;
		strcat(result,"ʰ");
		m = m + 2;
	}
		
	daxie(k, l,m);


	if (k)
	{
		m = m + 2;
		strcat(result, "��");
		m = m + 2;
	}
		
	//ʮ�ڵ���λ


	daxie(j, k, m);
	if (j)
	{
		m = m + 2;
		strcat(result, "Ǫ");
		m = m + 2;
	}

	daxie(i, j, m);

	if (i)
	{
		m = m + 2;
		strcat(result, "��");
		m = m + 2;
	}

	daxie(h, i, m);

	

	if (h)
	{
		m = m + 2;
		strcat(result, "ʰ");
		m = m + 2;
	}

	daxie(g, h,m);

	if (g)
	{
		m = m + 2;
		strcat(result, "��");
		m = m + 2;
	}
	//ǧ����λ
	daxie(f, g, m);
	
	if (f)
	{
		m = m + 2;
		strcat(result, "Ǫ");
		m = m + 2;
	}
	daxie(e, f, m);
	

	if (e)
	{
		m = m + 2;
		strcat(result, "��");
		m = m + 2;
	}
		

	daxie(d, e, m);
	

	if (d)
	{
		m = m + 2;
		strcat(result, "ʰ");
		m = m + 2;
	}

	daxie(c,0,m);


	if (c != 0)
	{
		if (b == 0 && a == 0)
		{
			m = m + 2;
			strcat(result, "Բ��");
		}
		else
		{
			m = m + 2;
			strcat(result, "Բ");
			m = m + 2;
		}
	}
	
	//ǧ����λ



	daxie(b, 0,m);
	if (b)
	{
		m = m + 2;
		strcat(result, "��");
		m = m + 2;
	}
		
	if ((a == 0) && (b != 0))
	{
		m = m + 2;
		strcat(result, "��");
		
	}
		
	daxie(a, 0,m);
	if (a)
	{
		m = m + 2;
		strcat(result, "��");
		
	}
		
	if (num1 == 0)
	{
		strcat(result, "��Բ��");
	}
	


	printf("%s\n", result);

	//�ǵ���λ


	/* ������� */
	return 0;
}
