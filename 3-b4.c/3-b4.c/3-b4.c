/* 2150265 ��09 ����� */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	printf("�����������ε����߼���н�(�Ƕ�)\n");
	int a;
	int b;
	float pi = 3.14159f;
	float  s;
	int e;
	scanf("%d %d %d", &a, &b, &e);
	float k = (float) a * (float)b;
	s = (k * (float)sin((e * pi) / 180))/2;
	printf("���������Ϊ : %.3f", s);
	return 0;
}