#include <iostream>
using namespace std;
void runnian(int year, int array[], int n);
int tianshu(int month, int day, int array[], int n);

int main()
{
	int month_[12] = { 31,30,31,30,31,30,31,31,30,31,30,31 };
	cout << "请输入年，月，日" << endl;
	int year, month, day,sum;
	cin >> year;
	cin >> month;
	cin >> day;
	runnian(year, month_, 12);
	sum = tianshu(month, day, month_,12);
	cout << year << "-" << month << "-" << day << "是" << year << "年的第" <<  sum<< "天" << endl;
	return 0;
}
void runnian(int year,int array[],int n)
{
	if (((year % 4) == 0) || ((year % 100) == 0 && (year % 400) == 0))
	{
		array[1] = 29;
	}
	else
		array[1] = 28;

}

int tianshu(int month,int day,int array[],int n)
{
	int i = 0;
	int sum = 0;
	for (i = 0; i < month - 1; i++)
	{
		sum = sum + array[i];
	}
	sum = sum + day;
	return sum;
}