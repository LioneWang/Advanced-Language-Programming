/* 2150265 ��09 ����� */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a=0;
	int i = 0;
	int b, c, d, e, f;
	printf("������һ��[1..30000]�������:\n");
	scanf("%d", &a);
	b = a % 10;
	c = (a / 10) % 10;
	d = (a / 100) % 10;
	e = (a / 1000) % 10;
	f = (a / 10000);
	printf("��λ : %d\n", f);
	printf("ǧλ : %d\n", e);
	printf("��λ : %d\n", d);
	printf("ʮλ : %d\n", c);
	printf("��λ : %d\n", b);
	
	return 0;


}