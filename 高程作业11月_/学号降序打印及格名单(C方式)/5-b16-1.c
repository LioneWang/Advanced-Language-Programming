#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void input(char arc1[][8],char arc2[][9],int arc3[])
{
	for (int i = 0; i < 10; i++)
	{
		printf("请输入第%d个人的学号、姓名、成绩\n",i+1);
		scanf("%s", &arc1[i]);
		scanf("%s", &arc2[i]);
		scanf("%d", &arc3[i]);
	}
}
void jiangxu(char arc1[][8],char arc2[][9],int arc3[])
{
	int  i, j, k;
	for (i = 0; i < 9; i++)
	{
		k = i;
		for (j = i + 1; j < 10; j++)
		{
			if ((strcmp(arc1[j], arc1[k])) > 0)
				k = j;
		}
		char t[10][8];
		
		strcpy(t[i], arc1[k]);
		strcpy(arc1[k], arc1[i]);
		strcpy(arc1[i], t[i]);

		char q[10][9];
		strcpy(q[i], arc2[k]);
		strcpy(arc2[k], arc2[i]);
		strcpy(arc2[i], q[i]);

		int m;
		m = arc3[k];
		arc3[k] = arc3[i];
		arc3[i] = m;
		
	}
}
void output(char arc1[][8], char arc2[][9], int arc3[])
{
	for (int i = 0; i < 10; i++)
	{
		if (arc3[i] >= 60)
		{
			printf("%s  ", arc1[i]);
			printf("%s  ", arc2[i]);
			printf("%d  ", arc3[i]);
			printf("\n");
		}
		
	}
}
int main()
{
	char xuehao[10][8];
	char xingming[10][9];
	int chengji[10];
	input(xuehao, xingming, chengji);
	jiangxu(xuehao, xingming, chengji);
	printf( "及格名单(学号降序)\n");
	output(xuehao, xingming, chengji);
	return 0;
}