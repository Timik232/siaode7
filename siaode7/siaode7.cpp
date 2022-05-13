// siaode7.cpp : вариант 13
//Префиксная	Массив	Вычислить значение выражения
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int in_to_mas(string prefix,char a[100])
{
	int n = prefix.size();
	for (int i = 0; i < n; i++)
	{
		a[i] = prefix[i];		
	}
	return n;
}
float counting(string prefix)
{
	float a[100];
	int n = prefix.size();
	string buf = "";
	int count = -1;
	for (int i = n - 1; i >= 0; i--)
	{
		if (prefix[i] == '+')
		{
			if (buf != "")
			{
				count += 1;
				//cout << "buf=" << buf << " ";
				a[count] = stof(buf);
				//cout << "a=" << a[count] << " ";
				buf = "";
			}
			float cifr1 = a[count];
			a[count] = 0;
			count -= 1;
			float cifr2 = a[count];
			a[count] = cifr1 + cifr2;
		}
		else if (prefix[i] == '-')
		{
			if (buf != "")
			{
				count += 1;
				//cout << "buf=" << buf << " ";
				a[count] = stof(buf);
				//cout << "a=" << a[count] << " ";
				buf = "";
			}
			float cifr1 = a[count];
			a[count] = 0;
			count -= 1;
			float cifr2 = a[count];
			a[count] = cifr1 - cifr2;
		}
		else if (prefix[i] == '*')
		{
			if (buf != "")
			{
				count += 1;
				//cout << "buf=" << buf << " ";
				a[count] = stof(buf);
				//cout << "a=" << a[count] << " ";
				buf = "";
			}
			float cifr1 = a[count];
			a[count] = 0;
			count -= 1;
			float cifr2 = a[count];
			a[count] = cifr1 * cifr2;
		}
		else if (prefix[i] == '/')
		{
			if (buf != "")
			{
				count += 1;
				//cout << "buf=" << buf << " ";
				a[count] = stof(buf);
				//cout << "a=" << a[count] << " ";
				buf = "";
			}
			float cifr1 = a[count];
			a[count] = 0;
			count -= 1;
			float cifr2 = a[count];
			a[count] = cifr1 / cifr2;
		}
		else if (prefix[i] == '^')
		{
			float cifr1 = a[count];
			a[count] = 0;
			count -= 1;
			float cifr2 = a[count];
			a[count] = pow(cifr1, cifr2);
		}
		else if (prefix[i] != ' ')
			buf += prefix[i];
		else if (prefix[i] == ' ')
		{
			if (buf != "")
			{
				count += 1;
				//cout << "buf=" << buf << " ";
				a[count] = stof(buf);
				//cout << "a=" << a[count] << " ";
				buf = "";
			}
		}
	}
	return a[count];
}
int main()
{
	string prefix = "-*+2 3 5 * 2 3";
	string prefix1 = "+3 * 4 2";
	//char a[100];
	//int n = in_to_mas(prefix,a);
	cout << "first result: " << counting(prefix1) << endl;
	//char b[100];
	//n = in_to_mas(prefix1, b);
	cout << "second result: " << counting(prefix);
	system("pause");
}
