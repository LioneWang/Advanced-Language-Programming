/* 2150265 ��09 ����� */
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
		printf("����������ֵ��\n");
		double a, b;
		int e, f, g, h, i, j, k, l, m;
		int c, d;
		scanf("%lf" , &a);
		c = (int)(a);
		b = a - c;
		d = (int)(100 * b+0.99);
		e = c / 50;
		f = c % 50;
		g = f / 20;
		h = f % 20;
		i = h / 10;
		j = h % 10;
		k = j / 5;
		l = j % 5;
		m = c - 50 * e - 20 * g - 10 * i - 5 * k;
		int n, o, p, q, r, s, t, u, v;
		n = d / 50;
		o = d % 50;
		p = o / 10;
		q = o % 10;
		r = q / 5;
		s = q % 5;
		t = s / 2;
		u = s % 2;
		v = d - 50 * n - 10 * p - 5 * r - 2 * t;
		int w = 0;
		w = e + g + i + k + m + n + p + r + t + v;
		printf("��%d�����㣬�������£�\n", w);
		if (e)
		{
			printf("50Ԫ : %d��\n",e) ;

		}
		if (g)
		{
			printf("20Ԫ : %d��\n", g);

		}
		if (i)
		{
			printf("10Ԫ : %d��\n", i);

		}
		if (k)
		{
			printf("5Ԫ  : %d��\n", k);

		}
		if (m)
		{
			printf("10�� : %d��\n", m);

		}
		if (n)
		{
			printf("5��  : %d��\n", n);

		}
		if (p)
		{
			printf("1��  : %d��\n", p);

		}
		if (r)
		{
			printf("5��  : %d��\n", r);

		}
		if (t)
		{
			printf("2��  : %d��\n", t);

		}
		if (v)
		{
			printf("1��  : %d��\n", v);

		}
	

	
	return 0; 
}