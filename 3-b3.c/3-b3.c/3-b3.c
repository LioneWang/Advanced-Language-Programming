/* 2150265 信09 王加炜 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c, d, e, f, g, h, i, j, k, l,num4;
	long long int num2;
	double num1,num3;
	printf("请输入[0-100亿)之间的数字:\n");
	scanf("%lf", &num1);
	num2=(long long int)(num1/1);
	num3 = num1 - num2;
	num4 = (int)(100 * num3+1);
	a = num4 %10;
	b = (num4 / 10) ;
	c = (num2 ) % 10;
	d = (num2 / 10) % 10;
	e = (num2 / 100) % 10;
	f = (num2 / 1000) % 10;
	g = (num2 / 10000) % 10;
	h = (num2 / 100000) % 10;
	i = (num2 / 1000000) % 10;
	j = (num2 / 10000000) % 10;
	k = (num2 / 100000000) % 10;
	l = (int)(num2 / 1000000000);

	printf("十亿位 : %d\n",l);
	printf("亿位   : %d\n",k);
	printf("千万位 : %d\n",j);
	printf("百万位 : %d\n",i);
	printf("十万位 : %d\n",h);
	printf("万位   : %d\n",g);
	printf("千位   : %d\n",f); 
	printf("百位   : %d\n",e);
	printf("十位   : %d\n",d);
	printf("圆     : %d\n",c);
	printf("角     : %d\n",b);
	printf("分     : %d\n",a);




	
	
	return 0;
}