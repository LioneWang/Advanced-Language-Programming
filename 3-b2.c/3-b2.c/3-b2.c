/* 2150265 信09 王加炜 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a=0;
	int i = 0;
	int b, c, d, e, f;
	printf("请输入一个[1..30000]间的整数:\n");
	scanf("%d", &a);
	b = a % 10;
	c = (a / 10) % 10;
	d = (a / 100) % 10;
	e = (a / 1000) % 10;
	f = (a / 10000);
	printf("万位 : %d\n", f);
	printf("千位 : %d\n", e);
	printf("百位 : %d\n", d);
	printf("十位 : %d\n", c);
	printf("个位 : %d\n", b);
	
	return 0;


}