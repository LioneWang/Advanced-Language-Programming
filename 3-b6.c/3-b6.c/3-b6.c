/* 2150265 ��09 ����� */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{


	double num1, num2;
	long long int num3;
	int a, b, c, d, e, f, g, h, i, j, k, l, num4;
	printf("������һ��[0-100��)֮�������:\n");
	scanf("%lf", &num1);
	num3 = (long long int)(num1 / 1);
	num2 = num1 - num3;
	num4 = ( int)(100 * num2);
	a = (int)((num4 % 10) + 0.01);
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
	l = (int)((num3 / 1000000000));


	switch (l)
	{

		case 0:
			break;
		case 1:
			printf("ʰ");
			break;
		case 2:
			printf("��ʰ");
			break;
		case 3:
			printf("��ʰ");
			break;
		case 4:
			printf("��ʰ");
			break;
		case 5:
			printf("��ʰ");
			break;
		case 6:
			printf("½ʰ");
			break;
		case 7:
			printf("��ʰ");
			break;
		case 8:
			printf("��ʰ");
			break;
		case 9:
			printf("��ʰ");
			break;

	}
	switch (k)
	{
		case 0:
			if (l == 0)
			{
				break;
			}
			else
			{
				printf("��");
				break;
			}
			break;
		case 1:
			printf("Ҽ��");
			break;
		case 2:
			printf("����");
			break;
		case 3:
			printf("����");
			break;
		case 4:
			printf("����");
			break;
		case 5:
			printf("����");
			break;
		case 6:
			printf("½��");
			break;
		case 7:
			printf("����");
			break;
		case 8:
			printf("����");
			break;
		case 9:
			printf("����");
			break;

	}
	switch (j)
	{
		case 0:
			if ((j == 0) && (i == 0) && (h == 0) && (g == 0))
				break;
			if ((k == 0) && (l == 0))
				break;
			else
				printf("��");
			break;
			break;
		case 1:
			printf("ҼǪ");
			break;
		case 2:
			printf("��Ǫ");
			break;
		case 3:
			printf("��Ǫ");
			break;
		case 4:
			printf("��Ǫ");
			break;
		case 5:
			printf("��Ǫ");
			break;
		case 6:
			printf("½Ǫ");
			break;
		case 7:
			printf("��Ǫ");
			break;
		case 8:
			printf("��Ǫ");;
			break;
		case 9:
			printf("��Ǫ");
			break;

	}
	switch (i)
	{
		case 0:
			if (j == 0)
			{
				break;
			}
			else
			{
				printf("��");
				break;
			}
			break;
		case 1:
			printf("Ҽ��");
			break;
		case 2:
			printf("����");
			break;
		case 3:
			printf("����");
			break;
		case 4:
			printf("����");
			break;
		case 5:
			printf("���");
			break;
		case 6:
			printf("½��");
			break;
		case 7:
			printf("���");
			break;
		case 8:
			printf("�ư�");
			break;
		case 9:
			printf("����");
			break;

	}
	switch (h)
	{
		case 0:
			if ((i == 0) || ((i == 0) && (j == 0)))
			{
				break;
			}
			if (g == 0)
			{
				break;
			}
			else
			{
				printf("��");
				break;
			}
			break;
		case 1:
			printf("Ҽʰ");
			break;
		case 2:
			printf("��ʰ");
			break;
		case 3:
			printf("��ʰ");
			break;
		case 4:
			printf("��ʰ");
			break;
		case 5:
			printf("��ʰ");
			break;
		case 6:
			printf("½ʰ");
			break;
		case 7:
			printf("��ʰ");
			break;
		case 8:
			printf("��ʰ");
			break;
		case 9:
			printf("��ʰ");
			break;

	}
	switch (g)
	{
		case 0:
			if ((i != 0) || (j != 0) || (h != 0))
			{
				printf("��");
			}
			if ((i == 0) && (j == 0) && (h == 0))
			{
				break;
			}
			break;
		case 1:
			printf("Ҽ��");
			break;
		case 2:
			printf("����");
			break;
		case 3:
			printf("����");
			break;
		case 4:
			printf("����");
			break;
		case 5:
			printf("����");
			break;
		case 6:
			printf("½��");
			break;
		case 7:
			printf("����");
			break;
		case 8:
			printf("����");
			break;
		case 9:
			printf("����");
			break;

	}

	switch (f)
	{
		case 0:
			if ((c == 0) && (d == 0) && (e == 0))
				break;
			else if ((c != 0) || (d != 0) || (e != 0))
				printf("��");
			break;
			break;
		case 1:
			printf("ҼǪ");
			break;
		case 2:
			printf("��Ǫ");
			break;
		case 3:
			printf("��Ǫ");
			break;
		case 4:
			printf("��Ǫ");
			break;
		case 5:
			printf("��Ǫ");
			break;
		case 6:
			printf("½Ǫ");
			break;
		case 7:
			printf("��Ǫ");
			break;
		case 8:
			printf("��Ǫ");
			break;
		case 9:
			printf("��Ǫ");
			break;

	}
	switch (e)
	{
		case 0:
			if (f == 0)
			{
				break;
			}
			else
			{
				printf("��");
				break;
			}
			break;
		case 1:
			printf("Ҽ��");
			break;
		case 2:
			printf("����");
			break;
		case 3:
			printf("����");
			break;
		case 4:
			printf("����");
			break;
		case 5:
			printf("���");
			break;
		case 6:
			printf("½��");
			break;
		case 7:
			printf("���");
			break;
		case 8:
			printf("�ư�");
			break;
		case 9:
			printf("����");
			break;

	}
	switch (d)
	{
		case 0:
			if ((e == 0) || ((e != 0) && (f != 0)))
			{
				break;
			}
			else
			{
				printf("��");
				break;
			}
			break;
		case 1:
			printf("Ҽʰ");
			break;
		case 2:
			printf("��ʰ");
			break;
		case 3:
			printf("��ʰ");
			break;
		case 4:
			printf("��ʰ");
			break;
		case 5:
			printf("��ʰ");
			break;
		case 6:
			printf("½ʰ");
			break;
		case 7:
			printf("��ʰ");
			break;
		case 8:
			printf("��ʰ");
			break;
		case 9:
			printf("��ʰ");
			break;

	}
	switch (c)
	{
		case 0:
			if ((d == 0) && (e == 0) && (f == 0))
			{
				break;
			}
			else
			{
				printf("Բ");
				break;
			}
		case 1:
			printf("ҼԲ");
			break;
		case 2:
			printf("��Բ");
			break;
		case 3:
			printf("��Բ");
			break;
		case 4:
			printf("��Բ");
			break;
		case 5:
			printf("��Բ");
			break;
		case 6:
			printf("½Բ");
			break;
		case 7:
			printf("��Բ");
			break;
		case 8:
			printf("��Բ");
			break;
		case 9:
			printf("��Բ");
			break;

	}
	switch (b)
	{
		case 0:
			if (a != 0)
				printf("��");
			break;

		case 1:
			printf("Ҽ��");
			break;
		case 2:
			printf("����");
			break;
		case 3:
			printf("����");
			break;
		case 4:
			printf("����");
			break;
		case 5:
			printf("���");
			break;
		case 6:
			printf("½��");
			break;
		case 7:
			printf("���");
			break;
		case 8:
			printf("�ƽ�");
			break;
		case 9:
			printf("����");
			break;

	}


	switch (a)
	{
		case 0:
			printf("��\n");
			break;

		case 1:
			printf("Ҽ��\n");
			break;
		case 2:
			printf("����\n");
			break;
		case 3:
			printf("����\n");
			break;
		case 4:
			printf("����\n");
			break;
		case 5:
			printf("���\n");
			break;
		case 6:
			printf("½��\n");
			break;
		case 7:
			printf("���\n");
			break;
		case 8:
			printf("�Ʒ�\n");
			break;
		case 9:
			printf("����\n");
			break;

	}

	return 0;

}