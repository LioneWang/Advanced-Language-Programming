#include<iostream>
using namespace std;
int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}
int max(int a, int b, int c)
{
	if (a > b)
		if (a > c)
			return a;
		else
			return c;
	else
		if (b > c)
			return b;
		else
			return c;
}

int max(int a, int b, int c, int d)
{
	if (a > b)
		if (a > c)
			if (a > d)
				return a;
			else
				return d;
		else
			if (c < d)
				return d;
			else
				return c;
	else
		if (b > c)
			if (b > d)
				return b;
			else
				return d;
		else
			if (c > d)
				return c;
			else
				return d;
}