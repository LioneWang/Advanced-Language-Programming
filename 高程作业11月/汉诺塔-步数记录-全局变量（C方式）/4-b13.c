/* 2150265 ����� ����09�� */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int num_ = 1;
/* ----����Ҫ��----
   1���������������ͷ�ļ�
   2��������һ��ȫ�ֱ������������徲̬�ֲ�����
   3������������������������ʼ/Ŀ�����ĺ���������������ʹ��ѭ�������������
   4����������ú������У���main�в���������κ���ʽ��ѭ��
      ���������main�н��У���main���������ѭ��
   --------------------------------------------------------------------- */


   /***************************************************************************
     �������ƣ�
     ��    �ܣ���ӡn�㺺ŵ�����ƶ�˳��
     ���������int n������
               char src����ʼ��
               char tmp���м���
               char dst��Ŀ����
     �� �� ֵ��
     ˵    ����1�����������βΡ��������;���׼��
               2������������������κ���ʽ��ѭ��
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
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    �����������(��������뺯��)�����õݹ麯��
***************************************************************************/
int main()
{
	int num;
	while (1)
	{

		printf("�����뺺ŵ���Ĳ���(1-16)\n");
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
		
		printf("��������ʼ��(A-C)\n");
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




	printf("������Ŀ����(A-C)\n");
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
			printf("Ŀ����(%c)��������ʼ��(%c)��ͬ\n",dst,src);
			printf( "������Ŀ����(A-C)\n");
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
	printf( "�ƶ�����Ϊ:\n");
	hanoi(num, src, tmp, dst);


}