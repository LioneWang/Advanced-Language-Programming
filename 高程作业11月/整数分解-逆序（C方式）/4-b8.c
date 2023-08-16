/* 2150265 王加炜 济勤09班 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* ----具体要求----
   1、不允许添加其它头文件
   2、不允许定义全局变量、静态局部变量
   3、不允许添加其它函数
   4、整个程序不允许出现任何形式的循环
   --------------------------------------------------------------------- */

   /***************************************************************************
	 函数名称：
	 功    能：将整数n分解后逆序输出
	 输入参数：
	 返 回 值：
	 说    明：1、函数名、形参、返回类型均不准动
			   2、不允许使用64位整数
   ***************************************************************************/
void convert(int n)
{
	
	if (-2147483647-1 < n  &&   n < 0)
	{
		n = -n;
		convert(n);
		printf( "- ");
		
	}

	else if (n >= 0)
	{
		if (n < 10)
		{

			switch (n)
			{
				case 1:
					printf("%c", '1');

					break;
				case 2:
					printf("%c", '2');
					break;
				case 3:
					printf("%c", '3');
					break;
				case 4:
					printf("%c", '4');
					break;
				case 5:
					printf("%c", '5');
					break;
				case 6:
					printf("%c", '6');
					break;
				case 7:
					printf("%c", '7');
					break;
				case 8:
					printf("%c", '8');
					break;
				case 9:
					printf("%c", '9');
					break;
			}
			printf(" ");
		}

		else
		{
			
			
			switch (n %10)
			{
				case 1:
					printf("%c", '1');

					break;
				case 2:
					printf("%c", '2');
					break;
				case 3:
					printf("%c", '3');
					break;
				case 4:
					printf("%c", '4');
					break;
				case 5:
					printf("%c", '5');
					break;
				case 6:
					printf("%c", '6');
					break;
				case 7:
					printf("%c", '7');
					break;
				case 8:
					printf("%c", '8');
					break;
				case 9:
					printf("%c", '9');
					break;
			}
			printf(" ");
			convert(n / 10);
			

		}
	}
	if (n == -2147483647-1)
	{
		n = n + 1;
		n = (-n)/10;
		
		printf("- 8 ");
		convert(n);
	}

}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：main函数不准动
***************************************************************************/
int main()
{
	int n;
	printf("请输入一个整数\n");
	scanf("%d", &n);

	convert(n);
	printf("\n");

	return 0;
}