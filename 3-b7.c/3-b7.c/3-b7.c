/* 2150265 信09 王加炜 */
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
		printf("请输入找零值：\n");
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
		printf("共%d张找零，具体如下：\n", w);
		if (e)
		{
			printf("50元 : %d张\n",e) ;

		}
		if (g)
		{
			printf("20元 : %d张\n", g);

		}
		if (i)
		{
			printf("10元 : %d张\n", i);

		}
		if (k)
		{
			printf("5元  : %d张\n", k);

		}
		if (m)
		{
			printf("10角 : %d张\n", m);

		}
		if (n)
		{
			printf("5角  : %d张\n", n);

		}
		if (p)
		{
			printf("1角  : %d张\n", p);

		}
		if (r)
		{
			printf("5分  : %d张\n", r);

		}
		if (t)
		{
			printf("2分  : %d张\n", t);

		}
		if (v)
		{
			printf("1分  : %d张\n", v);

		}
	

	
	return 0; 
}