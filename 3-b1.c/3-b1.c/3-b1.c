/* 2150265 ��09 ����� */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    float r, h;
    float pi = 3.14159f;
    printf("������뾶�͸߶�\n");
    scanf("%f %f", &r, &h);
    float a, b, c, d, e;
    a = 2 * pi * r;
    b = pi * r * r;
    c = 4 * pi * r * r;
    d = (4 * pi * r * r * r) / 3;
    e = b * h;
    printf("Բ�ܳ�     : %.2f\n", a);
    printf("Բ���     ��%.2f\n", b);
    printf("Բ������ ��%.2f\n", c);
    printf("Բ�����   ��%.2f\n", d);
    printf("Բ�����   ��%.2f\n", e);





    return 0;
}
