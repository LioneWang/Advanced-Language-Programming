/* 2150265 ��09 ����� */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c, d, e, f, g, h, i, j, k, l,num4;
	long long int num2;
	double num1,num3;
	printf("������[0-100��)֮�������:\n");
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

	printf("ʮ��λ : %d\n",l);
	printf("��λ   : %d\n",k);
	printf("ǧ��λ : %d\n",j);
	printf("����λ : %d\n",i);
	printf("ʮ��λ : %d\n",h);
	printf("��λ   : %d\n",g);
	printf("ǧλ   : %d\n",f); 
	printf("��λ   : %d\n",e);
	printf("ʮλ   : %d\n",d);
	printf("Բ     : %d\n",c);
	printf("��     : %d\n",b);
	printf("��     : %d\n",a);




	
	
	return 0;
}