/* 2150265 王加炜 济勤09班 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int num_ = 1;
/* ----具体要求----
   1、不允许添加其它头文件
   2、允许定义一个全局变量、不允许定义静态局部变量
   3、允许添加用于输入层数、起始/目标柱的函数，函数中允许使用循环处理错误输入
   4、如果输入用函数进行，则main中不允许出现任何形式的循环
      如果输入在main中进行，则main中允许出现循环
   --------------------------------------------------------------------- */


   /***************************************************************************
     函数名称：
     功    能：打印n层汉诺塔的移动顺序
     输入参数：int n：层数
               char src：起始柱
               char tmp：中间柱
               char dst：目标柱
     返 回 值：
     说    明：1、函数名、形参、返回类型均不准动
               2、本函数不允许出现任何形式的循环
   ***************************************************************************/
void move_hanoi(int n, char src, char dst)
{
    
	printf("%5d:%3d# %c-->%c\n", num_, n, src, dst);
}


void hanoi(int n, char src, char tmp, char dst)
{

    if (n == 1)
        ;
    else
        hanoi(n - 1, src, dst, tmp);

    
	
	move_hanoi(n, src,  dst);
	num_++;
   
	
	
	
	if (n == 1)
        ;
    else
        hanoi(n - 1, tmp, src, dst);

}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：完成输入(或调用输入函数)、调用递归函数
***************************************************************************/
int main()
{
	int num;
	while (1)
	{

		printf("请输入汉诺塔的层数(1-16)\n");
		int ret=scanf ( "%d", &num);
		
		if (ret!=1)
		{
			while (getchar() != '\n')
				getchar();
			continue;
		}
		else if (num < 1 || num>16)
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
		
		printf("请输入起始柱(A-C)\n");
		int ret = scanf("%c",&src);
		if (ret != 1)
		{
			while (getchar() != '\n')
				getchar();
			continue;
		}
		else if (src == 65 || src == 66 || src == 67 || src == 97 || src == 98 || src == 99)
		{
			while (getchar() != '\n')
				getchar();
			break;
		}
		else
			while (getchar() != '\n')
				getchar();
			continue;
	}




	printf("请输入目标柱(A-C)\n");
	scanf("%c", &dst);
	while (getchar() != '\n')
		getchar();


	if (src > 96 && src < 100)
		src = src - 32;

	if (dst > 96 && dst < 100)
		dst = dst - 32;
	while (1)
	{
		if ((src == dst) || (src==dst-32))
		{
			printf("目标柱(%c)不能与起始柱(%c)相同\n",dst,src);
			printf( "请输入目标柱(A-C)\n");
			scanf("%c",&dst);
			while (getchar() != '\n')
				getchar();
		}
		else
			break;
	}
	if (dst > 96 && dst < 100)
		dst = dst - 32;
	tmp = 198 - src - dst;
	printf( "移动步骤为:\n");
	hanoi(num, src, tmp, dst);


}