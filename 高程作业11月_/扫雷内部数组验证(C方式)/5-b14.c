/* 2150265 王加炜 济勤09班*/
/* 2153820 陆济贤 2153299 杨非凡 2151406 刘卓明 2153769 张烨 2152042 丁泽桐 2152203 叶哲轩 2153399 王子文 2152488 赵希坚 2154167 宋引川 2153819 石中玉 */

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	char num_[12][28];
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 28; j++)
        {
            num_[i][j] = 0;
           
        }
      

    }
  
   //读取输入
    for (int i = 1; i < 11; i++)
    {
        for (int j = 1; j < 27; j++)
        {
            num_[i][j]=getchar();
            getchar();
        }
        getchar();
        
    }
   



    //判断是否有五十个雷（若正确则num为50）
    int num=0;
    for (int i = 1; i < 11; i++)
    {
        for (int j = 1; j < 27; j++)
        {
            if (num_[i][j] == '*')
                num++;
            
        }


    }

    //计算周围的雷数是否正确（若正确该数组应该有210个元素为0）
    for (int i = 1; i < 11; i++)
    {
        for (int j = 1; j < 27; j++)
        {
            if (num_[i][j] != '*')
            {
                for (int p = i - 1; p <= i + 1; p++)
                {
                    for (int q = j - 1; q <= j + 1; q++)
                    {
                        if (num_[p][q] == '*')
                        {
                            num_[i][j]--;
                        }
                    }
                }
            }
        }
    }

    int zero=0;
    for (int i = 1; i < 11; i++)
    {
        for (int j = 1; j < 27; j++)
        {
            if (num_[i][j] == '0')
                zero++;
        }


    }



    //判断加输出
    if (num != 50)
    {
        printf("错误1\n");
        return 0;
    }
    else
    {
        if (zero == 210)
        {
            printf("正确\n");
            return 0;
        }
        else
        {
            printf("错误2\n");
            return 0;
        }
    }
	return 0;
}