/* 2150265 信09 王加炜 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	printf("请输入三角形的两边及其夹角(角度)\n");
	int a;
	int b;
	float pi = 3.14159f;
	float  s;
	int e;
	scanf("%d %d %d", &a, &b, &e);
	float k = (float) a * (float)b;
	s = (k * (float)sin((e * pi) / 180))/2;
	printf("三角形面积为 : %.3f", s);
	return 0;
}