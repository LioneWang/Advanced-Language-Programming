/* 2150265 王加炜 济勤09班 */
#include <iostream>
#include<windows.h>
#include<string.h>
using namespace std;
int main()
{
	//读取第一行
	while (1)
	{
		if (getchar() == '\n')
			break;
	}
	
	static const char qita__[] = "~!@#$%^&*()-_=+[],.?";
	//接收指定的要求长度
	int password_len, daxie, xiaoxie, shuzi,qita;
	cin >> password_len;
	cin >> daxie;
	cin >> xiaoxie;
	cin >> shuzi;
	cin >> qita;


	//判断长度是否正确
	getchar();
	int i;
	for ( i = 0; i < 10; i++)
	{
		
		int password_len_=0, daxie_=0, xiaoxie_=0, shuzi_=0, qita_=0;
		int num = 0;
		char psw;
		while (1)
		{
			psw= getchar();
			if (psw <= 90 && psw >= 65)
				daxie_++;
			else if (psw <= 122 && psw >= 97)
				xiaoxie_++;
			else if (psw <= 57 && psw >= 48)
				shuzi_++;
			else
			{
				if (psw == '\n')
					;
				else
				{
					int j = 0;
					for (j = 0; j < 20; j++)
					{
						if (psw == qita__[j])
						{
							qita_++;
							break;
						}
						
					}
					

				}
				
				
			
			}
				

			if (psw== '\n')
				break;

			num++;
		}	
		if (num != password_len)
			break;
		else if (daxie_ < daxie)
			break;
		else if (xiaoxie_ < xiaoxie)
			break;
		else if (shuzi_ < shuzi)
			break;
		else if (qita_ < qita)
			break;
		else if (daxie_ + xiaoxie_ + shuzi_ + qita_ != password_len)
			break;
		
		else
			;
	}

	if (i == 10)
		cout << "正确" << endl;
	else
		cout << "错误 "<< endl;

	return 0;
}