/* 济勤09班 2150265 王加炜 */
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include<string.h>
char const chnstr[] = "零壹贰叁肆伍陆柒捌玖";
char result[256];


void daxie(int num, int flag_of_zero,int num1)
{
	/* 不允许对本函数做任何修改 */
	
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
	printf("请输入[0-100亿)之间的数字:\n") ;
	scanf( "%lf" , &num1);
	printf( "大写结果是:\n");
	
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
		strcat(result,"拾");
		m = m + 2;
	}
		
	daxie(k, l,m);


	if (k)
	{
		m = m + 2;
		strcat(result, "亿");
		m = m + 2;
	}
		
	//十亿到亿位


	daxie(j, k, m);
	if (j)
	{
		m = m + 2;
		strcat(result, "仟");
		m = m + 2;
	}

	daxie(i, j, m);

	if (i)
	{
		m = m + 2;
		strcat(result, "佰");
		m = m + 2;
	}

	daxie(h, i, m);

	

	if (h)
	{
		m = m + 2;
		strcat(result, "拾");
		m = m + 2;
	}

	daxie(g, h,m);

	if (g)
	{
		m = m + 2;
		strcat(result, "万");
		m = m + 2;
	}
	//千万到万位
	daxie(f, g, m);
	
	if (f)
	{
		m = m + 2;
		strcat(result, "仟");
		m = m + 2;
	}
	daxie(e, f, m);
	

	if (e)
	{
		m = m + 2;
		strcat(result, "佰");
		m = m + 2;
	}
		

	daxie(d, e, m);
	

	if (d)
	{
		m = m + 2;
		strcat(result, "拾");
		m = m + 2;
	}

	daxie(c,0,m);


	if (c != 0)
	{
		if (b == 0 && a == 0)
		{
			m = m + 2;
			strcat(result, "圆整");
		}
		else
		{
			m = m + 2;
			strcat(result, "圆");
			m = m + 2;
		}
	}
	
	//千到个位



	daxie(b, 0,m);
	if (b)
	{
		m = m + 2;
		strcat(result, "角");
		m = m + 2;
	}
		
	if ((a == 0) && (b != 0))
	{
		m = m + 2;
		strcat(result, "整");
		
	}
		
	daxie(a, 0,m);
	if (a)
	{
		m = m + 2;
		strcat(result, "分");
		
	}
		
	if (num1 == 0)
	{
		strcat(result, "零圆整");
	}
	


	printf("%s\n", result);

	//角到分位


	/* 按需完成 */
	return 0;
}
