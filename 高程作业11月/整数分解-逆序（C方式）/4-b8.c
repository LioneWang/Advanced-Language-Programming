/* 2150265 ����� ����09�� */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* ----����Ҫ��----
   1���������������ͷ�ļ�
   2����������ȫ�ֱ�������̬�ֲ�����
   3�������������������
   4������������������κ���ʽ��ѭ��
   --------------------------------------------------------------------- */

   /***************************************************************************
	 �������ƣ�
	 ��    �ܣ�������n�ֽ���������
	 ���������
	 �� �� ֵ��
	 ˵    ����1�����������βΡ��������;���׼��
			   2��������ʹ��64λ����
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
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����main������׼��
***************************************************************************/
int main()
{
	int n;
	printf("������һ������\n");
	scanf("%d", &n);

	convert(n);
	printf("\n");

	return 0;
}