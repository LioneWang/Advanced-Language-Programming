/* 2150265 ����� ����09��*/
/* 2153820 ½���� 2153299 ��Ƿ� 2151406 ��׿�� 2153769 ���� 2152042 ����ͩ 2152203 Ҷ���� 2153399 ������ 2152488 ��ϣ�� 2154167 ������ 2153819 ʯ���� */

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
  
   //��ȡ����
    for (int i = 1; i < 11; i++)
    {
        for (int j = 1; j < 27; j++)
        {
            num_[i][j]=getchar();
            getchar();
        }
        getchar();
        
    }
   



    //�ж��Ƿ�����ʮ���ף�����ȷ��numΪ50��
    int num=0;
    for (int i = 1; i < 11; i++)
    {
        for (int j = 1; j < 27; j++)
        {
            if (num_[i][j] == '*')
                num++;
            
        }


    }

    //������Χ�������Ƿ���ȷ������ȷ������Ӧ����210��Ԫ��Ϊ0��
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



    //�жϼ����
    if (num != 50)
    {
        printf("����1\n");
        return 0;
    }
    else
    {
        if (zero == 210)
        {
            printf("��ȷ\n");
            return 0;
        }
        else
        {
            printf("����2\n");
            return 0;
        }
    }
	return 0;
}