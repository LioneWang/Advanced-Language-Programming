/* 2150265 王加炜 济勤09班 */
#define _CRT_SECURE_NO_WARNINGS		//使用了VS认为unsafe的函数
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <ctime>
#include <conio.h>	//用getch，因此不需要支持Linux
#include <string.h>	//Dev/CB的strlen需要
using namespace std;
const struct KFC {
	char number;
	char dish[20];
	double price;
};
const struct KFC list[27] = {
	{'A', "香辣鸡腿堡",         18.5},
	{'B', "劲脆鸡腿堡",         18.5},
	{'C', "新奥尔良烤鸡腿堡",   19},
	{'D', "老北京鸡肉卷",       17},
	{'E', "川辣嫩牛卷",         19.5},
	{'F', "深海鳕鱼堡",         18.5},
	{'G', "吮指原味鸡(1块)",    11.5},
	{'H', "芝芝肉酥热辣脆皮鸡", 12.5},
	{'I', "新奥尔良烤翅(2块)",  12.5},
	{'J', "劲爆鸡米花",         11.5},
	{'K', "香辣鸡翅(2块)",      12.0},
	{'L', "藤椒无骨大鸡柳(2块)",12.5},
	{'M', "鲜蔬色拉",           13},
	{'N', "薯条(小)",           9},
	{'O', "薯条(中)",           12},
	{'P', "薯条(大)",           14},
	{'Q', "芙蓉蔬荟汤",         9},
	{'R', "原味花筒冰激凌",     6},
	{'S', "醇香土豆泥",         7},
	{'T', "香甜粟米棒",         9.0},
	{'U', "葡式蛋挞",           8.0},
	{'V', "百事可乐(小)",       7.0},
	{'W', "百事可乐(中)",       9.5},
	{'X', "百事可乐(大)",       11.5},
	{'Y', "九珍果汁饮料",       12.5},
	{'Z', "纯纯玉米饮",         11.5},
	{'\0', NULL,                0}
};
const struct SPECIAL {
	char num[15] ;
	char dish[20];
	double price;
};
const struct SPECIAL special[] = {
	//	{"ANV", "香辣鸡腿堡工作日午餐",  24}, //如果有需要，放开此项，注释掉下一行的“BMV”优惠，观察优惠菜单是否发生了变化
		{"BMV", "劲脆鸡腿堡超值套餐",    26},
		{"ABCGGIIKKOUWWW", "超值全家桶", 115},
		{"KIIRRJUWW", "缤纷小吃桶",      65},
		{"JJ","劲爆鸡米花(2份小)",       12.5},
		{NULL, NULL, 0}
};

int main()
{
	
	

	
	static int l = 0;
	const struct KFC* p1 = list;
	const struct SPECIAL* p2 = special;
	while (1)
	{
		l = 0;
		cout << "=============================================================" << endl;
		cout << "                     KFC 2021秋季菜单                       " << endl;
		cout << "=============================================================" << endl;
		cout << " A 香辣鸡腿堡          18.5   |   B 劲脆鸡腿堡          18.5  " << endl;
		cout << " C 新奥尔良烤鸡腿堡    19     |   D 老北京鸡肉卷        17    " << endl;
		cout << " E 川辣嫩牛卷          19.5   |   F 深海鳕鱼堡          18.5  " << endl;
		cout << " G 吮指原味鸡(1块)     11.5   |   H 芝芝肉酥热辣脆皮鸡  12.5  " << endl;
		cout << " I 新奥尔良烤翅(2块)   12.5   |   J 劲爆鸡米花          11.5  " << endl;
		cout << " K 香辣鸡翅(2块)       12     |   L 藤椒无骨大鸡柳(2块) 12.5  " << endl;
		cout << " M 鲜蔬色拉            13     |   N 薯条(小)            9     " << endl;
		cout << " O 薯条(中)            12     |   P 薯条(大)            14    " << endl;
		cout << " Q 芙蓉蔬荟汤          9      |   R 原味花筒冰激凌      6     " << endl;
		cout << " S 醇香土豆泥          7      |   T 香甜粟米棒          9     " << endl;
		cout << " U 葡式蛋挞            8      |   V 百事可乐(小)        7     " << endl;
		cout << " W 百事可乐(中)        9.5    |   X 百事可乐(大)        11.5  " << endl;
		cout << " Y 九珍果汁饮料        12.5   |   Z 纯纯玉米饮          11.5  " << endl;
		cout << endl;
		cout << "【优惠信息】：" << endl;
		cout << "劲脆鸡腿堡超值套餐=劲脆鸡腿堡+鲜蔬色拉+百事可乐(小)=26" << endl;
		cout << "超值全家桶=香辣鸡腿堡+劲脆鸡腿堡+新奥尔良烤鸡腿堡+吮指原味鸡(1块)*2+新奥尔良烤翅(2块)*2+香辣鸡翅(2块)*2+薯条(中)+葡式蛋 挞+百事可乐(中)*3=115" << endl;
		cout << "缤纷小吃桶=新奥尔良烤翅(2块)*2+劲爆鸡米花+香辣鸡翅(2块)+原味花筒冰激凌*2+葡式蛋挞+百事可乐(中)*2=65" << endl;
		cout << "劲爆鸡米花(2份小)=劲爆鸡米花*2=12.5" << endl;
		cout << endl;
		cout << "【输入规则说明】：" << endl;
		cout << "ANV=香辣鸡腿堡+薯条(小)+百事可乐(小) / akaak=香辣鸡腿堡*3+香辣鸡翅*2" << endl;
		cout << "字母不分大小写，不限顺序，单独输入0则退出程序" << endl;
		cout << endl;
		cout << "请点单:";
		char num_[26];
		fgets(num_, 26, stdin);
		int len = strlen(num_) - 1;
		cout << "您的点餐=";
		
		for (int i = 0; i < 26; i++)
		{
			
			int cishu = 0;
			for (int s = 0; s < len; s++)
			{

				if (((p1 + i)->number) == num_[s]|| ((p1 + i)->number) == num_[s]-32)
				{
					
					cishu++;

					
				}

				
					
			}
			if (cishu > 0)
			{
				l++;
			}
			if (l == 1)
			{
				if (cishu == 1)
					cout <<  (p1 + i)->dish;
				else if (cishu > 1)
					cout <<  (p1 + i)->dish << "*" << cishu;
				else
					;
			}
			else
			{
				if (cishu == 1)
					cout << "+" << (p1 + i)->dish;
				else if (cishu > 1)
					cout << "+" << (p1 + i)->dish << "*" << cishu;
				else
					;
			}
			l++;
		}
		cout << endl;

		int p = 0;
		int q = 0;
		for (p = 0, len == strlen((p2)->num) - 1; p < int(strlen((p2)->num) - 1); p++)
		{
			if (num_[p] != (p2)->num[p])
				break;
		}
		if (p == (strlen((p2)->num) - 1))
		{
			cout << "共计：" << p2->price << "元";
			q = 100;
		}



		for (p = 0, len == strlen((p2 + 1)->num) - 1; p < int(strlen((p2 + 1)->num) - 1); p++)
		{
			if (num_[p] != (p2 + 1)->num[p])
				break;
		}
		if (p == (strlen((p2 + 1)->num) - 1))
		{
			cout << "共计：" << p2->price << "元";
			q = 100;
		}



		for (p = 0, len == strlen((p2 + 2)->num) - 1; p < int(strlen((p2 + 2)->num) - 1); p++)
		{
			if (num_[p] != (p2 + 2)->num[p])
				break;
		}
		if (p == (strlen((p2 + 2)->num) - 1))
		{
			cout << "共计：" << p2->price << "元";
			q = 100;
		}



		for (p = 0, len == strlen((p2 + 3)->num) - 1; p < int(strlen((p2 + 3)->num) - 1); p++)
		{
			if (num_[p] != (p2 + 3)->num[p])
				break;
		}
		if (p == (strlen((p2 + 3)->num) - 1))
		{
			cout << "共计：" << p2->price << "元";
			q = 100;
		}




		if (q != 100)
		{
			double qian = 0;
			for (int i = 0; i < 27; i++)
			{

				for (int s = 0; s < len; s++)
				{
					if (((p1 + i)->number) == num_[s] || ((p1 + i)->number) == num_[s] - 32)
					{

						qian += (p1 + i)->price;

					}
				}

			}
			cout << "共计：" << qian << "元";
		}
		cout << endl;
		cout << "点单完成，按任意键继续." << endl;
		char n=_getch();
		system("cls");
	}
	
	return 0;
}