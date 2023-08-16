/* 2150265 王加炜 济勤09班 */
#include <iostream>
#include <iomanip>
using namespace std;
int num_=0;
int stack_A[100];
int stack_B[100];
int stack_C[100];
int top_A, top_B, top_C;

void move_hanoi(int n, char src, char dst,int arc_1[],int arc_3[])
{
	if (src == 'A')
		--top_A;
	if (src == 'B')
		--top_B;
	if (src == 'C')
		--top_C;

	if (dst == 'A')
		arc_3[top_A++] = n;
	if (dst == 'B')
		arc_3[top_B++] = n;
	if (dst == 'C')
		arc_3[top_C++] = n;
	
	num_++;

	cout <<"第"<< setw(4) << setiosflags(ios::right) << num_ << " " <<"步("<< setw(2) << setiosflags(ios::right) << n << "): " << src << "-->" << dst<<" ";
	
	int i = 0;
	cout << "A:";
	for (i = 0; i < 10; i++)

		if (i == 0)
		{
			if (i < top_A)
				cout << setw(2) <<stack_A[i]<< " ";
			else
				cout << "   ";
		}
	    else if (i < top_A)
		{
			cout << stack_A[i] << " ";
		}
		else
			cout << "  ";
	cout << "B:";
	for (i = 0; i <10; i++)
		if (i == 0)
		{
			if (i < top_B)
				cout << setw(2) << stack_B[i] << " ";
			else
				cout << "   ";
		}
		else if (i < top_B)
		{
			cout << stack_B[i] << " ";
		}
		else
			cout << "  ";
	cout << "C:";
	for (i = 0; i < 10; i++)

		if (i == 0)
		{
			if (i < top_C)
				cout << setw(2) << stack_C[i] << " ";
			else
				cout << "   ";
		}
		else if (i < top_C)
		{
			cout << stack_C[i] << " ";
		}
		else
			cout << "  ";
	cout << endl;

}
void hanoi(int n, char src, char tmp, char dst, int arc_1[], int arc_2[],int arc_3[])
{

	//将上面的n-1个木块由x借助z移到y

	if (n == 1)
	{
		;
	}
	else
	{


		hanoi(n - 1, src, dst, tmp,  arc_1,  arc_3, arc_2);
	}






	//将最下面的一个木块由x借助y移到z

	move_hanoi(n, src, dst, arc_1, arc_3);


	//将上面的n-1个木块由y借助x移到z

	if (n == 1)
	{
		;
	}
	else
	{

		hanoi(n - 1, tmp, src, dst, arc_2, arc_1, arc_3);
	}



}


int main()
{
	int num;
	int i;
	while (1)
	{

		cout << "请输入汉诺塔的层数(1-10)：" << endl;
		cin >> num;
		
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(1024, '\n');
		}
		else if (num < 1 || num>10)
		{
			cin.clear();
			cin.ignore(1024, '\n');
			continue;
		}
		else
			break;
	}
	char src, tmp, dst;
	while (1)
	{

		cout << "请输入起始柱(A-C)：" << endl;
		cin >> src;
		if (src == 'A'|| src=='a')
		{
			top_A = num;
			for (i = 0; i < num; i++)
				stack_A[i] = num-i;
		}
		if (src == 'B'|| src=='b')
		{
			top_B = num;
			for (i = 0; i < num; i++)
				stack_B[i] = num-i;
		}
		if (src == 'C' ||src=='c')
		{
			top_C = num;
			for (i = 0; i < num; i++)
				stack_C[i] = num-i;
		}
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(1024, '\n');
		}
		else if (int(src) == 65 || int(src) == 66 || int(src) == 67 || int(src) == 97 || int(src) == 98 || int(src) == 99)
		{
			cin.clear();
			cin.ignore(1024, '\n');
			break;
		}
		else
			continue;
	}




	cout << "请输入目标柱(A-C)：" << endl;
	cin >> dst;


	if (src > 96 && src < 100)
		src = src - 32;

	if (dst > 96 && dst < 100)
		dst = dst - 32;
	while (1)
	{
		if ((src == dst) || (src == dst - 32))
		{
			cout << "目标柱(" << dst << ")" << "不能与起始柱(" << src << ")相同" << endl;
			cout << "请输入目标柱(A-C)" << endl;
			cin >> dst;
		}
		else
			break;
	}
	if (dst > 96 && dst < 100)
		dst = dst - 32;
	tmp = 198 - src - dst;
	cout << "初始:" << setw(18);
	cout << "A:";
	for (i = 0; i < 10; i++)
		if (i == 0)
		{
			if (stack_A[0] != 0)
				cout << setw(2) << stack_A[i] << " ";
			else
				cout << setw(3) << " ";
		}
		else if (i < top_A)
				cout << stack_A[i] << " ";
		else
			cout << "  ";
	cout << "B:";
	for (i = 0; i < 10; i++)
		if (i == 0)
		{
			if (stack_B[0] != 0)
				cout << setw(2) << stack_B[i]<<" ";
			else
				cout << setw(3) << " ";
		}
		else if (i < top_B)
			cout << stack_B[i] << " ";
		else
			cout << "  ";
	cout << "C:";
	for (i = 0; i < 10; i++)
		if (i == 0)
		{
			if (stack_C[0] != 0)
				cout << setw(2) << stack_C[i]<<" ";
			else
				cout << setw(3) << " ";
		}
		else if (i < top_C)
			cout << stack_C[i] << " ";
		else
			cout << "  ";
	cout << endl;

	hanoi(num, src, tmp, dst, stack_A,stack_B,stack_C);


}