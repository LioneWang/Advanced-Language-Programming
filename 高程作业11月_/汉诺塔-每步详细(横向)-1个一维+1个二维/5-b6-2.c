/* 2150265 王加炜 济勤09班 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int num_ = 0;
int stack_[3][100];

int top_[3];


void move_hanoi(int n, char src, char dst, int arc_1[], int arc_3[])
{
	if (src == 'A')
		--top_[0];
	if (src == 'B')
		--top_[1];
	if (src == 'C')
		--top_[2];

	if (dst == 'A')
		arc_3[top_[0]++] = n;
	if (dst == 'B')
		arc_3[top_[1]++] = n;
	if (dst == 'C')
		arc_3[top_[2]++] = n;

	num_++;

	printf("第%4d 步(%2d): %c-->%c ", num_, n, src, dst);

	int i = 0;
	printf( "A:");
	for (i = 0; i < 10; i++)

		if (i == 0)
		{
			if (i < top_[0])
				printf("%2d ",stack_[0][i]);
			else
				printf( "   ");
		}
		else if (i < top_[0])
		{
			printf( "%d ",stack_[0][i]);
		}
		else
			printf( "  ");
	printf( "B:");
	for (i = 0; i < 10; i++)
		if (i == 0)
		{
			if (i < top_[1])
				printf("%2d ", stack_[1][i]);
			else
				printf( "   ");
		}
		else if (i < top_[1])
		{
			printf("%d ", stack_[1][i]);
		}
		else
			printf( "  ");
	printf( "C:");
	for (i = 0; i < 10; i++)

		if (i == 0)
		{
			if (i < top_[2])
				printf("%2d ", stack_[2][i]);
			else
				printf( "   ");
		}
		else if (i < top_[2])
		{
			printf("%d ", stack_[2][i]);
		}
		else
			printf( "  ");
	printf( "\n");

}
void hanoi(int n, char src, char tmp, char dst, int arc_1[], int arc_2[], int arc_3[])
{

	//将上面的n-1个木块由x借助z移到y

	if (n == 1)
	{
		;
	}
	else
	{


		hanoi(n - 1, src, dst, tmp, arc_1, arc_3, arc_2);
	}






	//将最下面的一个木块由x借助y移到z

	move_hanoi(n, src, dst, arc_1, arc_3);


	//将上面的n-1个木块由y借助x移到z

	if (n == 1)
	{
		;
	}
	else
	{

		hanoi(n - 1, tmp, src, dst, arc_2, arc_1, arc_3);
	}



}


int main()
{
	int num;
	int i;
	while (1)
	{

		printf( "请输入汉诺塔的层数(1-10)：\n");
		int x=scanf("%d", &num);
		

		if (x==0)
		{
			while (getchar() != '\n')
				getchar();
			continue;
		}
		else if (num < 1 || num>10)
		{
			while (getchar() != '\n')
				getchar();
			continue;
		}
		else
			while (getchar() != '\n')
				getchar();
			break;
	}
	char src, tmp, dst;
	while (1)
	{

		printf( "请输入起始柱(A-C)：\n");
		scanf("%c", &src);
		if (src == 'A' || src == 'a')
		{
			top_[0] = num;
			for (i = 0; i < num; i++)
				stack_[0][i] = num - i;
		}
		if (src == 'B' || src == 'b')
		{
			top_[1] = num;
			for (i = 0; i < num; i++)
				stack_[1][i] = num - i;
		}
		if (src == 'C' || src == 'c')
		{
			top_[2] = num;
			for (i = 0; i < num; i++)
				stack_[2][i] = num - i;
		}


		



		if ((int)(src) == 65 || (int)(src) == 66 || (int)(src) == 67 || (int)(src) == 97 || (int)(src) == 98 || (int)(src) == 99)
		{
			while (getchar() != '\n')
				getchar();
			break;
		}
		else
			continue;
	}




	printf( "请输入目标柱(A-C)：\n");
	scanf("%c", &dst);


	if (src > 96 && src < 100)
		src = src - 32;

	if (dst > 96 && dst < 100)
		dst = dst - 32;
	while (1)
	{
		if ((src == dst) || (src == dst - 32))
		{
			printf( "目标柱(%c)不能与起始柱(%c)相同\n",dst , src );
			printf( "请输入目标柱(A-C)\n") ;
			scanf("%c", &dst);
		}
		else
			break;
	}
	if (dst > 96 && dst < 100)
		dst = dst - 32;
	tmp = 198 - src - dst;
	printf( "初始:                ");
	printf( "A:");
	for (i = 0; i < 10; i++)
		if (i == 0)
		{
			if (stack_[0][0] != 0)
				printf("%2d ", stack_[0][i]);
			else
				printf("    ");
		}
		else if (i < top_[0])
			printf("%d ", stack_[0][i]);
		else
			printf( "  ");
	printf( "B:");
	for (i = 0; i < 10; i++)
		if (i == 0)
		{
			if (stack_[1][0] != 0)
				printf("%2d ", stack_[1][i]);
			else
				printf("   ");
		}
		else if (i < top_[1])
			printf("%d ", stack_[1][i]);
		else
			printf( "  ");
	printf( "C:");
	for (i = 0; i < 10; i++)
		if (i == 0)
		{
			if (stack_[2][0] != 0)
				printf("%2d ", stack_[2][i]);
			else
				printf("    ");
		}
		else if (i < top_[2])
			printf("%d ", stack_[2][i]);
		else
			printf( "  ");
	printf("\n");

	hanoi(num, src, tmp, dst, stack_[0],stack_[1],stack_[2]);


}