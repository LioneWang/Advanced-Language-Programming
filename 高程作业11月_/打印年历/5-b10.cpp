#include <iostream>
#include<iomanip>
#include<windows.h>
using namespace std;
void runnian(int year, int array[], int n);
int zeller(int month, int day,  int n);
void print_row(int array[], int array1[], int row, int n, int p);

int main()
{
	system("mode con cols=120 lines=145");
	int month_[12] = { 31,30,31,30,31,30,31,31,30,31,30,31 };
	int week_[12];
	int i = 0;
	int year;
	while (1)
	{
		cout << "请输入年份[1900-2100]" << endl;
		cin >> year;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(1024, '\n');
			continue;
		}
			
		else if (year > 2100 || year < 1900)
		{
			cin.clear();
			cin.ignore(1024, '\n');
			continue;
		}
			
		else
		{
			cin.clear();
			cin.ignore(1024, '\n');
			break;
		}
			
	}
	
	
	
	cout << year << "年的日历:" << endl;
	cout << endl;
	runnian(year, month_,12);
	for (i = 0; i < 12; i++)
	{
		week_[i] = zeller(year, i + 1, 1);
		
	}
	
	cout << "            1月" << "                             2月" << "                             3月" << endl;
	cout << "Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat " << endl;
	for (i = 0; i < 6; i++)
	{
		
		print_row(week_, month_,i + 1,0,0);
		cout << "    ";
		
		print_row(week_, month_, i+1, 1,1);
		cout << "    ";
		
		print_row( week_,  month_, i + 1, 2,2);
		if(i<5)
			cout << endl;
	}
	cout << endl;
	
	cout << "            4月" << "                             5月" << "                             6月" << endl;
	cout << "Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat " << endl;
	for (i = 0; i < 6; i++)
	{

		print_row(week_, month_, i + 1, 3, 3);
		cout << "    ";

		print_row(week_, month_, i + 1, 4, 4);
		cout << "    ";

		print_row(week_, month_, i + 1, 5, 5);
		
		
		cout << endl;
	}
	cout << endl;
	cout << "            7月" << "                             8月" << "                             9月" << endl;
	cout << "Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat " << endl;
	for (i = 0; i < 6; i++)
	{

		print_row(week_, month_, i + 1, 6, 6);
		cout << "    ";

		print_row(week_, month_, i + 1, 7, 7);
		cout << "    ";

		print_row(week_, month_, i + 1, 8, 8);
		
		cout << endl;
	}
	cout << endl;
	cout << "           10月" << "                            11月" << "                            12月" << endl;
	cout << "Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat " << endl;
	for (i = 0; i < 6; i++)
	{

		print_row(week_, month_, i + 1, 9, 9);
		cout << "    ";

		print_row(week_, month_, i + 1, 10, 10);
		cout << "    ";

		print_row(week_, month_, i + 1, 11, 11);
		
		cout << endl;
	}
	cout << endl;
	cout << endl;
	return 0;
}

void runnian(int year, int array[],int n)
{
	if (((year % 400) == 0) || ((year % 100) != 0 && (year % 4) == 0))
	{
		array[1] = 29;
	}
	else
		array[1] = 28;

}

int zeller(int year, int month, int day)
{
	if ((month == 1) || (month == 2))
	{
		year = year - 1;
		month = month + 12;
	}
	int week1;
	int a, b, c, d, y, m, w;
	a = year % 10;
	b = (year / 10) % 10;
	y = 10 * b + a;
	m = month;
	d = day;
	c = (year - y) / 100;
	w = y + static_cast<int>(y / 4) + static_cast<int>(c / 4) - 2 * c + static_cast<int>((26 * (m + 1)) / 10) + d - 1;
	if (w < 0)
	{
		w = -w;
		week1 = 7 - (w % 7);
		if (week1 == 7)
			return 0;
		else
			return week1;
	}
	else
	{
		week1 = w % 7;
		if (week1 == 7)
			return 0;
		else
			return week1;

	}
	return 0;
}
void print_row( int array[], int array1[], int row, int n,int p)
{
	int date1 = 0;
	int i = 0;
	if (row == 1)
	{
		for (date1 = 0; date1 < array[n]; date1++)
		{
			
			cout << "    ";
		}
		for (i = 1; i <= row * 7 - array[n]; i++)
		{
			Sleep(200);
			cout << setw(4) << setiosflags(ios::left) << i;
		}
			
	}
	else
	{
		for (i = (row - 1) * 7 - array[n] + 1; i <= (row * 7 - array[n]); i++)
		{
			if (i <= array1[p])
			{
				Sleep(200);
				cout << setw(4) << setiosflags(ios::left) << i;
			}
				
			else if (i > array1[p] && i == 5)
				;
			else
			{
				
				cout << "    ";
			}
				
		}
			

	}
}