/* 济勤09班 2150265 王加炜 */ 
#include <iostream>
#include<string>
using namespace std;
char const chnstr[] = "零壹贰叁肆伍陆柒捌玖";
string result;


void daxie(int num, int flag_of_zero)
{
	/* 不允许对本函数做任何修改 */

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
	cout<<"请输入[0-100亿)之间的数字:"<<endl;
	cin>> num1;
	cout<<"大写结果是:"<<endl;

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
		
		result=result+ "拾";
		
	}

	daxie(k, l);


	if (k)
	{
		
		result = result + "亿";
		
	}

	//十亿到亿位


	daxie(j, k);
	if (j)
	{
		
		result = result + "仟";
		
	}

	daxie(i, j);

	if (i)
	{
		
		result = result + "佰";
		
	}

	daxie(h, i);



	if (h)
	{
		
		result = result + "拾";
		
	}

	daxie(g, h);

	if (g)
	{
		
		result = result + "万";
		
	}
	//千万到万位
	daxie(f, g);

	if (f)
	{
		
		result = result + "仟";
		
	}
	daxie(e, f);


	if (e)
	{
		
		result = result + "佰";
		
	}


	daxie(d, e);


	if (d)
	{
		
		result = result + "拾";
		
	}

	daxie(c, 0);


	if (c != 0)
	{
		if (b == 0 && a == 0)
		{
			
			result = result + "圆整";
		}
		else
		{
			
			result = result + "圆";
			
		}
	}

	//千到个位



	daxie(b, 0);
	if (b)
	{
		
		result = result + "角";
		
	}

	if ((a == 0) && (b != 0))
	{
		
		result = result + "整";

	}

	daxie(a, 0);
	if (a)
	{
		
		result = result + "分";

	}

	if (num1 == 0)
	{
		result = result + "零圆整";
	}



	cout<< result<<endl;

	//角到分位


	/* 按需完成 */
	return 0;
}
