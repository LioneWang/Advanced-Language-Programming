/* 2150265 ĞÅ09 Íõ¼Óì¿ */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{


	double num1, num2;
	long long int num3;
	int a, b, c, d, e, f, g, h, i, j, k, l, num4;
	printf("ÇëÊäÈëÒ»¸ö[0-100ÒÚ)Ö®¼äµÄÊı×Ö:\n");
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
			printf("Ê°");
			break;
		case 2:
			printf("·¡Ê°");
			break;
		case 3:
			printf("ÈşÊ°");
			break;
		case 4:
			printf("ËÁÊ°");
			break;
		case 5:
			printf("ÎéÊ°");
			break;
		case 6:
			printf("Â½Ê°");
			break;
		case 7:
			printf("ÆâÊ°");
			break;
		case 8:
			printf("°ÆÊ°");
			break;
		case 9:
			printf("¾ÁÊ°");
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
				printf("ÒÚ");
				break;
			}
			break;
		case 1:
			printf("Ò¼ÒÚ");
			break;
		case 2:
			printf("·¡ÒÚ");
			break;
		case 3:
			printf("ÈşÒÚ");
			break;
		case 4:
			printf("ËÁÒÚ");
			break;
		case 5:
			printf("ÎéÒÚ");
			break;
		case 6:
			printf("Â½ÒÚ");
			break;
		case 7:
			printf("ÆâÒÚ");
			break;
		case 8:
			printf("°ÆÒÚ");
			break;
		case 9:
			printf("¾ÁÒÚ");
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
				printf("Áã");
			break;
			break;
		case 1:
			printf("Ò¼Çª");
			break;
		case 2:
			printf("·¡Çª");
			break;
		case 3:
			printf("ÈşÇª");
			break;
		case 4:
			printf("ËÁÇª");
			break;
		case 5:
			printf("ÎéÇª");
			break;
		case 6:
			printf("Â½Çª");
			break;
		case 7:
			printf("ÆâÇª");
			break;
		case 8:
			printf("°ÆÇª");;
			break;
		case 9:
			printf("¾ÁÇª");
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
				printf("Áã");
				break;
			}
			break;
		case 1:
			printf("Ò¼°Û");
			break;
		case 2:
			printf("·¡°Û");
			break;
		case 3:
			printf("Èş°Û");
			break;
		case 4:
			printf("ËÁ°Û");
			break;
		case 5:
			printf("Îé°Û");
			break;
		case 6:
			printf("Â½°Û");
			break;
		case 7:
			printf("Æâ°Û");
			break;
		case 8:
			printf("°Æ°Û");
			break;
		case 9:
			printf("¾Á°Û");
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
				printf("Áã");
				break;
			}
			break;
		case 1:
			printf("Ò¼Ê°");
			break;
		case 2:
			printf("·¡Ê°");
			break;
		case 3:
			printf("ÈşÊ°");
			break;
		case 4:
			printf("ËÁÊ°");
			break;
		case 5:
			printf("ÎéÊ°");
			break;
		case 6:
			printf("Â½Ê°");
			break;
		case 7:
			printf("ÆâÊ°");
			break;
		case 8:
			printf("°ÆÊ°");
			break;
		case 9:
			printf("¾ÁÊ°");
			break;

	}
	switch (g)
	{
		case 0:
			if ((i != 0) || (j != 0) || (h != 0))
			{
				printf("Íò");
			}
			if ((i == 0) && (j == 0) && (h == 0))
			{
				break;
			}
			break;
		case 1:
			printf("Ò¼Íò");
			break;
		case 2:
			printf("·¡Íò");
			break;
		case 3:
			printf("ÈşÍò");
			break;
		case 4:
			printf("ËÁÍò");
			break;
		case 5:
			printf("ÎéÍò");
			break;
		case 6:
			printf("Â½Íò");
			break;
		case 7:
			printf("ÆâÍò");
			break;
		case 8:
			printf("°ÆÍò");
			break;
		case 9:
			printf("¾ÁÍò");
			break;

	}

	switch (f)
	{
		case 0:
			if ((c == 0) && (d == 0) && (e == 0))
				break;
			else if ((c != 0) || (d != 0) || (e != 0))
				printf("Áã");
			break;
			break;
		case 1:
			printf("Ò¼Çª");
			break;
		case 2:
			printf("·¡Çª");
			break;
		case 3:
			printf("ÈşÇª");
			break;
		case 4:
			printf("ËÁÇª");
			break;
		case 5:
			printf("ÎéÇª");
			break;
		case 6:
			printf("Â½Çª");
			break;
		case 7:
			printf("ÆâÇª");
			break;
		case 8:
			printf("°ÆÇª");
			break;
		case 9:
			printf("¾ÁÇª");
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
				printf("Áã");
				break;
			}
			break;
		case 1:
			printf("Ò¼°Û");
			break;
		case 2:
			printf("·¡°Û");
			break;
		case 3:
			printf("Èş°Û");
			break;
		case 4:
			printf("ËÁ°Û");
			break;
		case 5:
			printf("Îé°Û");
			break;
		case 6:
			printf("Â½°Û");
			break;
		case 7:
			printf("Æâ°Û");
			break;
		case 8:
			printf("°Æ°Û");
			break;
		case 9:
			printf("¾Á°Û");
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
				printf("Áã");
				break;
			}
			break;
		case 1:
			printf("Ò¼Ê°");
			break;
		case 2:
			printf("·¡Ê°");
			break;
		case 3:
			printf("ÈşÊ°");
			break;
		case 4:
			printf("ËÁÊ°");
			break;
		case 5:
			printf("ÎéÊ°");
			break;
		case 6:
			printf("Â½Ê°");
			break;
		case 7:
			printf("ÆâÊ°");
			break;
		case 8:
			printf("°ÆÊ°");
			break;
		case 9:
			printf("¾ÁÊ°");
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
				printf("Ô²");
				break;
			}
		case 1:
			printf("Ò¼Ô²");
			break;
		case 2:
			printf("·¡Ô²");
			break;
		case 3:
			printf("ÈşÔ²");
			break;
		case 4:
			printf("ËÁÔ²");
			break;
		case 5:
			printf("ÎéÔ²");
			break;
		case 6:
			printf("Â½Ô²");
			break;
		case 7:
			printf("ÆâÔ²");
			break;
		case 8:
			printf("°ÆÔ²");
			break;
		case 9:
			printf("¾ÁÔ²");
			break;

	}
	switch (b)
	{
		case 0:
			if (a != 0)
				printf("Áã");
			break;

		case 1:
			printf("Ò¼½Ç");
			break;
		case 2:
			printf("·¡½Ç");
			break;
		case 3:
			printf("Èş½Ç");
			break;
		case 4:
			printf("ËÁ½Ç");
			break;
		case 5:
			printf("Îé½Ç");
			break;
		case 6:
			printf("Â½½Ç");
			break;
		case 7:
			printf("Æâ½Ç");
			break;
		case 8:
			printf("°Æ½Ç");
			break;
		case 9:
			printf("¾Á½Ç");
			break;

	}


	switch (a)
	{
		case 0:
			printf("Õû\n");
			break;

		case 1:
			printf("Ò¼·Ö\n");
			break;
		case 2:
			printf("·¡·Ö\n");
			break;
		case 3:
			printf("Èş·Ö\n");
			break;
		case 4:
			printf("ËÁ·Ö\n");
			break;
		case 5:
			printf("Îé·Ö\n");
			break;
		case 6:
			printf("Â½·Ö\n");
			break;
		case 7:
			printf("Æâ·Ö\n");
			break;
		case 8:
			printf("°Æ·Ö\n");
			break;
		case 9:
			printf("¾Á·Ö\n");
			break;

	}

	return 0;

}