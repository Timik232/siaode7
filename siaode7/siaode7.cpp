// siaode7.cpp : вариант 13
//Префиксная	Массив	Вычислить значение выражения
#include <iostream>
using namespace std;

void in_to_mas(string prefix,char a[100])
{
	int count = 0;
	for (int i = 0; i < prefix.size(); i++)
	{
		if (prefix[i] != ' ')
		{
			a[count] = prefix[i];
			count += 1;
		}
	}
}

int main()
{
	string prefix = "-*+2 3 5 * 2 3";
	string prefix1 = "+3 * 4 2";
	char a[100];
	in_to_mas(prefix,a);
	cout << a[1];
}
