/* ¼ÃÇÚ09°à 2150265 Íõ¼Óì¿ */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 2; i <= 2000; i++)
	{
		int j = 0;
		int s = 0;
		for (j = 1; j < i; j++)
		{
			if(i%j==0)
				s = s + j;
		}
		if (i == s)
		{
			printf("%d,its factors are ", i);
			for (j = 1; j < i; j++)
			{
				if ((i % j == 0)&&(j!=(i/2)))
					printf("%d,", j);
				if(j==(i/2))
					printf("%d\n", j);
			}
		}
	}
	return 0;
}